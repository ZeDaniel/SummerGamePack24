// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/ScalableSprite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalableSprite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AScalableSprite();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AScalableSprite_NoRegister();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class AScalableSprite
void AScalableSprite::StaticRegisterNativesAScalableSprite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScalableSprite);
UClass* Z_Construct_UClass_AScalableSprite_NoRegister()
{
	return AScalableSprite::StaticClass();
}
struct Z_Construct_UClass_AScalableSprite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ScalableSprite.h" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "ScalableSprite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the game starts or when spawned\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the game starts or when spawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComp_MetaData[] = {
		{ "Category", "ScalableSprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateMax_MetaData[] = {
		{ "Category", "Move Settings" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateMin_MetaData[] = {
		{ "Category", "Move Settings" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Move Settings" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteSpawnSound_MetaData[] = {
		{ "Category", "ScalableSprite" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteDeathSound_MetaData[] = {
		{ "Category", "ScalableSprite" },
		{ "ModuleRelativePath", "Public/ScalableSprite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteSpawnSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteDeathSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScalableSprite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_SpriteComp = { "SpriteComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, SpriteComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComp_MetaData), NewProp_SpriteComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_RotateMax = { "RotateMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, RotateMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateMax_MetaData), NewProp_RotateMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_RotateMin = { "RotateMin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, RotateMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateMin_MetaData), NewProp_RotateMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_SpriteSpawnSound = { "SpriteSpawnSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, SpriteSpawnSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteSpawnSound_MetaData), NewProp_SpriteSpawnSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScalableSprite_Statics::NewProp_SpriteDeathSound = { "SpriteDeathSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScalableSprite, SpriteDeathSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteDeathSound_MetaData), NewProp_SpriteDeathSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScalableSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_SpriteComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_RotateMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_RotateMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_SpriteSpawnSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScalableSprite_Statics::NewProp_SpriteDeathSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScalableSprite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScalableSprite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScalableSprite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScalableSprite_Statics::ClassParams = {
	&AScalableSprite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AScalableSprite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AScalableSprite_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScalableSprite_Statics::Class_MetaDataParams), Z_Construct_UClass_AScalableSprite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScalableSprite()
{
	if (!Z_Registration_Info_UClass_AScalableSprite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScalableSprite.OuterSingleton, Z_Construct_UClass_AScalableSprite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScalableSprite.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<AScalableSprite>()
{
	return AScalableSprite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScalableSprite);
AScalableSprite::~AScalableSprite() {}
// End Class AScalableSprite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ScalableSprite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScalableSprite, AScalableSprite::StaticClass, TEXT("AScalableSprite"), &Z_Registration_Info_UClass_AScalableSprite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScalableSprite), 3138222876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ScalableSprite_h_1262978306(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ScalableSprite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_ScalableSprite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
