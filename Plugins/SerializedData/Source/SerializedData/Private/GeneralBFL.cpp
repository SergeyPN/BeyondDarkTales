// Copyright of Exo404


#include "GeneralBFL.h"

TArray<uint8> UGeneralBFL::ObjectSaver(UObject* SaveObject)
{
	TArray<uint8> ObjectData;
	if (SaveObject == nullptr) return ObjectData;

	FMemoryWriter MemoryWriter(ObjectData, true);
	// use a wrapper archive that converts FNames and UObject*'s to strings that can be read back in
	MySaveGameArchive MyArchive(MemoryWriter);
	// serialize the object
	SaveObject->Serialize(MyArchive);

	return ObjectData;

}

void UGeneralBFL::ObjectLoader(UObject* LoadObject, TArray<uint8> ObjectData)
{
	if (ObjectData.Num() <= 0) return;
	//TODO how to check if valid binary?

	FMemoryReader MemoryReader(ObjectData, true);
	MySaveGameArchive MyArchive(MemoryReader);
	LoadObject->Serialize(MyArchive);
}


