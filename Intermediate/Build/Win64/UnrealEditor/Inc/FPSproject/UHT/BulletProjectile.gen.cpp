// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSproject/BulletProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FPSPROJECT_API UClass* Z_Construct_UClass_ABulletProjectile();
FPSPROJECT_API UClass* Z_Construct_UClass_ABulletProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSproject();
// End Cross Module References

// Begin Class ABulletProjectile
void ABulletProjectile::StaticRegisterNativesABulletProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABulletProjectile);
UClass* Z_Construct_UClass_ABulletProjectile_NoRegister()
{
	return ABulletProjectile::StaticClass();
}
struct Z_Construct_UClass_ABulletProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BulletProjectile.h" },
		{ "ModuleRelativePath", "BulletProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABulletProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletProjectile_Statics::ClassParams = {
	&ABulletProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ABulletProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABulletProjectile()
{
	if (!Z_Registration_Info_UClass_ABulletProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletProjectile.OuterSingleton, Z_Construct_UClass_ABulletProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABulletProjectile.OuterSingleton;
}
template<> FPSPROJECT_API UClass* StaticClass<ABulletProjectile>()
{
	return ABulletProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletProjectile);
ABulletProjectile::~ABulletProjectile() {}
// End Class ABulletProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_BulletProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABulletProjectile, ABulletProjectile::StaticClass, TEXT("ABulletProjectile"), &Z_Registration_Info_UClass_ABulletProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletProjectile), 1222014538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_BulletProjectile_h_2790913028(TEXT("/Script/FPSproject"),
	Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_BulletProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_BulletProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
