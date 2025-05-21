// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Turret.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSPROJECT_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define FPSPROJECT_Turret_generated_h

#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnCheckEndOverlap); \
	DECLARE_FUNCTION(execOnCheckBeginOverlap); \
	DECLARE_FUNCTION(execDestroyTurret);


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_CALLBACK_WRAPPERS
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSproject"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATurret(ATurret&&); \
	ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret) \
	NO_API virtual ~ATurret();


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_7_PROLOG
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_CALLBACK_WRAPPERS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
