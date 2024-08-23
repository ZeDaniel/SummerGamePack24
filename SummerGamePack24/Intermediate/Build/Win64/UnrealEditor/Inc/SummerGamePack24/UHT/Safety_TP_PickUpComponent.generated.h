// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Safety_TP_PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASafetyCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUMMERGAMEPACK24_Safety_TP_PickUpComponent_generated_h
#error "Safety_TP_PickUpComponent.generated.h already included, missing '#pragma once' in Safety_TP_PickUpComponent.h"
#endif
#define SUMMERGAMEPACK24_Safety_TP_PickUpComponent_generated_h

#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_12_DELEGATE \
SUMMERGAMEPACK24_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ASafetyCharacter* PickUpCharacter);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_13_DELEGATE \
SUMMERGAMEPACK24_API void FOnPutDown_DelegateWrapper(const FMulticastScriptDelegate& OnPutDown, ASafetyCharacter* PickUpCharacter);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSafety_TP_PickUpComponent(); \
	friend struct Z_Construct_UClass_USafety_TP_PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(USafety_TP_PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SummerGamePack24"), NO_API) \
	DECLARE_SERIALIZER(USafety_TP_PickUpComponent)


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USafety_TP_PickUpComponent(USafety_TP_PickUpComponent&&); \
	USafety_TP_PickUpComponent(const USafety_TP_PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USafety_TP_PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafety_TP_PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USafety_TP_PickUpComponent) \
	NO_API virtual ~USafety_TP_PickUpComponent();


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_15_PROLOG
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAMEPACK24_API UClass* StaticClass<class USafety_TP_PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Safety_TP_PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
