// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/BallemPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallemPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ABallemPlayerController();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ABallemPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class ABallemPlayerController
void ABallemPlayerController::StaticRegisterNativesABallemPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallemPlayerController);
UClass* Z_Construct_UClass_ABallemPlayerController_NoRegister()
{
	return ABallemPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABallemPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BallemPlayerController.h" },
		{ "ModuleRelativePath", "Public/BallemPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallemPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABallemPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallemPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallemPlayerController_Statics::ClassParams = {
	&ABallemPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallemPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallemPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABallemPlayerController()
{
	if (!Z_Registration_Info_UClass_ABallemPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallemPlayerController.OuterSingleton, Z_Construct_UClass_ABallemPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABallemPlayerController.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<ABallemPlayerController>()
{
	return ABallemPlayerController::StaticClass();
}
ABallemPlayerController::ABallemPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABallemPlayerController);
ABallemPlayerController::~ABallemPlayerController() {}
// End Class ABallemPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_BallemPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABallemPlayerController, ABallemPlayerController::StaticClass, TEXT("ABallemPlayerController"), &Z_Registration_Info_UClass_ABallemPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallemPlayerController), 96364241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_BallemPlayerController_h_2030761772(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_BallemPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_BallemPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
