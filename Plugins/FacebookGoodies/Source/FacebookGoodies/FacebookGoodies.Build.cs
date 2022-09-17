// Copyright (c) 2020 Nineva Studios

using System.IO;
using UnrealBuildTool;
using Tools.DotNETCommon;

public class FacebookGoodies : ModuleRules
{
	public FacebookGoodies(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"XmlParser",
				"Http",
				"Json",
				"JsonUtilities",
				"Projects"
				// ... add private dependencies that you statically link with here ...
			}
			);

		string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);

		// Additional routine for Android
		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Android"));
			PublicDependencyModuleNames.Add("Launch");

			AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "FacebookGoodies_Android_UPL.xml"));
		}

		// Additional routine for iOS
		if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/IOS"));

			PublicFrameworks.Add("Accelerate");
			PublicFrameworks.Add("CFNetwork");

			PublicDefinitions.Add("FBSDK_SWIFT_PACKAGE=0");

			PublicAdditionalFrameworks.Add(new Framework("FBSDKCoreKit_Basics", "../ThirdParty/IOS/FBSDKCoreKit_Basics.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("FBSDKCoreKit", "../ThirdParty/IOS/FBSDKCoreKit.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("FBAEMKit", "../ThirdParty/IOS/FBAEMKit.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("FBSDKLoginKit", "../ThirdParty/IOS/FBSDKLoginKit.embeddedframework.zip"));
			PublicAdditionalFrameworks.Add(new Framework("FBSDKShareKit", "../ThirdParty/IOS/FBSDKShareKit.embeddedframework.zip"));
   
			bool EnableFBAudienceNetwork = false;
			
			if (Target.ProjectFile != null)
			{
				string ProjectPath = Path.GetDirectoryName(Target.ProjectFile.ToString());
				var Ini = UnrealBuildTool.ConfigCache.ReadHierarchy(ConfigHierarchyType.Engine, new DirectoryReference(ProjectPath), Target.Platform);
			
				bool TempBool;
				if (Ini.TryGetValue("/Script/FacebookGoodies.FacebookGoodiesSettings", "bEnableAudienceNetwork", out TempBool))
					EnableFBAudienceNetwork = TempBool;
			}
			
			if (EnableFBAudienceNetwork)
			{
				PublicAdditionalFrameworks.Add(new Framework("FBAudienceNetwork", "../ThirdParty/IOS/FBAudienceNetwork.embeddedframework.zip"));

				PublicFrameworks.AddRange(
					new string[]
					{
						"VideoToolbox"
					}
				);
			}
			
			PublicDefinitions.Add("WITH_AUDIENCE_NETWORK=" + (EnableFBAudienceNetwork ? "1" : "0"));

			PrivateDependencyModuleNames.Add("Launch");
			AdditionalPropertiesForReceipt.Add("IOSPlugin", Path.Combine(PluginPath, "FacebookGoodies_IOS_UPL.xml"));
		}
	}
}
