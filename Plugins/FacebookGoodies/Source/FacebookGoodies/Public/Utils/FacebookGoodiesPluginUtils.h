//Copyright (c) 2020 Nineva Studios

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "Interfaces/IPluginManager.h"
#include "PluginDescriptor.h"

#include "FacebookGoodiesPluginUtils.generated.h"

UCLASS()
class UFacebookGoodiesPluginUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	* Get plugin version name
	*
	* @param PluginName - name of the plugin to get info from
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Plugin Utils")
		static FString GetPluginVersionName(FString PluginName);
};

