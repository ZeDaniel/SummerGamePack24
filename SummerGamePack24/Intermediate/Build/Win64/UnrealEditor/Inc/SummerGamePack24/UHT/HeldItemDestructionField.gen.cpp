// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/HeldItemDestructionField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeldItemDestructionField() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AHeldItemDestructionField();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AHeldItemDestructionField_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AItemDestructionField();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class AHeldItemDestructionField Function IncreaseDestroyedItems
struct Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeldItemDestructionField, nullptr, "IncreaseDestroyedItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeldItemDestructionField::execIncreaseDestroyedItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseDestroyedItems();
	P_NATIVE_END;
}
// End Class AHeldItemDestructionField Function IncreaseDestroyedItems

// Begin Class AHeldItemDestructionField
void AHeldItemDestructionField::StaticRegisterNativesAHeldItemDestructionField()
{
	UClass* Class = AHeldItemDestructionField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IncreaseDestroyedItems", &AHeldItemDestructionField::execIncreaseDestroyedItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeldItemDestructionField);
UClass* Z_Construct_UClass_AHeldItemDestructionField_NoRegister()
{
	return AHeldItemDestructionField::StaticClass();
}
struct Z_Construct_UClass_AHeldItemDestructionField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HeldItemDestructionField.h" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "HeldItemDestructionField" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RejectMaterial_MetaData[] = {
		{ "Category", "HeldItemDestructionField" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptMaterial_MetaData[] = {
		{ "Category", "HeldItemDestructionField" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassThroughItemTag_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RejectionTimerLength_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceTimerLength_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "HeldItemDestructionField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RejectMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcceptMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PassThroughItemTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RejectionTimerLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceTimerLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeldItemDestructionField_IncreaseDestroyedItems, "IncreaseDestroyedItems" }, // 4032749815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeldItemDestructionField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeldItemDestructionField, DefaultMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_RejectMaterial = { "RejectMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeldItemDestructionField, RejectMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RejectMaterial_MetaData), NewProp_RejectMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_AcceptMaterial = { "AcceptMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeldItemDestructionField, AcceptMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptMaterial_MetaData), NewProp_AcceptMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_PassThroughItemTag = { "PassThroughItemTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeldItemDestructionField, PassThroughItemTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassThroughItemTag_MetaData), NewProp_PassThroughItemTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_RejectionTimerLength = { "RejectionTimerLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeldItemDestructionField, RejectionTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RejectionTimerLength_MetaData), NewProp_RejectionTimerLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_AcceptanceTimerLength = { "AcceptanceTimerLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeldItemDestructionField, AcceptanceTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceTimerLength_MetaData), NewProp_AcceptanceTimerLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeldItemDestructionField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_RejectMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_AcceptMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_PassThroughItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_RejectionTimerLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeldItemDestructionField_Statics::NewProp_AcceptanceTimerLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeldItemDestructionField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeldItemDestructionField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemDestructionField,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeldItemDestructionField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeldItemDestructionField_Statics::ClassParams = {
	&AHeldItemDestructionField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHeldItemDestructionField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeldItemDestructionField_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeldItemDestructionField_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeldItemDestructionField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeldItemDestructionField()
{
	if (!Z_Registration_Info_UClass_AHeldItemDestructionField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeldItemDestructionField.OuterSingleton, Z_Construct_UClass_AHeldItemDestructionField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeldItemDestructionField.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<AHeldItemDestructionField>()
{
	return AHeldItemDestructionField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeldItemDestructionField);
AHeldItemDestructionField::~AHeldItemDestructionField() {}
// End Class AHeldItemDestructionField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_HeldItemDestructionField_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeldItemDestructionField, AHeldItemDestructionField::StaticClass, TEXT("AHeldItemDestructionField"), &Z_Registration_Info_UClass_AHeldItemDestructionField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeldItemDestructionField), 299880248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_HeldItemDestructionField_h_878329815(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_HeldItemDestructionField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_HeldItemDestructionField_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
