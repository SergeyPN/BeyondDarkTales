// Copyright (c) 2020 Nineva Studios

#include "Analytics/FBAnalyticsLibrary.h"

#include "FacebookGoodiesLog.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBMethodCallUtils.h"
#include "Android/Utils/FBJavaConvertor.h"
#endif

#if PLATFORM_IOS
#import <FBSDKCoreKit/FBSDKAppEvents.h>
#import <FBSDKCoreKit/FBSDKSettings.h>
#endif

static const ANSICHAR* FBAnalyticsClassName = "com/ninevastudios/fbgoodies/FBGoodiesAnalytics";

#if PLATFORM_IOS
NSMutableDictionary<NSString*, NSObject*>* ConvertToDictionary(const TMap<FString, UFBAnalyticsEventParameter*>& Parameters) {
	NSMutableDictionary<NSString*, NSObject*>* dict = [NSMutableDictionary dictionary];
	
	for (const auto& DataPair : Parameters)
	{
		NSString* Key = DataPair.Key.GetNSString();
		switch (DataPair.Value->Type)
		{
			case EAnalyticsEventParameterType::Float:
			{
				float Value = DataPair.Value->GetValue<float>();
				dict[Key] = @(Value);
				break;
			}
			case EAnalyticsEventParameterType::Bool:
			{
				bool Value = DataPair.Value->GetValue<bool>();
				dict[Key] = @(Value);
				break;
			}
			case EAnalyticsEventParameterType::Int:
			{
				int64 Value = DataPair.Value->GetValue<int>();
				dict[Key] = @(Value);
				break;
			}
			case EAnalyticsEventParameterType::String:
			{
				NSString* Value = DataPair.Value->GetValue<FString>().GetNSString();
				dict[Key] = Value;
				break;
			}
		}
	}
	
	return dict;
}
#endif

void UFBAnalyticsLibrary::LogEvent(const FString& EventName)
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "LogEvent", "(Landroid/app/Activity;Ljava/lang/String;)V",
		FJavaWrapper::GameActivityThis, FBJavaConvertor::GetJavaString(EventName));
#elif PLATFORM_IOS
	[FBSDKAppEvents logEvent: EventName.GetNSString()];
#endif
}

void UFBAnalyticsLibrary::LogEventWithParameters(const FString& EventName, const TMap<FString, UFBAnalyticsEventParameter*>& Parameters)
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "LogEvent", "(Landroid/app/Activity;Ljava/lang/String;Landroid/os/Bundle;)V",
		FJavaWrapper::GameActivityThis, FBJavaConvertor::GetJavaString(EventName), FBJavaConvertor::AnalyticsParameterMapToJavaBundle(Parameters));
#elif PLATFORM_IOS
	NSMutableDictionary<NSString*, NSObject*>* dict = ConvertToDictionary(Parameters);
	
	[FBSDKAppEvents logEvent: EventName.GetNSString() parameters: dict];
#endif
}

void UFBAnalyticsLibrary::LogEventWithParametersAndSumValue(const FString& EventName, const TMap<FString, UFBAnalyticsEventParameter*>& Parameters, float ValueToSum)
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "LogEvent", "(Landroid/app/Activity;Ljava/lang/String;Landroid/os/Bundle;D)V",
		FJavaWrapper::GameActivityThis, FBJavaConvertor::GetJavaString(EventName), FBJavaConvertor::AnalyticsParameterMapToJavaBundle(Parameters), (jdouble) ValueToSum);
#elif PLATFORM_IOS
	NSMutableDictionary<NSString*, NSObject*>* dict = ConvertToDictionary(Parameters);
	
	[FBSDKAppEvents logEvent: EventName.GetNSString() valueToSum: (double) ValueToSum parameters: dict];
#endif
}

void UFBAnalyticsLibrary::SetUserData(const FFBUserData& UserData)
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "SetUserData", 
		"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
		FBJavaConvertor::GetJavaString(UserData.Email), FBJavaConvertor::GetJavaString(UserData.FirstName), FBJavaConvertor::GetJavaString(UserData.LastName),
		FBJavaConvertor::GetJavaString(UserData.Phone), FBJavaConvertor::GetJavaString(UserData.DateOfBirth), FBJavaConvertor::GetJavaString(UserData.Gender), FBJavaConvertor::GetJavaString(UserData.City),
		FBJavaConvertor::GetJavaString(UserData.State), FBJavaConvertor::GetJavaString(UserData.Zip), FBJavaConvertor::GetJavaString(UserData.Country));
