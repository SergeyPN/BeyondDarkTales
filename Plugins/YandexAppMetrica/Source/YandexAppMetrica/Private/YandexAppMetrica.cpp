// Copyright (C) 2020 Andrey Kharitonov. All Rights Reserved.

#include "IYandexAppMetrica.h"
#include "ISettingsModule.h"

#define LOCTEXT_NAMESPACE "YandexAppMetrica"

class FYandexAppMetrica : public IYandexAppMetrica
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FYandexAppMetrica, YandexAppMetrica )

void FYandexAppMetrica::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
	//YandexAppMSettings = NewObject<UYandexAppMetricaSettings>(GetTransientPackage(), "YandexAppMetricaSettings", RF_Standalone);
	//YandexAppMSettings->AddToRoot();

	// Register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "YandexAppMetrica",
			LOCTEXT("RuntimeSettingsName", "YandexAppMetrica"),
			LOCTEXT("RuntimeSettingsDescription", "Configure API keys for YandexAppMetrica"),
			GetMutableDefault<UYandexAppMetricaSettings>()
		);
	}
}

void FYandexAppMetrica::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "YandexAppMetrica");
	}
}