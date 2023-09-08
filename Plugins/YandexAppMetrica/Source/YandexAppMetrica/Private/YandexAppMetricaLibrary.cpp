// Copyright (C) 2020 Andrey Kharitonov. All Rights Reserved.

#include "YandexAppMetricaLibrary.h"
#include "IYandexAppMetrica.h"
#include "Modules/ModuleManager.h"
#include "Async/Async.h"

#if PLATFORM_ANDROID

#include "Android/AndroidApplication.h"
#include "Runtime/Launch/Public/Android/AndroidJNI.h"

#endif

#if PLATFORM_IOS

#import <YandexMobileMetrica/YandexMobileMetrica.h>

#endif 

UYandexAppMetricaLibrary::UYandexAppMetricaLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UYandexAppMetricaLibrary::YandexAppMetrica_InitSDK()
{
	//IYandexAppMetrica YandexMod = FModuleManager::LoadModuleChecked< IYandexAppMetrica >( "YandexAppMetrica" );
	FString YandexAPIKey = GetMutableDefault<UYandexAppMetricaSettings>()->YandexAppKey;
	int		YandexSessionTimeout = GetMutableDefault<UYandexAppMetricaSettings>()->YandexAppSessionTimeout;
	int32	SessionTimeoutLocal  = YandexSessionTimeout;

	#if PLATFORM_IOS
	NSString *APIKeyYandex = YandexAPIKey.GetNSString(); 
	// Initializing the AppMetrica SDK.
    YMMYandexMetricaConfiguration *configuration = [[YMMYandexMetricaConfiguration alloc] initWithApiKey:APIKeyYandex];
	configuration.sessionTimeout = SessionTimeoutLocal;
    [YMMYandexMetrica activateWithConfiguration:configuration];	
	#endif 
}

void UYandexAppMetricaLibrary::YandexAppMetrica_SendEventsBuffer()
{
	#if PLATFORM_ANDROID
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true))
    {
		jmethodID AndroidThunkJava_YandexAppMetrica_SendEventsBuffer;
        AndroidThunkJava_YandexAppMetrica_SendEventsBuffer = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_YandexAppMetrica_SendEventsBuffer", "()V", false);
        
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, AndroidThunkJava_YandexAppMetrica_SendEventsBuffer);
    }	
	#endif
	
	#if PLATFORM_IOS
	[YMMYandexMetrica sendEventsBuffer];
	#endif
}

void UYandexAppMetricaLibrary::YandexAppMetrica_SendProfileAttributes(const FString& pUserProfileID, const FString& pName, const int pGender, const int pAge, const bool pNotifications)
{
#if PLATFORM_ANDROID
	AsyncTask(ENamedThreads::GameThread, [pUserProfileID, pName, pGender, pAge, pNotifications]() {
		//
		if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true))
		{
			jmethodID AndroidThunkJava_YandexAppMetrica_SendProfileAttributes;
			AndroidThunkJava_YandexAppMetrica_SendProfileAttributes = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_YandexAppMetrica_SendProfileAttributes", "(Ljava/lang/String;Ljava/lang/String;IIZ)V", false);

			jstring JpUserProfileID = Env->NewStringUTF(TCHAR_TO_UTF8(*pUserProfileID));
			jstring JpName = Env->NewStringUTF(TCHAR_TO_UTF8(*pName));

			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, AndroidThunkJava_YandexAppMetrica_SendProfileAttributes, JpUserProfileID, JpName, pGender, pAge, pNotifications);
			
			Env->DeleteLocalRef(JpUserProfileID);
			Env->DeleteLocalRef(JpName);
		}
		else
		{
			//LOGD("%s: invalid JNIEnv", TCHAR_TO_ANSI(*VA_FUNC_LINE));
		}
		//
	});
#endif

#if PLATFORM_IOS

	NSString* NSpUserProfileID = pUserProfileID.GetNSString();
	NSString* NSpName = pName.GetNSString();
	YMMGenderType YMgenderType = (YMMGenderType) pGender;

	YMMMutableUserProfile* profile = [[YMMMutableUserProfile alloc]init];

	// Updating multiple attributes.
	[profile applyFromArray : @ [
		// Updating predefined attributes.
		[[YMMProfileAttribute name]withValue:NSpName],
			[[YMMProfileAttribute gender]withValue:YMgenderType],
			[[YMMProfileAttribute birthDate]withAge:pAge],
			[[YMMProfileAttribute notificationsEnabled]withValue:pNotifications]
	]];

	// ProfieID is set using the method of the YMMYandexMetrica class.
	[YMMYandexMetrica setUserProfileID:NSpUserProfileID];

	// Sending profile attributes.
	[YMMYandexMetrica reportUserProfile : [profile copy] onFailure : ^ (NSError * error) {
		NSLog(@"Error: %@", error);
	}] ;
#endif
}

void UYandexAppMetricaLibrary::YandexAppMetrica_ReportEvent(const FString& RepEventName, const FString& RepParams)
{
	#if PLATFORM_ANDROID
	AsyncTask(ENamedThreads::GameThread, [RepEventName, RepParams]() {
		//
		if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true))
		{
			jmethodID AndroidThunkJava_YandexAppMetrica_ReportEvent;
			AndroidThunkJava_YandexAppMetrica_ReportEvent = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_YandexAppMetrica_ReportEvent", "(Ljava/lang/String;Ljava/lang/String;)V", false);

			jstring JRepEventName = Env->NewStringUTF(TCHAR_TO_UTF8(*RepEventName));
			jstring JRepParams = Env->NewStringUTF(TCHAR_TO_UTF8(*RepParams));
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, AndroidThunkJava_YandexAppMetrica_ReportEvent, JRepEventName, JRepParams);
			Env->DeleteLocalRef(JRepEventName);
			Env->DeleteLocalRef(JRepParams);
		}
		else
		{
			//LOGD("%s: invalid JNIEnv", TCHAR_TO_ANSI(*VA_FUNC_LINE));
		}
		//
	});
	#endif

	#if PLATFORM_IOS
	AsyncTask(ENamedThreads::GameThread, [RepEventName, RepParams]() {
		//
		NSString *eventName = RepEventName.GetNSString(); 
		NSString *RepParamsNativeString = RepParams.GetNSString();
		
		NSData *jsonData = [RepParamsNativeString dataUsingEncoding:NSUTF8StringEncoding];
		NSError *jsdicterror;
		NSDictionary *jsonDict = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingAllowFragments error:&jsdicterror];
		
		[YMMYandexMetrica reportEvent:eventName
			parameters:jsonDict
			onFailure:^(NSError *error) {
				NSLog(@"error: %@", [error localizedDescription]);
                }];
		//		
	});
	#endif
}
