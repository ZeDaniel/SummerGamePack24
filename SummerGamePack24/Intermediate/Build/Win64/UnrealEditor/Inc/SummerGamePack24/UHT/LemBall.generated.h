// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LemBall.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUMMERGAMEPACK24_LemBall_generated_h
#error "LemBall.generated.h already included, missing '#pragma once' in LemBall.h"
#endif
#define SUMMERGAMEPACK24_LemBall_generated_h

#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentHit);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALemBall(); \
	friend struct Z_Construct_UClass_ALemBall_Statics; \
public: \
	DECLARE_CLASS(ALemBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SummerGamePack24"), NO_API) \
	DECLARE_SERIALIZER(ALemBall)


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALemBall(ALemBall&&); \
	ALemBall(const ALemBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALemBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALemBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALemBall) \
	NO_API virtual ~ALemBall();


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_9_PROLOG
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_INCLASS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAMEPACK24_API UClass* StaticClass<class ALemBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_LemBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