#elif PLATFORM_IOS
	[FBSDKAppEvents setUserEmail:UserData.Email.GetNSString()
					   firstName:UserData.FirstName.GetNSString()
						lastName:UserData.LastName.GetNSString()
						   phone:UserData.Phone.GetNSString()
					 dateOfBirth:UserData.DateOfBirth.GetNSString()
						  gender:UserData.Gender.GetNSString()
							city:UserData.City.GetNSString()
						   state:UserData.State.GetNSString()
							 zip:UserData.Zip.GetNSString()
						 country:UserData.Country.GetNSString()];
#endif
}

void UFBAnalyticsLibrary::SetFlushBehaviour(bool Auto)
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "SetFlushBehaviour", "(Z)V", Auto);
#elif PLATFORM_IOS
	FBSDKAppEvents.flushBehavior = Auto ? FBSDKAppEventsFlushBehaviorAuto : FBSDKAppEventsFlushBehaviorExplicitOnly;
#endif
}

void UFBAnalyticsLibrary::ClearUserData()
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "ClearUserData", "()V");
#elif PLATFORM_IOS
	[FBSDKAppEvents clearUserData];
#endif
}

void UFBAnalyticsLibrary::ClearUserId()
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "ClearUserId", "()V");
#elif PLATFORM_IOS
	[FBSDKAppEvents clearUserID];
#endif
}

void UFBAnalyticsLibrary::Flush()
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(FBAnalyticsClassName, "Flush", "(Landroid/app/Activity;)V", FJavaWrapper::GameActivityThis);
#elif PLATFORM_IOS
	[FBSDKAppEvents flush];
#endif
}

FString UFBAnalyticsLibrary::GetAnonymousAppDeviceGuid()
{
	FString result;

#if PLATFORM_ANDROID
	result = FBMethodCallUtils::CallStaticStringMethod(FBAnalyticsClassName, "GetAnonymousAppDeviceGuid", "(Landroid/app/Activity;)Ljava/lang/String;", FJavaWrapper::GameActivityThis);
#elif PLATFORM_IOS
	result = FString([FBSDKAppEvents anonymousID]);
#endif

	return result;
}

FString UFBAnalyticsLibrary::GetApplicationId()
{
	FString result;

#if PLATFORM_ANDROID
	result = FBMethodCallUtils::CallStaticStringMethod(FBAnalyticsClassName, "GetApplicationId", "(Landroid/app/Activity;)Ljava/lang/String;", FJavaWrapper::GameActivityThis);
#elif PLATFORM_IOS
	result = FString([FBSDKSettings appID]);
#endif

	return result;
}

bool UFBAnalyticsLibrary::IsFlushAuto()
{
	bool result = false;

#if PLATFORM_ANDROID
	result = FBMethodCallUtils::CallStaticBoolMethod(FBAnalyticsClassName, "IsFlushAuto", "()Z");
#elif PLATFORM_IOS
	result = FBSDKAppEvents.flushBehavior == FBSDKAppEventsFlushBehaviorAuto;
#endif

	return result;
}

FString UFBAnalyticsLibrary::GetUserData()
{
	FString result;

#if PLATFORM_ANDROID
	result = FBMethodCallUtils::CallStaticStringMethod(FBAnalyticsClassName, "GetUserData", "()Ljava/lang/String;");
#elif PLATFORM_IOS
	result = [FBSDKAppEvents getUserData] == nil ? "" : FString([FBSDKAppEvents getUserData]);
#endif

	return result;
}

// TODO Create new class to move all the settings methods there
void UFBAnalyticsLibrary::SetAdvertiserTrackingEnabled(bool IsTrackingEnabled)
{
#if PLATFORM_ANDROID
	UE_LOG(LogFacebookGoodies, Error, TEXT("Platform is not supported."));
#endif
#if PLATFORM_IOS
	[FBSDKSettings setAdvertiserTrackingEnabled:IsTrackingEnabled];
#endif

// TODO method for setAdvertiserIDCollectionEnabled
}
