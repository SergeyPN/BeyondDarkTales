// Copyright (C) 2020 Andrey Kharitonov. All Rights Reserved.

#pragma once

#include "YandexAppMetricaSettings.generated.h"

UCLASS(config = Engine, defaultconfig)
class UYandexAppMetricaSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	/** Yandex AppMetrica app Key */
	UPROPERTY(Config, EditAnywhere, Category = AppData, Meta = (DisplayName = "API Key from Yandex Metrica"))
	FString YandexAppKey;
	
	/** Yandex AppMetrica session timeout */
	UPROPERTY(Config, EditAnywhere, Category = AppData, Meta = (DisplayName = "Yandex AppMetrica Session Timeout. Default is 10 sec"))
	int YandexAppSessionTimeout = 10;	
};
