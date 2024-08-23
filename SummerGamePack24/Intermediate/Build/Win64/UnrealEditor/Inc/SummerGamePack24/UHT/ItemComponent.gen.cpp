// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/ItemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ASafetyCharacter_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_UItemComponent();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_UItemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class UItemComponent Function AttachItem
struct Z_Construct_UFunction_UItemComponent_AttachItem_Statics
{
	struct ItemComponent_eventAttachItem_Parms
	{
		ASafetyCharacter* TargetCharacter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attaches the actor to a FirstPersonCharacter */" },
#endif
		{ "ModuleRelativePath", "ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches the actor to a FirstPersonCharacter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemComponent_AttachItem_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemComponent_eventAttachItem_Parms, TargetCharacter), Z_Construct_UClass_ASafetyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemComponent_AttachItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemComponent_eventAttachItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemComponent_AttachItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemComponent_eventAttachItem_Parms), &Z_Construct_UFunction_UItemComponent_AttachItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemComponent_AttachItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemComponent_AttachItem_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemComponent_AttachItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemComponent_AttachItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemComponent_AttachItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemComponent, nullptr, "AttachItem", nullptr, nullptr, Z_Construct_UFunction_UItemComponent_AttachItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemComponent_AttachItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemComponent_AttachItem_Statics::ItemComponent_eventAttachItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemComponent_AttachItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemComponent_AttachItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemComponent_AttachItem_Statics::ItemComponent_eventAttachItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemComponent_AttachItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemComponent_AttachItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemComponent::execAttachItem)
{
	P_GET_OBJECT(ASafetyCharacter,Z_Param_TargetCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AttachItem(Z_Param_TargetCharacter);
	P_NATIVE_END;
}
// End Class UItemComponent Function AttachItem

// Begin Class UItemComponent Function HandleDestruction
struct Z_Construct_UFunction_UItemComponent_HandleDestruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Destroys the item.  */" },
#endif
		{ "ModuleRelativePath", "ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemComponent_HandleDestruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemComponent, nullptr, "HandleDestruction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemComponent_HandleDestruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemComponent_HandleDestruction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemComponent_HandleDestruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemComponent_HandleDestruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemComponent::execHandleDestruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDestruction();
	P_NATIVE_END;
}
// End Class UItemComponent Function HandleDestruction

// Begin Class UItemComponent
void UItemComponent::StaticRegisterNativesUItemComponent()
{
	UClass* Class = UItemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachItem", &UItemComponent::execAttachItem },
		{ "HandleDestruction", &UItemComponent::execHandleDestruction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemComponent);
UClass* Z_Construct_UClass_UItemComponent_NoRegister()
{
	return UItemComponent::StaticClass();
}
struct Z_Construct_UClass_UItemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "ItemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaturationPickupVector_MetaData[] = {
		{ "Category", "Happiness" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaturationPutdownVector_MetaData[] = {
		{ "Category", "Happiness" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContrastPickupVector_MetaData[] = {
		{ "Category", "Happiness" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContrastPutdownVector_MetaData[] = {
		{ "Category", "Happiness" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetOnPickup_MetaData[] = {
		{ "Category", "Happiness" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetOnPutdown_MetaData[] = {
		{ "Category", "Happiness" },
		{ "ModuleRelativePath", "ItemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaturationPickupVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaturationPutdownVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContrastPickupVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContrastPutdownVector;
	static void NewProp_ResetOnPickup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetOnPickup;
	static void NewProp_ResetOnPutdown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetOnPutdown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemComponent_AttachItem, "AttachItem" }, // 2576835619
		{ &Z_Construct_UFunction_UItemComponent_HandleDestruction, "HandleDestruction" }, // 3001879833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_SaturationPickupVector = { "SaturationPickupVector", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemComponent, SaturationPickupVector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaturationPickupVector_MetaData), NewProp_SaturationPickupVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_SaturationPutdownVector = { "SaturationPutdownVector", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemComponent, SaturationPutdownVector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaturationPutdownVector_MetaData), NewProp_SaturationPutdownVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_ContrastPickupVector = { "ContrastPickupVector", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemComponent, ContrastPickupVector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContrastPickupVector_MetaData), NewProp_ContrastPickupVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_ContrastPutdownVector = { "ContrastPutdownVector", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemComponent, ContrastPutdownVector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContrastPutdownVector_MetaData), NewProp_ContrastPutdownVector_MetaData) };
void Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPickup_SetBit(void* Obj)
{
	((UItemComponent*)Obj)->ResetOnPickup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPickup = { "ResetOnPickup", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemComponent), &Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPickup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetOnPickup_MetaData), NewProp_ResetOnPickup_MetaData) };
void Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPutdown_SetBit(void* Obj)
{
	((UItemComponent*)Obj)->ResetOnPutdown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPutdown = { "ResetOnPutdown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemComponent), &Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPutdown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetOnPutdown_MetaData), NewProp_ResetOnPutdown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_SaturationPickupVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_SaturationPutdownVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_ContrastPickupVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_ContrastPutdownVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemComponent_Statics::NewProp_ResetOnPutdown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemComponent_Statics::ClassParams = {
	&UItemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemComponent()
{
	if (!Z_Registration_Info_UClass_UItemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemComponent.OuterSingleton, Z_Construct_UClass_UItemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemComponent.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<UItemComponent>()
{
	return UItemComponent::StaticClass();
}
UItemComponent::UItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemComponent);
UItemComponent::~UItemComponent() {}
// End Class UItemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemComponent, UItemComponent::StaticClass, TEXT("UItemComponent"), &Z_Registration_Info_UClass_UItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemComponent), 727995366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_1276106545(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_ItemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
