// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grenade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSPROJECT_Grenade_generated_h
#error "Grenade.generated.h already included, missing '#pragma once' in Grenade.h"
#endif
#define FPSPROJECT_Grenade_generated_h

#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSproject"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGrenade(AGrenade&&); \
	AGrenade(const AGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenade) \
	NO_API virtual ~AGrenade();


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_8_PROLOG
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Grenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
