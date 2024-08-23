// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/InteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_UInteractableComponent();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_UInteractableComponent_NoRegister();
SUMMERGAMEPACK24_API UFunction* Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Delegate FOnInteract
struct Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SummerGamePack24, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract)
{
	OnInteract.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnInteract

// Begin Class UInteractableComponent
void UInteractableComponent::StaticRegisterNativesUInteractableComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableComponent);
UClass* Z_Construct_UClass_UInteractableComponent_NoRegister()
{
	return UInteractableComponent::StaticClass();
}
struct Z_Construct_UClass_UInteractableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "InteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
#endif
		{ "ModuleRelativePath", "InteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableComponent, OnInteract), Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteract_MetaData), NewProp_OnInteract_MetaData) }; // 1329926328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableComponent_Statics::ClassParams = {
	&UInteractableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractableComponent()
{
	if (!Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton, Z_Construct_UClass_UInteractableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<UInteractableComponent>()
{
	return UInteractableComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableComponent);
UInteractableComponent::~UInteractableComponent() {}
// End Class UInteractableComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_InteractableComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableComponent, UInteractableComponent::StaticClass, TEXT("UInteractableComponent"), &Z_Registration_Info_UClass_UInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableComponent), 3395306205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_InteractableComponent_h_3795815630(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_InteractableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_InteractableComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
