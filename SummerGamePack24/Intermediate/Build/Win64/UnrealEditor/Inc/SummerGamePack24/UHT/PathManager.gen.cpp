// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/PathManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_APathManager();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_APathManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class APathManager
void APathManager::StaticRegisterNativesAPathManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APathManager);
UClass* Z_Construct_UClass_APathManager_NoRegister()
{
	return APathManager::StaticClass();
}
struct Z_Construct_UClass_APathManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PathManager.h" },
		{ "ModuleRelativePath", "Public/PathManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathMesh_MetaData[] = {
		{ "Category", "Paths" },
		{ "ModuleRelativePath", "Public/PathManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathManager_Statics::NewProp_PathMesh = { "PathMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathManager, PathMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathMesh_MetaData), NewProp_PathMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathManager_Statics::NewProp_PathMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APathManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APathManager_Statics::ClassParams = {
	&APathManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APathManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APathManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APathManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APathManager()
{
	if (!Z_Registration_Info_UClass_APathManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APathManager.OuterSingleton, Z_Construct_UClass_APathManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APathManager.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<APathManager>()
{
	return APathManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APathManager);
APathManager::~APathManager() {}
// End Class APathManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PathManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APathManager, APathManager::StaticClass, TEXT("APathManager"), &Z_Registration_Info_UClass_APathManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APathManager), 745036070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PathManager_h_3437396357(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PathManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PathManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
