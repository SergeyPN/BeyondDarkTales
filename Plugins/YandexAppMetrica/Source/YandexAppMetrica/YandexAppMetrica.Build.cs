// Copyright (C) 2022 Andrey Kharitonov. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class YandexAppMetrica : ModuleRules
{
	public YandexAppMetrica(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Public/IYandexAppMetrica.h";		
		

		PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                });
				
		PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "Settings",
                }
            );		
		
		PublicIncludePaths.AddRange(
				new string[] {
					// ... add public include paths required here ...
					//"YandexAppMetrica/Public"
				}
				);

		PrivateIncludePaths.AddRange(
				new string[] {
					// ... add other private include paths required here ...
					"YandexAppMetrica/Private"
				}
				);
				
		if (Target.Platform == UnrealTargetPlatform.IOS)
        {
            PublicAdditionalFrameworks.Add(
                new Framework(
                    "YandexMobileMetrica",
                    "../ThirdParty/iOS/YandexMobileMetrica.embeddedframework.zip"
                    )
                        
            );
					
			PublicFrameworks.AddRange(
				new string[]
				{
					"SystemConfiguration",
					"UIKit",
					"Foundation",
					"CoreTelephony",
					"CoreLocation",
					"CoreGraphics",
					"AdSupport",
					"Security",
					"SafariServices"
				}
            );	

			PublicAdditionalLibraries.Add("z");
			PublicAdditionalLibraries.Add("c++");
			PublicAdditionalLibraries.Add("sqlite3");
			
		} else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            //PrivateDependencyModuleNames.Add("Launch");   
			string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);			
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "YandexAppMetrica_UPL.xml"));
        }
    }
}
