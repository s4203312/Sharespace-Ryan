// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEM2_Def_generated_h
#error "Def.generated.h already included, missing '#pragma once' in Def.h"
#endif
#define SEM2_Def_generated_h

#define SEM2_Source_SEM2_Def_h_12_SPARSE_DATA
#define SEM2_Source_SEM2_Def_h_12_RPC_WRAPPERS
#define SEM2_Source_SEM2_Def_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SEM2_Source_SEM2_Def_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADef(); \
	friend struct Z_Construct_UClass_ADef_Statics; \
public: \
	DECLARE_CLASS(ADef, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(ADef)


#define SEM2_Source_SEM2_Def_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADef(); \
	friend struct Z_Construct_UClass_ADef_Statics; \
public: \
	DECLARE_CLASS(ADef, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(ADef)


#define SEM2_Source_SEM2_Def_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADef(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADef) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADef); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADef); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADef(ADef&&); \
	NO_API ADef(const ADef&); \
public:


#define SEM2_Source_SEM2_Def_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADef(ADef&&); \
	NO_API ADef(const ADef&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADef); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADef); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADef)


#define SEM2_Source_SEM2_Def_h_12_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_Def_h_9_PROLOG
#define SEM2_Source_SEM2_Def_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Def_h_12_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Def_h_12_SPARSE_DATA \
	SEM2_Source_SEM2_Def_h_12_RPC_WRAPPERS \
	SEM2_Source_SEM2_Def_h_12_INCLASS \
	SEM2_Source_SEM2_Def_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_Def_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Def_h_12_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Def_h_12_SPARSE_DATA \
	SEM2_Source_SEM2_Def_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Def_h_12_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Def_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class ADef>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_Def_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
