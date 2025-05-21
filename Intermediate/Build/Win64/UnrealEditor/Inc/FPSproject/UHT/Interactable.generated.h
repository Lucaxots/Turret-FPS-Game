// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSPROJECT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define FPSPROJECT_Interactable_generated_h

#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_CALLBACK_WRAPPERS
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSPROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractable(UInteractable&&); \
	UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSPROJECT_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	FPSPROJECT_API virtual ~UInteractable();


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSproject"), FPSPROJECT_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_10_PROLOG
#define FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_CALLBACK_WRAPPERS \
	FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lsied_OneDrive_Pulpit_FirstPersonTemplate_Source_FPSproject_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
