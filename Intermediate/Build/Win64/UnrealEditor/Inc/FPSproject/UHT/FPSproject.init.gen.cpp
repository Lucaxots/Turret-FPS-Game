// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSproject_init() {}
	FPSPROJECT_API UFunction* Z_Construct_UDelegateFunction_FPSproject_OnHealthExhausted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPSproject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPSproject()
	{
		if (!Z_Registration_Info_UPackage__Script_FPSproject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSproject_OnHealthExhausted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPSproject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x45DAE3F5,
				0x5161B898,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPSproject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPSproject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPSproject(Z_Construct_UPackage__Script_FPSproject, TEXT("/Script/FPSproject"), Z_Registration_Info_UPackage__Script_FPSproject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x45DAE3F5, 0x5161B898));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
