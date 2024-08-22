// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/CameraPawn.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ACameraPawn();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ACameraPawn_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AScalableSprite_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class ACameraPawn Function GetCharge
struct Z_Construct_UFunction_ACameraPawn_GetCharge_Statics
{
	struct CameraPawn_eventGetCharge_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetCharge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetCharge", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::CameraPawn_eventGetCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::CameraPawn_eventGetCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCharge();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetCharge

// Begin Class ACameraPawn Function GetConfirmedAccuracy
struct Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics
{
	struct CameraPawn_eventGetConfirmedAccuracy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetConfirmedAccuracy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetConfirmedAccuracy", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::CameraPawn_eventGetConfirmedAccuracy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::CameraPawn_eventGetConfirmedAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetConfirmedAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetConfirmedAccuracy();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetConfirmedAccuracy

// Begin Class ACameraPawn Function GetConfirmedCharge
struct Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics
{
	struct CameraPawn_eventGetConfirmedCharge_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetConfirmedCharge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetConfirmedCharge", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::CameraPawn_eventGetConfirmedCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::CameraPawn_eventGetConfirmedCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetConfirmedCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetConfirmedCharge();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetConfirmedCharge

// Begin Class ACameraPawn Function GetCurrentAccuracy
struct Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics
{
	struct CameraPawn_eventGetCurrentAccuracy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetCurrentAccuracy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetCurrentAccuracy", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::CameraPawn_eventGetCurrentAccuracy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::CameraPawn_eventGetCurrentAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetCurrentAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentAccuracy();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetCurrentAccuracy

// Begin Class ACameraPawn Function GetDistanceFlown
struct Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics
{
	struct CameraPawn_eventGetDistanceFlown_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetDistanceFlown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetDistanceFlown", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::CameraPawn_eventGetDistanceFlown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::CameraPawn_eventGetDistanceFlown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetDistanceFlown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetDistanceFlown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetDistanceFlown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceFlown();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetDistanceFlown

// Begin Class ACameraPawn Function GetLaunchArrowRotation
struct Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics
{
	struct CameraPawn_eventGetLaunchArrowRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetLaunchArrowRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetLaunchArrowRotation", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::CameraPawn_eventGetLaunchArrowRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::CameraPawn_eventGetLaunchArrowRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetLaunchArrowRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetLaunchArrowRotation();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetLaunchArrowRotation

// Begin Class ACameraPawn Function GetMaxCharge
struct Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics
{
	struct CameraPawn_eventGetMaxCharge_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetMaxCharge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetMaxCharge", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::CameraPawn_eventGetMaxCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::CameraPawn_eventGetMaxCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetMaxCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetMaxCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetMaxCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxCharge();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetMaxCharge

// Begin Class ACameraPawn Function GetSuccessfulPunches
struct Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics
{
	struct CameraPawn_eventGetSuccessfulPunches_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventGetSuccessfulPunches_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "GetSuccessfulPunches", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::CameraPawn_eventGetSuccessfulPunches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::CameraPawn_eventGetSuccessfulPunches_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execGetSuccessfulPunches)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSuccessfulPunches();
	P_NATIVE_END;
}
// End Class ACameraPawn Function GetSuccessfulPunches

// Begin Class ACameraPawn Function OnComponentHit
struct Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics
{
	struct CameraPawn_eventOnComponentHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventOnComponentHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraPawn_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraPawn, nullptr, "OnComponentHit", nullptr, nullptr, Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::CameraPawn_eventOnComponentHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::CameraPawn_eventOnComponentHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraPawn_OnComponentHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraPawn_OnComponentHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraPawn::execOnComponentHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComponentHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class ACameraPawn Function OnComponentHit

// Begin Class ACameraPawn
void ACameraPawn::StaticRegisterNativesACameraPawn()
{
	UClass* Class = ACameraPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharge", &ACameraPawn::execGetCharge },
		{ "GetConfirmedAccuracy", &ACameraPawn::execGetConfirmedAccuracy },
		{ "GetConfirmedCharge", &ACameraPawn::execGetConfirmedCharge },
		{ "GetCurrentAccuracy", &ACameraPawn::execGetCurrentAccuracy },
		{ "GetDistanceFlown", &ACameraPawn::execGetDistanceFlown },
		{ "GetLaunchArrowRotation", &ACameraPawn::execGetLaunchArrowRotation },
		{ "GetMaxCharge", &ACameraPawn::execGetMaxCharge },
		{ "GetSuccessfulPunches", &ACameraPawn::execGetSuccessfulPunches },
		{ "OnComponentHit", &ACameraPawn::execOnComponentHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraPawn);
UClass* Z_Construct_UClass_ACameraPawn_NoRegister()
{
	return ACameraPawn::StaticClass();
}
struct Z_Construct_UClass_ACameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CameraPawn.h" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownAudioComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicroStartAudioComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BagDragAudioComp_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartGameAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitGameAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostBarMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostChargeBarAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimCrosshairMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveCrosshairAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowPunchMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowPunchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchAngleMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmLaunchAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharge_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeScalar_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccuracyScore_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairMovementScalar_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairAimScalar_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTimerInterval_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTimerDelay_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccuracyScoreDivider_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchScalar_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularLaunchScalar_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindSoundStrength_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fists_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PunchSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfettiSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardCollisionSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FistOffset_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "ModuleRelativePath", "Public/CameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownAudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MicroStartAudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BagDragAudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartGameAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitGameAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostBarMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostChargeBarAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimCrosshairMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCrosshairAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowPunchMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowPunchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchAngleMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmLaunchAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccuracyScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairMovementScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairAimScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairTimerInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairTimerDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccuracyScoreDivider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularLaunchScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindSoundStrength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fists_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fists;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PunchSounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PunchSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfettiSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HardCollisionSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FistOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraPawn_GetCharge, "GetCharge" }, // 520175688
		{ &Z_Construct_UFunction_ACameraPawn_GetConfirmedAccuracy, "GetConfirmedAccuracy" }, // 1901548876
		{ &Z_Construct_UFunction_ACameraPawn_GetConfirmedCharge, "GetConfirmedCharge" }, // 3674797787
		{ &Z_Construct_UFunction_ACameraPawn_GetCurrentAccuracy, "GetCurrentAccuracy" }, // 2797067567
		{ &Z_Construct_UFunction_ACameraPawn_GetDistanceFlown, "GetDistanceFlown" }, // 216075387
		{ &Z_Construct_UFunction_ACameraPawn_GetLaunchArrowRotation, "GetLaunchArrowRotation" }, // 625758839
		{ &Z_Construct_UFunction_ACameraPawn_GetMaxCharge, "GetMaxCharge" }, // 2207087912
		{ &Z_Construct_UFunction_ACameraPawn_GetSuccessfulPunches, "GetSuccessfulPunches" }, // 1942667644
		{ &Z_Construct_UFunction_ACameraPawn_OnComponentHit, "OnComponentHit" }, // 2722292879
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpriteComp = { "SpriteComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, SpriteComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComp_MetaData), NewProp_SpriteComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComp_MetaData), NewProp_AudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CountdownAudioComp = { "CountdownAudioComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CountdownAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownAudioComp_MetaData), NewProp_CountdownAudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MicroStartAudioComp = { "MicroStartAudioComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MicroStartAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicroStartAudioComp_MetaData), NewProp_MicroStartAudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_BagDragAudioComp = { "BagDragAudioComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, BagDragAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BagDragAudioComp_MetaData), NewProp_BagDragAudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_RestartGameAction = { "RestartGameAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, RestartGameAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartGameAction_MetaData), NewProp_RestartGameAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_QuitGameAction = { "QuitGameAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, QuitGameAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitGameAction_MetaData), NewProp_QuitGameAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_BaseMappingContext = { "BaseMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, BaseMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMappingContext_MetaData), NewProp_BaseMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_BoostBarMappingContext = { "BoostBarMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, BoostBarMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostBarMappingContext_MetaData), NewProp_BoostBarMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_BoostChargeBarAction = { "BoostChargeBarAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, BoostChargeBarAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostChargeBarAction_MetaData), NewProp_BoostChargeBarAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_AimCrosshairMappingContext = { "AimCrosshairMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, AimCrosshairMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimCrosshairMappingContext_MetaData), NewProp_AimCrosshairMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MoveCrosshairAction = { "MoveCrosshairAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MoveCrosshairAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveCrosshairAction_MetaData), NewProp_MoveCrosshairAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ThrowPunchMappingContext = { "ThrowPunchMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ThrowPunchMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowPunchMappingContext_MetaData), NewProp_ThrowPunchMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ThrowPunchAction = { "ThrowPunchAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ThrowPunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowPunchAction_MetaData), NewProp_ThrowPunchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_LaunchAngleMappingContext = { "LaunchAngleMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, LaunchAngleMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchAngleMappingContext_MetaData), NewProp_LaunchAngleMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ConfirmLaunchAction = { "ConfirmLaunchAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ConfirmLaunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmLaunchAction_MetaData), NewProp_ConfirmLaunchAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MaxCharge = { "MaxCharge", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MaxCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharge_MetaData), NewProp_MaxCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ChargeScalar = { "ChargeScalar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ChargeScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeScalar_MetaData), NewProp_ChargeScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MaxAccuracyScore = { "MaxAccuracyScore", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MaxAccuracyScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAccuracyScore_MetaData), NewProp_MaxAccuracyScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairMovementScalar = { "CrosshairMovementScalar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CrosshairMovementScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairMovementScalar_MetaData), NewProp_CrosshairMovementScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairAimScalar = { "CrosshairAimScalar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CrosshairAimScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairAimScalar_MetaData), NewProp_CrosshairAimScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairTimerInterval = { "CrosshairTimerInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CrosshairTimerInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairTimerInterval_MetaData), NewProp_CrosshairTimerInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairTimerDelay = { "CrosshairTimerDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CrosshairTimerDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairTimerDelay_MetaData), NewProp_CrosshairTimerDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_AccuracyScoreDivider = { "AccuracyScoreDivider", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, AccuracyScoreDivider), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccuracyScoreDivider_MetaData), NewProp_AccuracyScoreDivider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_LaunchScalar = { "LaunchScalar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, LaunchScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchScalar_MetaData), NewProp_LaunchScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_AngularLaunchScalar = { "AngularLaunchScalar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, AngularLaunchScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularLaunchScalar_MetaData), NewProp_AngularLaunchScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_WindSoundStrength = { "WindSoundStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, WindSoundStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindSoundStrength_MetaData), NewProp_WindSoundStrength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_Fists_Inner = { "Fists", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AScalableSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_Fists = { "Fists", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, Fists), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fists_MetaData), NewProp_Fists_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CountdownSound = { "CountdownSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CountdownSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownSound_MetaData), NewProp_CountdownSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairSound = { "CrosshairSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, CrosshairSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairSound_MetaData), NewProp_CrosshairSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_PunchSounds_Inner = { "PunchSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_PunchSounds = { "PunchSounds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, PunchSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PunchSounds_MetaData), NewProp_PunchSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArrowSound = { "ArrowSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ArrowSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowSound_MetaData), NewProp_ArrowSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_LaunchSound = { "LaunchSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, LaunchSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchSound_MetaData), NewProp_LaunchSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_WindSound = { "WindSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, WindSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindSound_MetaData), NewProp_WindSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ConfettiSound = { "ConfettiSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ConfettiSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfettiSound_MetaData), NewProp_ConfettiSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_HardCollisionSound = { "HardCollisionSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, HardCollisionSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardCollisionSound_MetaData), NewProp_HardCollisionSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_FistOffset = { "FistOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, FistOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FistOffset_MetaData), NewProp_FistOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpriteComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_AudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CountdownAudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MicroStartAudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_BagDragAudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_RestartGameAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_QuitGameAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_BaseMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_BoostBarMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_BoostChargeBarAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_AimCrosshairMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MoveCrosshairAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ThrowPunchMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ThrowPunchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_LaunchAngleMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ConfirmLaunchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MaxCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ChargeScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MaxAccuracyScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairMovementScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairAimScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairTimerInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairTimerDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_AccuracyScoreDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_LaunchScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_AngularLaunchScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_WindSoundStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_Fists_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_Fists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CountdownSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CrosshairSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_PunchSounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_PunchSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArrowSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_LaunchSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_WindSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ConfettiSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_HardCollisionSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_FistOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraPawn_Statics::ClassParams = {
	&ACameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraPawn()
{
	if (!Z_Registration_Info_UClass_ACameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraPawn.OuterSingleton, Z_Construct_UClass_ACameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraPawn.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<ACameraPawn>()
{
	return ACameraPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraPawn);
ACameraPawn::~ACameraPawn() {}
// End Class ACameraPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraPawn, ACameraPawn::StaticClass, TEXT("ACameraPawn"), &Z_Registration_Info_UClass_ACameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraPawn), 2472975483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_2955326969(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_CameraPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
