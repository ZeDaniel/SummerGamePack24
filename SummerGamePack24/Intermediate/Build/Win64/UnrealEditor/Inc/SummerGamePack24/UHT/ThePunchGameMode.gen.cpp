// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/ThePunchGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThePunchGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_APunchSpawner_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AScalableSprite_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AThePunchGameMode();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AThePunchGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class AThePunchGameMode Function GetCurrentGame
struct Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics
{
	struct ThePunchGameMode_eventGetCurrentGame_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePunchGameMode_eventGetCurrentGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "GetCurrentGame", nullptr, nullptr, Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::ThePunchGameMode_eventGetCurrentGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::ThePunchGameMode_eventGetCurrentGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThePunchGameMode::execGetCurrentGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentGame();
	P_NATIVE_END;
}
// End Class AThePunchGameMode Function GetCurrentGame

// Begin Class AThePunchGameMode Function GetGameTimerLength
struct Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics
{
	struct ThePunchGameMode_eventGetGameTimerLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePunchGameMode_eventGetGameTimerLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "GetGameTimerLength", nullptr, nullptr, Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::ThePunchGameMode_eventGetGameTimerLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::ThePunchGameMode_eventGetGameTimerLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThePunchGameMode::execGetGameTimerLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameTimerLength();
	P_NATIVE_END;
}
// End Class AThePunchGameMode Function GetGameTimerLength

// Begin Class AThePunchGameMode Function GetGameTransitionTimerLength
struct Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics
{
	struct ThePunchGameMode_eventGetGameTransitionTimerLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePunchGameMode_eventGetGameTransitionTimerLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "GetGameTransitionTimerLength", nullptr, nullptr, Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::ThePunchGameMode_eventGetGameTransitionTimerLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::ThePunchGameMode_eventGetGameTransitionTimerLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThePunchGameMode::execGetGameTransitionTimerLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameTransitionTimerLength();
	P_NATIVE_END;
}
// End Class AThePunchGameMode Function GetGameTransitionTimerLength

// Begin Class AThePunchGameMode Function GetStartTransitionTimerLength
struct Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics
{
	struct ThePunchGameMode_eventGetStartTransitionTimerLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePunchGameMode_eventGetStartTransitionTimerLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "GetStartTransitionTimerLength", nullptr, nullptr, Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::ThePunchGameMode_eventGetStartTransitionTimerLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::ThePunchGameMode_eventGetStartTransitionTimerLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThePunchGameMode::execGetStartTransitionTimerLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStartTransitionTimerLength();
	P_NATIVE_END;
}
// End Class AThePunchGameMode Function GetStartTransitionTimerLength

// Begin Class AThePunchGameMode Function RestartGame
static FName NAME_AThePunchGameMode_RestartGame = FName(TEXT("RestartGame"));
void AThePunchGameMode::RestartGame()
{
	ProcessEvent(FindFunctionChecked(NAME_AThePunchGameMode_RestartGame),NULL);
}
struct Z_Construct_UFunction_AThePunchGameMode_RestartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "RestartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_RestartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_RestartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AThePunchGameMode_RestartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_RestartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AThePunchGameMode Function RestartGame

// Begin Class AThePunchGameMode Function RunMicroGameUI
static FName NAME_AThePunchGameMode_RunMicroGameUI = FName(TEXT("RunMicroGameUI"));
void AThePunchGameMode::RunMicroGameUI()
{
	ProcessEvent(FindFunctionChecked(NAME_AThePunchGameMode_RunMicroGameUI),NULL);
}
struct Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "RunMicroGameUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AThePunchGameMode Function RunMicroGameUI

// Begin Class AThePunchGameMode Function RunStartTransitionPhaseUI
static FName NAME_AThePunchGameMode_RunStartTransitionPhaseUI = FName(TEXT("RunStartTransitionPhaseUI"));
void AThePunchGameMode::RunStartTransitionPhaseUI()
{
	ProcessEvent(FindFunctionChecked(NAME_AThePunchGameMode_RunStartTransitionPhaseUI),NULL);
}
struct Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "RunStartTransitionPhaseUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AThePunchGameMode Function RunStartTransitionPhaseUI

// Begin Class AThePunchGameMode Function RunTransitionPhaseUI
static FName NAME_AThePunchGameMode_RunTransitionPhaseUI = FName(TEXT("RunTransitionPhaseUI"));
void AThePunchGameMode::RunTransitionPhaseUI()
{
	ProcessEvent(FindFunctionChecked(NAME_AThePunchGameMode_RunTransitionPhaseUI),NULL);
}
struct Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePunchGameMode, nullptr, "RunTransitionPhaseUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AThePunchGameMode Function RunTransitionPhaseUI

// Begin Class AThePunchGameMode
void AThePunchGameMode::StaticRegisterNativesAThePunchGameMode()
{
	UClass* Class = AThePunchGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentGame", &AThePunchGameMode::execGetCurrentGame },
		{ "GetGameTimerLength", &AThePunchGameMode::execGetGameTimerLength },
		{ "GetGameTransitionTimerLength", &AThePunchGameMode::execGetGameTransitionTimerLength },
		{ "GetStartTransitionTimerLength", &AThePunchGameMode::execGetStartTransitionTimerLength },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThePunchGameMode);
