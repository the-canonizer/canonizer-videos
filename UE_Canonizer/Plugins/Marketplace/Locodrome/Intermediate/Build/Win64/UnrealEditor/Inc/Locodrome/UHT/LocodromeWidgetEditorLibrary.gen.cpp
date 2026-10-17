// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocodromeWidgetEditorLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLocodromeWidgetEditorLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidget(ETypeConstructPhase);
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Locodrome(ETypeConstructPhase);
LOCODROME_API UClass* Z_Construct_UClass_ULocodromeWidgetEditorLibrary(ETypeConstructPhase);
LOCODROME_API UClass* Z_Construct_UClass_ULocodromeWidgetEditorLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ULocodromeWidgetEditorLibrary Function DuplicateSelectedDesignerWidgets **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_DuplicateSelectedDesignerWidgets_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventDuplicateSelectedDesignerWidgets_Parms
	{
		TArray<UWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function DuplicateSelectedDesignerWidgets constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DuplicateSelectedDesignerWidgets constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DuplicateSelectedDesignerWidgets Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventDuplicateSelectedDesignerWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DuplicateSelectedDesignerWidgets Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "DuplicateSelectedDesignerWidgets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventDuplicateSelectedDesignerWidgets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventDuplicateSelectedDesignerWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_DuplicateSelectedDesignerWidgets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execDuplicateSelectedDesignerWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UWidget*>*)Z_Param__Result=ULocodromeWidgetEditorLibrary::DuplicateSelectedDesignerWidgets();
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function DuplicateSelectedDesignerWidgets ****

// ********** Begin Class ULocodromeWidgetEditorLibrary Function DuplicateSourceWidgetHierarchy ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_DuplicateSourceWidgetHierarchy_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventDuplicateSourceWidgetHierarchy_Parms
	{
		UWidgetBlueprint* WidgetBlueprint;
		UWidget* SourceWidget;
		TArray<UWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function DuplicateSourceWidgetHierarchy constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DuplicateSourceWidgetHierarchy constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DuplicateSourceWidgetHierarchy Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventDuplicateSourceWidgetHierarchy_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceWidget = { "SourceWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventDuplicateSourceWidgetHierarchy_Parms, SourceWidget), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceWidget_MetaData), NewProp_SourceWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventDuplicateSourceWidgetHierarchy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DuplicateSourceWidgetHierarchy Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "DuplicateSourceWidgetHierarchy", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventDuplicateSourceWidgetHierarchy_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventDuplicateSourceWidgetHierarchy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_DuplicateSourceWidgetHierarchy(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execDuplicateSourceWidgetHierarchy)
{
	P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
	P_GET_OBJECT(UWidget,Z_Param_SourceWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UWidget*>*)Z_Param__Result=ULocodromeWidgetEditorLibrary::DuplicateSourceWidgetHierarchy(Z_Param_WidgetBlueprint,Z_Param_SourceWidget);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function DuplicateSourceWidgetHierarchy ******

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetActiveWidgetBlueprint **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetActiveWidgetBlueprint_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetActiveWidgetBlueprint_Parms
	{
		UWidgetBlueprint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveWidgetBlueprint constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveWidgetBlueprint constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveWidgetBlueprint Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetActiveWidgetBlueprint_Parms, ReturnValue), Z_Construct_UClass_UWidgetBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveWidgetBlueprint Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetActiveWidgetBlueprint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetActiveWidgetBlueprint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetActiveWidgetBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetActiveWidgetBlueprint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetActiveWidgetBlueprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetBlueprint**)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetActiveWidgetBlueprint();
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetActiveWidgetBlueprint ************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetAllSourceWidgets ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetAllSourceWidgets_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetAllSourceWidgets_Parms
	{
		UWidgetBlueprint* WidgetBlueprint;
		TArray<UWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "Comment", "// ============================================================\n// WIDGET TREE\n// ============================================================\n" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
		{ "ToolTip", "WIDGET TREE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllSourceWidgets constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllSourceWidgets constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllSourceWidgets Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetAllSourceWidgets_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetAllSourceWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllSourceWidgets Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetAllSourceWidgets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetAllSourceWidgets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetAllSourceWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetAllSourceWidgets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetAllSourceWidgets)
{
	P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UWidget*>*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetAllSourceWidgets(Z_Param_WidgetBlueprint);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetAllSourceWidgets *****************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetSelectedDesignerWidgets ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetSelectedDesignerWidgets_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetSelectedDesignerWidgets_Parms
	{
		TArray<UWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSelectedDesignerWidgets constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSelectedDesignerWidgets constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSelectedDesignerWidgets Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetSelectedDesignerWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSelectedDesignerWidgets Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetSelectedDesignerWidgets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetSelectedDesignerWidgets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetSelectedDesignerWidgets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetSelectedDesignerWidgets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetSelectedDesignerWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UWidget*>*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetSelectedDesignerWidgets();
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetSelectedDesignerWidgets **********

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetSourceWidgetDisplayLabel *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetSourceWidgetDisplayLabel_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetSourceWidgetDisplayLabel_Parms
	{
		UWidget* Widget;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSourceWidgetDisplayLabel constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSourceWidgetDisplayLabel constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSourceWidgetDisplayLabel Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetSourceWidgetDisplayLabel_Parms, Widget), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetSourceWidgetDisplayLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSourceWidgetDisplayLabel Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetSourceWidgetDisplayLabel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetSourceWidgetDisplayLabel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetSourceWidgetDisplayLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetSourceWidgetDisplayLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetSourceWidgetDisplayLabel)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetSourceWidgetDisplayLabel(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetSourceWidgetDisplayLabel *********

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetWidgetBytePropertyDebugInfo ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetBytePropertyDebugInfo_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetWidgetBytePropertyDebugInfo_Parms
	{
		UObject* Object;
		FString PropertyName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Debug" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetBytePropertyDebugInfo constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetBytePropertyDebugInfo constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetBytePropertyDebugInfo Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetBytePropertyDebugInfo_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetBytePropertyDebugInfo_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetBytePropertyDebugInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidgetBytePropertyDebugInfo Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetWidgetBytePropertyDebugInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetBytePropertyDebugInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetBytePropertyDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetBytePropertyDebugInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetWidgetBytePropertyDebugInfo)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetWidgetBytePropertyDebugInfo(Z_Param_Object,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetWidgetBytePropertyDebugInfo ******

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetWidgetNameArrayProperty ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetNameArrayProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		TArray<FName> Values;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Properties" },
		{ "Comment", "// --------------------------------------------------------\n// Generic reflected TArray<FName> property access\n// --------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
		{ "ToolTip", "Generic reflected TArray<FName> property access" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetNameArrayProperty constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetNameArrayProperty constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetNameArrayProperty Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidgetNameArrayProperty Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetWidgetNameArrayProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetNameArrayProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetNameArrayProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetWidgetNameArrayProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetWidgetNameArrayProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Values);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetWidgetNameArrayProperty **********

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetWidgetNameProperty *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetNameProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		FName Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Properties" },
		{ "Comment", "// --------------------------------------------------------\n// Generic reflected FName property access\n// --------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
		{ "ToolTip", "Generic reflected FName property access" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetNameProperty constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetNameProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetNameProperty Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidgetNameProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetWidgetNameProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetNameProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetNameProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetWidgetNameProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetWidgetNameProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetWidgetNameProperty ***************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetWidgetObjectProperty ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetObjectProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetWidgetObjectProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "Comment", "// ============================================================\n// WIDGET OBJECT PROPERTIES\n// ============================================================\n" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
		{ "ToolTip", "WIDGET OBJECT PROPERTIES" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetObjectProperty constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetObjectProperty constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetObjectProperty Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetObjectProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetObjectProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetObjectProperty_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidgetObjectProperty Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetWidgetObjectProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetObjectProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetObjectProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetObjectProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetWidgetObjectProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetWidgetObjectProperty(Z_Param_Object,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetWidgetObjectProperty *************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetWidgetPropertyDebugInfo ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetPropertyDebugInfo_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetWidgetPropertyDebugInfo_Parms
	{
		UObject* Object;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Debug" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetPropertyDebugInfo constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetPropertyDebugInfo constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetPropertyDebugInfo Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetPropertyDebugInfo_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetPropertyDebugInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidgetPropertyDebugInfo Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetWidgetPropertyDebugInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetPropertyDebugInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetPropertyDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetPropertyDebugInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetWidgetPropertyDebugInfo)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetWidgetPropertyDebugInfo(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetWidgetPropertyDebugInfo **********

// ********** Begin Class ULocodromeWidgetEditorLibrary Function GetWidgetTextProperty *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetTextProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		FText Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetTextProperty constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetTextProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetTextProperty Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWidgetTextProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "GetWidgetTextProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventGetWidgetTextProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetTextProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execGetWidgetTextProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::GetWidgetTextProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function GetWidgetTextProperty ***************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function MirrorWidgetEnumSideProperty ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_MirrorWidgetEnumSideProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Properties" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MirrorWidgetEnumSideProperty constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MirrorWidgetEnumSideProperty constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MirrorWidgetEnumSideProperty Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MirrorWidgetEnumSideProperty Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "MirrorWidgetEnumSideProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventMirrorWidgetEnumSideProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_MirrorWidgetEnumSideProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execMirrorWidgetEnumSideProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::MirrorWidgetEnumSideProperty(Z_Param_Object,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function MirrorWidgetEnumSideProperty ********

// ********** Begin Class ULocodromeWidgetEditorLibrary Function RenameSourceWidget ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_RenameSourceWidget_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms
	{
		UWidgetBlueprint* WidgetBlueprint;
		UWidget* Widget;
		FString NewName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenameSourceWidget constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetBlueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenameSourceWidget constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenameSourceWidget Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WidgetBlueprint = { "WidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms, WidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms, Widget), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RenameSourceWidget Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "RenameSourceWidget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventRenameSourceWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_RenameSourceWidget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execRenameSourceWidget)
{
	P_GET_OBJECT(UWidgetBlueprint,Z_Param_WidgetBlueprint);
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::RenameSourceWidget(Z_Param_WidgetBlueprint,Z_Param_Widget,Z_Param_NewName);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function RenameSourceWidget ******************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function SetWidgetNameArrayProperty ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetNameArrayProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		TArray<FName> Values;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Properties" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetNameArrayProperty constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetNameArrayProperty constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetNameArrayProperty Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWidgetNameArrayProperty Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "SetWidgetNameArrayProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetNameArrayProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetNameArrayProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execSetWidgetNameArrayProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::SetWidgetNameArrayProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Values);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function SetWidgetNameArrayProperty **********

// ********** Begin Class ULocodromeWidgetEditorLibrary Function SetWidgetNameProperty *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetNameProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		FName Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor|Properties" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetNameProperty constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetNameProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetNameProperty Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWidgetNameProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "SetWidgetNameProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetNameProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetNameProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execSetWidgetNameProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FNameProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::SetWidgetNameProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function SetWidgetNameProperty ***************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function SetWidgetObjectProperty ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetObjectProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		UObject* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetObjectProperty constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetObjectProperty constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetObjectProperty Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms, Value), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWidgetObjectProperty Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "SetWidgetObjectProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetObjectProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetObjectProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execSetWidgetObjectProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::SetWidgetObjectProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function SetWidgetObjectProperty *************

// ********** Begin Class ULocodromeWidgetEditorLibrary Function SetWidgetTextProperty *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetTextProperty_Statics
struct UHT_STATICS
{
	struct LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms
	{
		UObject* Object;
		FString PropertyName;
		FText Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Locodrome|Widget Editor" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetTextProperty constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetTextProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetTextProperty Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWidgetTextProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocodromeWidgetEditorLibrary, nullptr, "SetWidgetTextProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocodromeWidgetEditorLibrary_eventSetWidgetTextProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetTextProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocodromeWidgetEditorLibrary::execSetWidgetTextProperty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocodromeWidgetEditorLibrary::SetWidgetTextProperty(Z_Param_Object,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ULocodromeWidgetEditorLibrary Function SetWidgetTextProperty ***************

// ********** Begin Class ULocodromeWidgetEditorLibrary ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULocodromeWidgetEditorLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "LocodromeWidgetEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/LocodromeWidgetEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULocodromeWidgetEditorLibrary constinit property declarations ************
// ********** End Class ULocodromeWidgetEditorLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DuplicateSelectedDesignerWidgets"), .Pointer = &ULocodromeWidgetEditorLibrary::execDuplicateSelectedDesignerWidgets },
		{ .NameUTF8 = UTF8TEXT("DuplicateSourceWidgetHierarchy"), .Pointer = &ULocodromeWidgetEditorLibrary::execDuplicateSourceWidgetHierarchy },
		{ .NameUTF8 = UTF8TEXT("GetActiveWidgetBlueprint"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetActiveWidgetBlueprint },
		{ .NameUTF8 = UTF8TEXT("GetAllSourceWidgets"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetAllSourceWidgets },
		{ .NameUTF8 = UTF8TEXT("GetSelectedDesignerWidgets"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetSelectedDesignerWidgets },
		{ .NameUTF8 = UTF8TEXT("GetSourceWidgetDisplayLabel"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetSourceWidgetDisplayLabel },
		{ .NameUTF8 = UTF8TEXT("GetWidgetBytePropertyDebugInfo"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetWidgetBytePropertyDebugInfo },
		{ .NameUTF8 = UTF8TEXT("GetWidgetNameArrayProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetWidgetNameArrayProperty },
		{ .NameUTF8 = UTF8TEXT("GetWidgetNameProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetWidgetNameProperty },
		{ .NameUTF8 = UTF8TEXT("GetWidgetObjectProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetWidgetObjectProperty },
		{ .NameUTF8 = UTF8TEXT("GetWidgetPropertyDebugInfo"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetWidgetPropertyDebugInfo },
		{ .NameUTF8 = UTF8TEXT("GetWidgetTextProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execGetWidgetTextProperty },
		{ .NameUTF8 = UTF8TEXT("MirrorWidgetEnumSideProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execMirrorWidgetEnumSideProperty },
		{ .NameUTF8 = UTF8TEXT("RenameSourceWidget"), .Pointer = &ULocodromeWidgetEditorLibrary::execRenameSourceWidget },
		{ .NameUTF8 = UTF8TEXT("SetWidgetNameArrayProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execSetWidgetNameArrayProperty },
		{ .NameUTF8 = UTF8TEXT("SetWidgetNameProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execSetWidgetNameProperty },
		{ .NameUTF8 = UTF8TEXT("SetWidgetObjectProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execSetWidgetObjectProperty },
		{ .NameUTF8 = UTF8TEXT("SetWidgetTextProperty"), .Pointer = &ULocodromeWidgetEditorLibrary::execSetWidgetTextProperty },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_DuplicateSelectedDesignerWidgets, "DuplicateSelectedDesignerWidgets" }, // e1e1b6096b33227d25c5d9894218a721b7d9ccd9
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_DuplicateSourceWidgetHierarchy, "DuplicateSourceWidgetHierarchy" }, // 0ad063d1ed02d73753d9341d791161c00e4f1613
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetActiveWidgetBlueprint, "GetActiveWidgetBlueprint" }, // 9d213c387cf8ee7cb330ce63a00b73d187d1aad3
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetAllSourceWidgets, "GetAllSourceWidgets" }, // e8dca36d432f5b2363f44f1be2d1a8d1618e502f
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetSelectedDesignerWidgets, "GetSelectedDesignerWidgets" }, // 0e3af2466eda9075d8949ddb1fc7610c2b040185
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetSourceWidgetDisplayLabel, "GetSourceWidgetDisplayLabel" }, // 46be3337ca0eea147295be2a5bac4c6f1cf334cf
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetBytePropertyDebugInfo, "GetWidgetBytePropertyDebugInfo" }, // 2e2f6667887121bd97cd77063710104ac5ada979
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetNameArrayProperty, "GetWidgetNameArrayProperty" }, // 97d02dffcb52150e4637ba3f748426f8a00087de
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetNameProperty, "GetWidgetNameProperty" }, // 93ca28c67eb3068e5477b839ca6221ece65fe1c8
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetObjectProperty, "GetWidgetObjectProperty" }, // 24fead53e13784931577facfad96779bb729c370
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetPropertyDebugInfo, "GetWidgetPropertyDebugInfo" }, // ecae0d86f15f5fd4a7b051773adb23036db4a47c
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_GetWidgetTextProperty, "GetWidgetTextProperty" }, // 2d5f7211b67d354079545fede4343e600e6c0717
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_MirrorWidgetEnumSideProperty, "MirrorWidgetEnumSideProperty" }, // 030500a5c1763eb5e1370d4229aba779654e127f
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_RenameSourceWidget, "RenameSourceWidget" }, // dcc3c73839aa7f05df07f00b718dfb2afd385dcc
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetNameArrayProperty, "SetWidgetNameArrayProperty" }, // d230bd94b37ac1c17396f947d7739ff5ec3dd8e4
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetNameProperty, "SetWidgetNameProperty" }, // 8d2f6273069f062486c3595b07d8beabbb64f331
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetObjectProperty, "SetWidgetObjectProperty" }, // b47ef03bcdbc7c370ac9a0d4946f1803b5c96d52
		{ &Z_Construct_UFunction_ULocodromeWidgetEditorLibrary_SetWidgetTextProperty, "SetWidgetTextProperty" }, // 46049bc472c55a951e49f1d4dfeffa2da2035443
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocodromeWidgetEditorLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Locodrome,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULocodromeWidgetEditorLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ULocodromeWidgetEditorLibrary_StaticRegisterNativesULocodromeWidgetEditorLibrary()
{
	UClass* Class = ULocodromeWidgetEditorLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary;
UClass* Z_Construct_UClass_ULocodromeWidgetEditorLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULocodromeWidgetEditorLibrary;
		if (!Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LocodromeWidgetEditorLibrary"),
				Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary.InnerSingleton,
				ULocodromeWidgetEditorLibrary_StaticRegisterNativesULocodromeWidgetEditorLibrary,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary.OuterSingleton;
}
#undef UHT_STATICS
ULocodromeWidgetEditorLibrary::ULocodromeWidgetEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULocodromeWidgetEditorLibrary);
ULocodromeWidgetEditorLibrary::~ULocodromeWidgetEditorLibrary() {}
// ********** End Class ULocodromeWidgetEditorLibrary **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Locodrome_Source_Locodrome_Public_LocodromeWidgetEditorLibrary_h__Script_Locodrome_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocodromeWidgetEditorLibrary, TEXT("ULocodromeWidgetEditorLibrary"), &Z_Registration_Info_UClass_ULocodromeWidgetEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocodromeWidgetEditorLibrary), 3356708220U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Locodrome_Source_Locodrome_Public_LocodromeWidgetEditorLibrary_h__Script_Locodrome_f5b62d33683937d03a28671e5c81dc9d2894793b{
	TEXT("/Script/Locodrome"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
