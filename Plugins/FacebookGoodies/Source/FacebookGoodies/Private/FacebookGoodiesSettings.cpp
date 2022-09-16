// Copyright (c) 2020 Nineva Studios

#include "FacebookGoodiesSettings.h"

#include "FacebookGoodiesLog.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "XmlFile.h"
#include "XmlNode.h"

#if WITH_EDITOR
void UFacebookGoodiesSettings::PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent)
{
	Super::PostEditChangeProperty(propertyChangedEvent);

	const FName Name = (propertyChangedEvent.MemberProperty != nullptr) ? propertyChangedEvent.MemberProperty->GetFName() : NAME_None;

	if (Name == FName(TEXT("FacebookAppID")) || Name == FName(TEXT("FacebookClientToken")))
	{
		static const FString PluginDir = IPluginManager::Get().FindPlugin(TEXT("FacebookGoodies"))->GetBaseDir();
		static const FString ResFileTemplatePath = PluginDir / TEXT("Source") / TEXT("FacebookGoodies") / TEXT("FacebookGoodies.xml");
		static const FString ResFilePath = FPaths::ProjectDir() / TEXT("FacebookGoodies.xml");

		if (FacebookAppID.IsEmpty())
		{
			UE_LOG(LogFacebookGoodies, Warning, TEXT("Facebook App ID is not set"));
		}

		if (FacebookClientToken.IsEmpty())
		{
			UE_LOG(LogFacebookGoodies, Warning, TEXT("Facebook Client Token is not set"));
		}

		if (!FPaths::FileExists(ResFilePath))
		{
			IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
			const bool bResult = PlatformFile.CopyFile(*ResFilePath, *ResFileTemplatePath);

			if (!bResult)
			{
				UE_LOG(LogFacebookGoodies, Error, TEXT("Failed to copy Android resource file for Facebook Goodies"));
				return;
			}
		}

		FXmlFile ResFile;
		ResFile.LoadFile(ResFilePath);

		TArray<FXmlNode*> ChildNodes = ResFile.GetRootNode()->GetChildrenNodes();
		FXmlNode* AppIdNode = ChildNodes[0]; // facebook_app_id
		FXmlNode* LoginProtocolSchemeNode = ChildNodes[1]; // fb_login_protocol_scheme
		FXmlNode* FacebookClientTokenNode = ChildNodes[2]; // facebook_client_token
		if (AppIdNode && AppIdNode->GetAttribute(TEXT("name")) == TEXT("facebook_app_id"))
		{
			AppIdNode->SetContent(FacebookAppID);
			LoginProtocolSchemeNode->SetContent(FString(TEXT("fb")) + FacebookAppID);
			FacebookClientTokenNode->SetContent(FacebookClientToken);
			ResFile.Save(ResFilePath);
		}
	}
	
	if (Name == FName(TEXT("bEnableAudienceNetwork")))
	{
		HandleAudienceNetwork();
	}
}

void UFacebookGoodiesSettings::HandleAudienceNetwork()
{
	if (GConfig)
	{
		FString Section = "/Script/IOSRuntimeSettings.IOSRuntimeSettings";
		FString ConfigFileName = IFileManager::Get().ConvertToAbsolutePathForExternalAppForWrite(*(FPaths::ProjectConfigDir() + "DefaultEngine.ini"));
		FString AdditionalLinkerFlags, AdditionalShippingLinkerFlags;
		GConfig->GetString(*Section, TEXT("AdditionalLinkerFlags"), AdditionalLinkerFlags, ConfigFileName);
		GConfig->GetString(*Section, TEXT("AdditionalShippingLinkerFlags"), AdditionalShippingLinkerFlags, ConfigFileName);
		
		if (bEnableAudienceNetwork) {
			if (!AdditionalLinkerFlags.Contains("-lxml2")) {
				AdditionalLinkerFlags += " -lxml2";
			}
			if (!AdditionalShippingLinkerFlags.Contains("-lxml2")) {
				AdditionalShippingLinkerFlags += " -lxml2";
			}
		} else {
			AdditionalLinkerFlags = AdditionalLinkerFlags.Replace(TEXT(" -lxml2"), TEXT(""));
			AdditionalShippingLinkerFlags = AdditionalShippingLinkerFlags.Replace(TEXT(" -lxml2"), TEXT(""));
		}
		
		GConfig->SetString(*Section, TEXT("AdditionalLinkerFlags"), *AdditionalLinkerFlags, ConfigFileName);
		GConfig->SetString(*Section, TEXT("AdditionalShippingLinkerFlags"), *AdditionalShippingLinkerFlags, ConfigFileName);
		GConfig->Flush(false, ConfigFileName);
	}
}
#endif
