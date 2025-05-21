// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSproject/FirstPerson.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPerson() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
FPSPROJECT_API UClass* Z_Construct_UClass_AFirstPerson();
FPSPROJECT_API UClass* Z_Construct_UClass_AFirstPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSproject();
// End Cross Module References

// Begin Class AFirstPerson Function TraceLineFromCamera
struct Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics
{
	struct FirstPerson_eventTraceLineFromCamera_Parms
	{
		USceneComponent* CameraComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPerson_eventTraceLineFromCamera_Parms, CameraComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::NewProp_CameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPerson, nullptr, "TraceLineFromCamera", nullptr, nullptr, Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::FirstPerson_eventTraceLineFromCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::FirstPerson_eventTraceLineFromCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPerson::execTraceLineFromCamera)
{
	P_GET_OBJECT(USceneComponent,Z_Param_CameraComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TraceLineFromCamera(Z_Param_CameraComponent);
	P_NATIVE_END;
}
// End Class AFirstPerson Function TraceLineFromCamera

// Begin Class AFirstPerson
void AFirstPerson::StaticRegisterNativesAFirstPerson()
{
	UClass* Class = AFirstPerson::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TraceLineFromCamera", &AFirstPerson::execTraceLineFromCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPerson);
UClass* Z_Construct_UClass_AFirstPerson_NoRegister()
{
	return AFirstPerson::StaticClass();
}
struct Z_Construct_UClass_AFirstPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPerson.h" },
		{ "ModuleRelativePath", "FirstPerson.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPerson_TraceLineFromCamera, "TraceLineFromCamera" }, // 900263846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPerson_Statics::ClassParams = {
	&AFirstPerson::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPerson()
{
	if (!Z_Registration_Info_UClass_AFirstPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPerson.OuterSingleton, Z_Construct_UClass_AFirstPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPerson.OuterSingleton;
}
template<> FPSPROJECT_API UClass* StaticClass<AFirstPerson>()
{
	return AFirstPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPerson);
AFirstPerson::~AFirstPerson() {}
// End Class AFirstPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPerson, AFirstPerson::StaticClass, TEXT("AFirstPerson"), &Z_Registration_Info_UClass_AFirstPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPerson), 567694970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_766362183(TEXT("/Script/FPSproject"),
	Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
