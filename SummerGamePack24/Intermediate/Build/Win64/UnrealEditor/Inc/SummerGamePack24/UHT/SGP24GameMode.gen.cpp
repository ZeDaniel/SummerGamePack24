// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/SGP24GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGP24GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ASGP24GameMode();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_ASGP24GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class ASGP24GameMode
void ASGP24GameMode::StaticRegisterNativesASGP24GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASGP24GameMode);
UClass* Z_Construct_UClass_ASGP24GameMode_NoRegister()
{
	return ASGP24GameMode::StaticClass();
}
struct Z_Construct_UClass_ASGP24GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SGP24GameMode.h" },
		{ "ModuleRelativePath", "SGP24GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGP24GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASGP24GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGP24GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGP24GameMode_Statics::ClassParams = {
	&ASGP24GameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGP24GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGP24GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGP24GameMode()
{
	if (!Z_Registration_Info_UClass_ASGP24GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGP24GameMode.OuterSingleton, Z_Construct_UClass_ASGP24GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGP24GameMode.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<ASGP24GameMode>()
{
	return ASGP24GameMode::StaticClass();
}
ASGP24GameMode::ASGP24GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGP24GameMode);
ASGP24GameMode::~ASGP24GameMode() {}
// End Class ASGP24GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SGP24GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGP24GameMode, ASGP24GameMode::StaticClass, TEXT("ASGP24GameMode"), &Z_Registration_Info_UClass_ASGP24GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGP24GameMode), 3022968929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SGP24GameMode_h_1123638814(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SGP24GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_SGP24GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
