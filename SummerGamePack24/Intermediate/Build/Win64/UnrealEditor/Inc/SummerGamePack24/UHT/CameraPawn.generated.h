// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUMMERGAMEPACK24_CameraPawn_generated_h
#error "CameraPawn.generated.h already included, missing '#pragma once' in CameraPawn.h"
#endif
#define SUMMERGAMEPACK24_CameraPawn_generated_h

#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execGetDistanceFlown); \
	DECLARE_FUNCTION(execGetLaunchArrowRotation); \
	DECLARE_FUNCTION(execGetSuccessfulPunches); \
	DECLARE_FUNCTION(execGetConfirmedAccuracy); \
	DECLARE_FUNCTION(execGetCurrentAccuracy); \
	DECLARE_FUNCTION(execGetConfirmedCharge); \
	DECLARE_FUNCTION(execGetMaxCharge); \
	DECLARE_FUNCTION(execGetCharge);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraPawn(); \
	friend struct Z_Construct_UClass_ACameraPawn_Statics; \
public: \
	DECLARE_CLASS(ACameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SummerGamePack24"), NO_API) \
	DECLARE_SERIALIZER(ACameraPawn)


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACameraPawn(ACameraPawn&&); \
	ACameraPawn(const ACameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraPawn) \
	NO_API virtual ~ACameraPawn();


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_10_PROLOG
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_INCLASS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAMEPACK24_API UClass* StaticClass<class ACameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
