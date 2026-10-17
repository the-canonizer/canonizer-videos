// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocodrome_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Locodrome;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Locodrome(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Locodrome.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Locodrome",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000040,
			0x37B1863B,
			0xF6A92BFA,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Locodrome.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Locodrome.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Locodrome(Z_Construct_UPackage__Script_Locodrome, TEXT("/Script/Locodrome"), Z_Registration_Info_UPackage__Script_Locodrome, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x37B1863B, 0xF6A92BFA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
