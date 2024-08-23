// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSummerGamePack24_init() {}
	SUMMERGAMEPACK24_API UFunction* Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature();
	SUMMERGAMEPACK24_API UFunction* Z_Construct_UDelegateFunction_SummerGamePack24_OnPickUp__DelegateSignature();
	SUMMERGAMEPACK24_API UFunction* Z_Construct_UDelegateFunction_SummerGamePack24_OnPutDown__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SummerGamePack24;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SummerGamePack24()
	{
		if (!Z_Registration_Info_UPackage__Script_SummerGamePack24.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SummerGamePack24_OnInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SummerGamePack24_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SummerGamePack24_OnPutDown__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SummerGamePack24",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8D14F887,
				0x5C93153C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SummerGamePack24.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SummerGamePack24.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SummerGamePack24(Z_Construct_UPackage__Script_SummerGamePack24, TEXT("/Script/SummerGamePack24"), Z_Registration_Info_UPackage__Script_SummerGamePack24, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8D14F887, 0x5C93153C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
