// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThePunchGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUMMERGAMEPACK24_ThePunchGameMode_generated_h
#error "ThePunchGameMode.generated.h already included, missing '#pragma once' in ThePunchGameMode.h"
#endif
#define SUMMERGAMEPACK24_ThePunchGameMode_generated_h

#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentGame); \
	DECLARE_FUNCTION(execGetGameTransitionTimerLength); \
	DECLARE_FUNCTION(execGetStartTransitionTimerLength); \
	DECLARE_FUNCTION(execGetGameTimerLength);


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_CALLBACK_WRAPPERS
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThePunchGameMode(); \
	friend struct Z_Construct_UClass_AThePunchGameMode_Statics; \
public: \
	DECLARE_CLASS(AThePunchGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SummerGamePack24"), NO_API) \
	DECLARE_SERIALIZER(AThePunchGameMode)


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThePunchGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThePunchGameMode(AThePunchGameMode&&); \
	AThePunchGameMode(const AThePunchGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThePunchGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThePunchGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThePunchGameMode) \
	NO_API virtual ~AThePunchGameMode();


#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_12_PROLOG
#define FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_CALLBACK_WRAPPERS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAMEPACK24_API UClass* StaticClass<class AThePunchGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
