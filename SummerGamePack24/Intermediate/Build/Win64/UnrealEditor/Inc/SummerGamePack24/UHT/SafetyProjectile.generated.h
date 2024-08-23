// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SafetyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUMMERGAMEPACK24_SafetyProjectile_generated_h
#error "SafetyProjectile.generated.h already included, missing '#pragma once' in SafetyProjectile.h"
#endif
#define SUMMERGAMEPACK24_SafetyProjectile_generated_h

#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASafetyProjectile(); \
	friend struct Z_Construct_UClass_ASafetyProjectile_Statics; \
public: \
	DECLARE_CLASS(ASafetyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SummerGamePack24"), NO_API) \
	DECLARE_SERIALIZER(ASafetyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASafetyProjectile(ASafetyProjectile&&); \
	ASafetyProjectile(const ASafetyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASafetyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASafetyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASafetyProjectile) \
	NO_API virtual ~ASafetyProjectile();


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_12_PROLOG
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAMEPACK24_API UClass* StaticClass<class ASafetyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
