// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSproject/HealthPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPSPROJECT_API UClass* Z_Construct_UClass_AHealthPack();
FPSPROJECT_API UClass* Z_Construct_UClass_AHealthPack_NoRegister();
FPSPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSproject();
// End Cross Module References

// Begin Class AHealthPack
void AHealthPack::StaticRegisterNativesAHealthPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPack);
UClass* Z_Construct_UClass_AHealthPack_NoRegister()
{
	return AHealthPack::StaticClass();
}
struct Z_Construct_UClass_AHealthPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HealthPack.h" },
		{ "ModuleRelativePath", "HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthMesh_MetaData[] = {
		{ "Category", "HealthPack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[] = {
		{ "Category", "HealthPack" },
		{ "ModuleRelativePath", "HealthPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_HealthMesh = { "HealthMesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, HealthMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthMesh_MetaData), NewProp_HealthMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPack, HealthAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAmount_MetaData), NewProp_HealthAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_HealthMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_HealthAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHealthPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHealthPack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AHealthPack, IInteractable), false },  // 202592918
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPack_Statics::ClassParams = {
	&AHealthPack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHealthPack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealthPack()
{
	if (!Z_Registration_Info_UClass_AHealthPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPack.OuterSingleton, Z_Construct_UClass_AHealthPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealthPack.OuterSingleton;
}
template<> FPSPROJECT_API UClass* StaticClass<AHealthPack>()
{
	return AHealthPack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPack);
AHealthPack::~AHealthPack() {}
// End Class AHealthPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPack, AHealthPack::StaticClass, TEXT("AHealthPack"), &Z_Registration_Info_UClass_AHealthPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPack), 2069401117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthPack_h_2464704979(TEXT("/Script/FPSproject"),
	Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
