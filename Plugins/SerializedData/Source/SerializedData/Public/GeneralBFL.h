// Copyright of Exo404

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "GeneralBFL.generated.h"

/**
 * 
 */

struct MySaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
	MySaveGameArchive(FArchive& InInnerArchive)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, false)
	{
		ArIsSaveGame = true;
	}
};



UCLASS(Blueprintable)
class SERIALIZEDDATA_API UGeneralBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "BeyondDarkTale | BFL")
	static TArray<uint8> ObjectSaver(UObject* SaveObject);

	UFUNCTION(BlueprintCallable, Category = "BeyondDarkTale | BFL")
	static void ObjectLoader(UObject* LoadObject, TArray<uint8> ObjectData);
};
