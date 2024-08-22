// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/PunchSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunchSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_APunchSpawner();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_APunchSpawner_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AScalableSprite_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class APunchSpawner
void APunchSpawner::StaticRegisterNativesAPunchSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APunchSpawner);
UClass* Z_Construct_UClass_APunchSpawner_NoRegister()
{
	return APunchSpawner::StaticClass();
}
struct Z_Construct_UClass_APunchSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PunchSpawner.h" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerLifetime_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLife_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YSpawn_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinXSpawn_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxXSpawn_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZSpawn_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZSpawn_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSpriteClass_MetaData[] = {
		{ "Category", "PunchSpawner" },
		{ "ModuleRelativePath", "Public/PunchSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnerLifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnLife;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinXSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxXSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnSpriteClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APunchSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnerLifetime = { "SpawnerLifetime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, SpawnerLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnerLifetime_MetaData), NewProp_SpawnerLifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnLife = { "SpawnLife", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, SpawnLife), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLife_MetaData), NewProp_SpawnLife_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_YSpawn = { "YSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, YSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YSpawn_MetaData), NewProp_YSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_MinXSpawn = { "MinXSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, MinXSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinXSpawn_MetaData), NewProp_MinXSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_MaxXSpawn = { "MaxXSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, MaxXSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxXSpawn_MetaData), NewProp_MaxXSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_MinZSpawn = { "MinZSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, MinZSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZSpawn_MetaData), NewProp_MinZSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_MaxZSpawn = { "MaxZSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, MaxZSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZSpawn_MetaData), NewProp_MaxZSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnSpriteClass = { "SpawnSpriteClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunchSpawner, SpawnSpriteClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AScalableSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSpriteClass_MetaData), NewProp_SpawnSpriteClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APunchSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnerLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_YSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_MinXSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_MaxXSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_MinZSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_MaxZSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunchSpawner_Statics::NewProp_SpawnSpriteClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunchSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APunchSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunchSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APunchSpawner_Statics::ClassParams = {
	&APunchSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APunchSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APunchSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunchSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_APunchSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APunchSpawner()
{
	if (!Z_Registration_Info_UClass_APunchSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APunchSpawner.OuterSingleton, Z_Construct_UClass_APunchSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APunchSpawner.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<APunchSpawner>()
{
	return APunchSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APunchSpawner);
APunchSpawner::~APunchSpawner() {}
// End Class APunchSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PunchSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APunchSpawner, APunchSpawner::StaticClass, TEXT("APunchSpawner"), &Z_Registration_Info_UClass_APunchSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunchSpawner), 910183045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PunchSpawner_h_1065178762(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PunchSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_PunchSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
