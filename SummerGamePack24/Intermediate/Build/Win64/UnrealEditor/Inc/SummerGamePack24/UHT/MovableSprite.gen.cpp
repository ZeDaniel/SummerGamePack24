// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGamePack24/Public/MovableSprite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovableSprite() {}

// Begin Cross Module References
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AMovableSprite();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AMovableSprite_NoRegister();
SUMMERGAMEPACK24_API UClass* Z_Construct_UClass_AScalableSprite();
UPackage* Z_Construct_UPackage__Script_SummerGamePack24();
// End Cross Module References

// Begin Class AMovableSprite
void AMovableSprite::StaticRegisterNativesAMovableSprite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovableSprite);
UClass* Z_Construct_UClass_AMovableSprite_NoRegister()
{
	return AMovableSprite::StaticClass();
}
struct Z_Construct_UClass_AMovableSprite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovableSprite.h" },
		{ "ModuleRelativePath", "Public/MovableSprite.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovableSprite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMovableSprite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AScalableSprite,
	(UObject* (*)())Z_Construct_UPackage__Script_SummerGamePack24,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableSprite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovableSprite_Statics::ClassParams = {
	&AMovableSprite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableSprite_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovableSprite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovableSprite()
{
	if (!Z_Registration_Info_UClass_AMovableSprite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovableSprite.OuterSingleton, Z_Construct_UClass_AMovableSprite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovableSprite.OuterSingleton;
}
template<> SUMMERGAMEPACK24_API UClass* StaticClass<AMovableSprite>()
{
	return AMovableSprite::StaticClass();
}
AMovableSprite::AMovableSprite() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovableSprite);
AMovableSprite::~AMovableSprite() {}
// End Class AMovableSprite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_MovableSprite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovableSprite, AMovableSprite::StaticClass, TEXT("AMovableSprite"), &Z_Registration_Info_UClass_AMovableSprite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovableSprite), 2974543233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_MovableSprite_h_3657188197(TEXT("/Script/SummerGamePack24"),
	Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_MovableSprite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Dev_Unreal_Engine_5_Projects_SummerGamePack24_SummerGamePack24_Source_SummerGamePack24_Public_MovableSprite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
