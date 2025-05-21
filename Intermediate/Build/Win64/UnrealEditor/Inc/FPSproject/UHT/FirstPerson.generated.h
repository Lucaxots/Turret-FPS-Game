// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPerson.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef FPSPROJECT_FirstPerson_generated_h
#error "FirstPerson.generated.h already included, missing '#pragma once' in FirstPerson.h"
#endif
#define FPSPROJECT_FirstPerson_generated_h

#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTraceLineFromCamera);


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPerson(); \
	friend struct Z_Construct_UClass_AFirstPerson_Statics; \
public: \
	DECLARE_CLASS(AFirstPerson, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSproject"), NO_API) \
	DECLARE_SERIALIZER(AFirstPerson)


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPerson(AFirstPerson&&); \
	AFirstPerson(const AFirstPerson&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPerson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPerson); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPerson) \
	NO_API virtual ~AFirstPerson();


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_9_PROLOG
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFirstPerson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_FirstPerson_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
