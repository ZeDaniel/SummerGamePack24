// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/SafetyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafetyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ASafetyGameMode();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ASafetyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class ASafetyGameMode
void ASafetyGameMode::StaticRegisterNativesASafetyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASafetyGameMode);
UClass* Z_Construct_UClass_ASafetyGameMode_NoRegister()
{
	return ASafetyGameMode::StaticClass();
}
struct Z_Construct_UClass_ASafetyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SafetyGameMode.h" },
		{ "ModuleRelativePath", "SafetyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASafetyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASafetyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASafetyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASafetyGameMode_Statics::ClassParams = {
	&ASafetyGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASafetyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASafetyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASafetyGameMode()
{
	if (!Z_Registration_Info_UClass_ASafetyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASafetyGameMode.OuterSingleton, Z_Construct_UClass_ASafetyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASafetyGameMode.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<ASafetyGameMode>()
{
	return ASafetyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASafetyGameMode);
ASafetyGameMode::~ASafetyGameMode() {}
// End Class ASafetyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASafetyGameMode, ASafetyGameMode::StaticClass, TEXT("ASafetyGameMode"), &Z_Registration_Info_UClass_ASafetyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASafetyGameMode), 477066605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyGameMode_h_4169022259(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SafetyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