UClass* Z_Construct_UClass_AThePunchGameMode_NoRegister()
{
	return AThePunchGameMode::StaticClass();
}
struct Z_Construct_UClass_AThePunchGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThePunchGameMode.h" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTimerLength_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTransitionTimerLength_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTransitionTimerLength_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Game2CameraDistance_MetaData[] = {
		{ "Category", "Game 2 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Game3CameraDistance_MetaData[] = {
		{ "Category", "Game 3 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PunchSpawnerClass_MetaData[] = {
		{ "Category", "Game 3 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSpriteClass_MetaData[] = {
		{ "Category", "Game 4 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Game4CameraDistance_MetaData[] = {
		{ "Category", "Game 4 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowXOffset_MetaData[] = {
		{ "Category", "Game 4 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowZOffset_MetaData[] = {
		{ "Category", "Game 4 Settings" },
		{ "ModuleRelativePath", "Public/ThePunchGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameTimerLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTransitionTimerLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameTransitionTimerLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Game2CameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Game3CameraDistance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PunchSpawnerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ArrowSpriteClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Game4CameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowXOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThePunchGameMode_GetCurrentGame, "GetCurrentGame" }, // 3084893485
		{ &Z_Construct_UFunction_AThePunchGameMode_GetGameTimerLength, "GetGameTimerLength" }, // 3343826764
		{ &Z_Construct_UFunction_AThePunchGameMode_GetGameTransitionTimerLength, "GetGameTransitionTimerLength" }, // 3422857073
		{ &Z_Construct_UFunction_AThePunchGameMode_GetStartTransitionTimerLength, "GetStartTransitionTimerLength" }, // 4119042856
		{ &Z_Construct_UFunction_AThePunchGameMode_RestartGame, "RestartGame" }, // 1593034565
		{ &Z_Construct_UFunction_AThePunchGameMode_RunMicroGameUI, "RunMicroGameUI" }, // 772918852
		{ &Z_Construct_UFunction_AThePunchGameMode_RunStartTransitionPhaseUI, "RunStartTransitionPhaseUI" }, // 64287957
		{ &Z_Construct_UFunction_AThePunchGameMode_RunTransitionPhaseUI, "RunTransitionPhaseUI" }, // 894105222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThePunchGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_GameTimerLength = { "GameTimerLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, GameTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTimerLength_MetaData), NewProp_GameTimerLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_StartTransitionTimerLength = { "StartTransitionTimerLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, StartTransitionTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTransitionTimerLength_MetaData), NewProp_StartTransitionTimerLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_GameTransitionTimerLength = { "GameTransitionTimerLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, GameTransitionTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTransitionTimerLength_MetaData), NewProp_GameTransitionTimerLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_Game2CameraDistance = { "Game2CameraDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, Game2CameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Game2CameraDistance_MetaData), NewProp_Game2CameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_Game3CameraDistance = { "Game3CameraDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, Game3CameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Game3CameraDistance_MetaData), NewProp_Game3CameraDistance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_PunchSpawnerClass = { "PunchSpawnerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, PunchSpawnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APunchSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PunchSpawnerClass_MetaData), NewProp_PunchSpawnerClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_ArrowSpriteClass = { "ArrowSpriteClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, ArrowSpriteClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AScalableSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowSpriteClass_MetaData), NewProp_ArrowSpriteClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_Game4CameraDistance = { "Game4CameraDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, Game4CameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Game4CameraDistance_MetaData), NewProp_Game4CameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_ArrowXOffset = { "ArrowXOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, ArrowXOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowXOffset_MetaData), NewProp_ArrowXOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_ArrowZOffset = { "ArrowZOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePunchGameMode, ArrowZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowZOffset_MetaData), NewProp_ArrowZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThePunchGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_GameTimerLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_StartTransitionTimerLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_GameTransitionTimerLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_Game2CameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_Game3CameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_PunchSpawnerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_ArrowSpriteClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_Game4CameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_ArrowXOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePunchGameMode_Statics::NewProp_ArrowZOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThePunchGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThePunchGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThePunchGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThePunchGameMode_Statics::ClassParams = {
	&AThePunchGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThePunchGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThePunchGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePunchGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThePunchGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThePunchGameMode()
{
	if (!Z_Registration_Info_UClass_AThePunchGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThePunchGameMode.OuterSingleton, Z_Construct_UClass_AThePunchGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThePunchGameMode.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<AThePunchGameMode>()
{
	return AThePunchGameMode::StaticClass();
}
AThePunchGameMode::AThePunchGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThePunchGameMode);
AThePunchGameMode::~AThePunchGameMode() {}
// End Class AThePunchGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThePunchGameMode, AThePunchGameMode::StaticClass, TEXT("AThePunchGameMode"), &Z_Registration_Info_UClass_AThePunchGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThePunchGameMode), 1533201606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_2973798410(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ThePunchGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
