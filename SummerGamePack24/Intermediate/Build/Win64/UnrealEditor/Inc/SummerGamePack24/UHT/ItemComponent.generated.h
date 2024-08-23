// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASafetyCharacter;
#ifdef SUMMERGAMEPACK24_ItemComponent_generated_h
#error "ItemComponent.generated.h already included, missing '#pragma once' in ItemComponent.h"
#endif
#define SUMMERGAMEPACK24_ItemComponent_generated_h

#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleDestruction); \
	DECLARE_FUNCTION(execAttachItem);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemComponent(); \
	friend struct Z_Construct_UClass_UItemComponent_Statics; \
public: \
	DECLARE_CLASS(UItemComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SummerGamePack24"), NO_API) \
	DECLARE_SERIALIZER(UItemComponent)


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemComponent(UItemComponent&&); \
	UItemComponent(const UItemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemComponent) \
	NO_API virtual ~UItemComponent();


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_13_PROLOG
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAMEPACK24_API UClass* StaticClass<class UItemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
