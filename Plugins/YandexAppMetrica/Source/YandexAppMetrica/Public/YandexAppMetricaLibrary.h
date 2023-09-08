// Copyright (C) 2020 Andrey Kharitonov. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "YandexAppMetricaLibrary.generated.h"

UCLASS()
class UYandexAppMetricaLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:

	/** Report user event with params (optional JSON string) */
	UFUNCTION(BlueprintCallable, Category = YandexAppMetrica)
	static void YandexAppMetrica_ReportEvent(const FString& RepEventName, const FString& RepParams);
	
	/** Send events immediately (for example when user forced to exit app) */
	UFUNCTION(BlueprintCallable, Category = YandexAppMetrica)
	static void YandexAppMetrica_SendEventsBuffer();	
	
	/** Send Profile Attributes (user id, user name, gender (0-male,1-female,2-other), age, is notificaions enabled) */
	UFUNCTION(BlueprintCallable, Category = YandexAppMetrica)
	static void YandexAppMetrica_SendProfileAttributes(const FString& pUserProfileID, const FString& pName, const int pGender, const int pAge, const bool pNotifications);

	/** Init Yandex Metrica (works only for iOS builds, android will init automatically) */
	UFUNCTION(BlueprintCallable, Category = YandexAppMetrica)
	static void YandexAppMetrica_InitSDK();	
};
