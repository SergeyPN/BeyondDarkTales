// Copyright (c) 2020 Nineva Studios

#include "FacebookGoodies.h"

#include "FacebookGoodiesLog.h"
#include "FacebookGoodiesSettings.h"
#include "Utils/FacebookGoodiesPluginUtils.h"

#include "Engine/Engine.h"
#include "Developer/Settings/Public/ISettingsModule.h"

#if PLATFORM_IOS
#include "IOSAppDelegate.h"
#include "FBEventHandler.h"
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#endif

#define LOCTEXT_NAMESPACE "FFacebookGoodiesModule"

void FFacebookGoodiesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FString PluginName = "FacebookGoodies";

	FacebookGoodiesSettings = NewObject<UFacebookGoodiesSettings>(GetTransientPackage(), "FacebookGoodiesSettings", RF_Standalone);
	FacebookGoodiesSettings->AddToRoot();

	// Register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "FacebookGoodies",
			LOCTEXT("RuntimeSettingsName", "Facebook Goodies"),
			LOCTEXT("RuntimeSettingsDescription", "Configure Facebook Goodies"),
			FacebookGoodiesSettings);
	}

	FString PluginVersionName = UFacebookGoodiesPluginUtils::GetPluginVersionName(PluginName);
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("[%s] - Version: %s"), *PluginName, *PluginVersionName);

#if PLATFORM_IOS
	// TODO checkbox in settings
	[FBSDKSettings setAdvertiserTrackingEnabled:YES];

	[[FBSDKApplicationDelegate sharedInstance] initializeSDK];
	[FBEventHandler load];
	[[FBEventHandler sharedInstance] didFinishLaunching:nil];

	FIOSCoreDelegates::OnOpenURL.AddLambda(
	[](UIApplication* application, NSURL* url, NSString* sourceApplication, id annotation)
	{
		[[FBSDKApplicationDelegate sharedInstance] application:application
			openURL:url
			sourceApplication:sourceApplication
			annotation:annotation];
	});
#endif
}

void FFacebookGoodiesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "FacebookGoodies");
	}

	if (!GExitPurge)
	{
		// If we're in exit purge, this object has already been destroyed
		FacebookGoodiesSettings->RemoveFromRoot();
	}
	else
	{
		FacebookGoodiesSettings = nullptr;
	}
}

UFacebookGoodiesSettings* FFacebookGoodiesModule::GetSettings() const
{
	return FacebookGoodiesSettings;
}

#undef LOCTEXT_NAMESPACE

DEFINE_LOG_CATEGORY(LogFacebookGoodies);

IMPLEMENT_MODULE(FFacebookGoodiesModule, FacebookGoodies)
