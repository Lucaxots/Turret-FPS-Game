// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef FPSPROJECT_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define FPSPROJECT_HealthComponent_generated_h

#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_8_DELEGATE \
FPSPROJECT_API void FOnHealthExhausted_DelegateWrapper(const FMulticastScriptDelegate& OnHealthExhausted, FHitResult Hit);


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSproject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&); \
	UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_10_PROLOG
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
