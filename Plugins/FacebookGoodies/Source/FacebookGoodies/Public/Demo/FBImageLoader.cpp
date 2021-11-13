//Copyright (c) 2020 Nineva Studios


#include "FBImageLoader.h"

#include "Framework/Application/SlateApplication.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Misc/SecureHash.h"
#include "Modules/ModuleManager.h"
#include "FacebookGoodiesLog.h"
#include "Runtime/Launch/Resources/Version.h"

UFBImageLoader::UFBImageLoader(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UFBImageLoader::LoadImage(FString URL, const FOnImageLoaded& SuccessCallback, const FOnImageLoadFailed& ErrorCallback)
{
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("FacebookGoodiesDemo: Loading image from : %s"), *URL);

	const FString ResourseId = GetCacheName(URL).ToString();
	if (ImageBrushes.Contains(ResourseId))
	{
		UE_LOG(LogFacebookGoodies, Verbose, TEXT("FacebookGoodiesDemo: Loaded from cache: %s"), *ResourseId);
		SuccessCallback.ExecuteIfBound(*ImageBrushes.Find(ResourseId)->Get(), URL);
	}
	else
	{
		if (PendingRequests.Contains(ResourseId))
		{
			PendingRequests[ResourseId].AddLambda([=](bool IsCompleted) {
				if (IsCompleted)
				{
					UE_LOG(LogFacebookGoodies, Verbose, TEXT("FacebookGoodiesDemo: Loaded from cache: %s"), *ResourseId);
					SuccessCallback.ExecuteIfBound(*ImageBrushes.Find(ResourseId)->Get(), URL);
				}
				else
				{
					UE_LOG(LogFacebookGoodies, Verbose, TEXT("FacebookGoodiesDemo: Failed to get image"));
					ErrorCallback.ExecuteIfBound(URL);
				}
			});
		}
		else
		{
			FOnRequestCompleted imageLoadingCompletedDelegate;
			PendingRequests.Add(ResourseId, imageLoadingCompletedDelegate);
#if ENGINE_MINOR_VERSION < 26
			TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
#else
			TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
#endif
			HttpRequest->OnProcessRequestComplete().BindUObject(this, &UFBImageLoader::LoadImage_HttpRequestComplete, SuccessCallback, ErrorCallback);
			HttpRequest->SetURL(URL);
			HttpRequest->SetVerb(TEXT("GET"));

			HttpRequest->ProcessRequest();
		}
	}
}

void UFBImageLoader::LoadImage_HttpRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnImageLoaded SuccessCallback, FOnImageLoadFailed ErrorCallback)
{
	const FName ResourceName = GetCacheName(HttpRequest->GetURL());

	if (bSucceeded && HttpResponse.IsValid())
	{
		const TArray<uint8>& ImageData = HttpResponse->GetContent();

		IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
		const EImageFormat ImageType = ImageWrapperModule.DetectImageFormat(ImageData.GetData(), ImageData.Num());
		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageType);

		if (!ImageWrapper.IsValid())
		{
			UE_LOG(LogFacebookGoodies, Error, TEXT("FacebookGoodiesDemo: Invalid image wrapper"));
		}
		else if (ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
		{
			const int32 BytesPerPixel = ImageWrapper->GetBitDepth();
			
#if ENGINE_MINOR_VERSION < 25
			const TArray<uint8>* RawData;
			
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, BytesPerPixel, RawData) && RawData->Num() > 0)
			{
				if (FSlateApplication::Get().GetRenderer()->GenerateDynamicImageResource(ResourceName, ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), *RawData))
#else
			TArray<uint8> RawData;
				 
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, BytesPerPixel, RawData) && RawData.Num() > 0)
			{
				if (FSlateApplication::Get().GetRenderer()->GenerateDynamicImageResource(ResourceName, ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), RawData))
#endif
				{
					TSharedPtr<FSlateDynamicImageBrush> ImageBrush = MakeShareable(new FSlateDynamicImageBrush(ResourceName, FVector2D(ImageWrapper->GetWidth(), ImageWrapper->GetHeight())));
					ImageBrushes.Add(ResourceName.ToString(), ImageBrush);

					SuccessCallback.ExecuteIfBound(*ImageBrush.Get(), HttpRequest->GetURL());

					PendingRequests[ResourceName.ToString()].Broadcast(true);
					PendingRequests.Remove(ResourceName.ToString());

					return;
				}
				else
				{
					UE_LOG(LogFacebookGoodies, Error, TEXT("FacebookGoodiesDemo: Can't generate resource"));
				}
			}
			else
			{
				UE_LOG(LogFacebookGoodies, Error, TEXT("FacebookGoodiesDemo: Can't get raw data"));
			}
		}
		else
		{
			UE_LOG(LogFacebookGoodies, Error, TEXT("FacebookGoodiesDemo: Can't load compressed data"));
		}
	}
	else
	{
		UE_LOG(LogFacebookGoodies, Error, TEXT("FacebookGoodiesDemo: Failed to download image"));
	}

	ErrorCallback.ExecuteIfBound(HttpRequest->GetURL());

	if (PendingRequests.Contains(ResourceName.ToString()))
	{
		PendingRequests[ResourceName.ToString()].Broadcast(false);
		PendingRequests.Remove(ResourceName.ToString());
	}
}

FName UFBImageLoader::GetCacheName(const FString& URL) const
{
	return FName(*FString::Printf(TEXT("FacebookGoodiesDemo_%s"), *FMD5::HashAnsiString(*URL)));
}
