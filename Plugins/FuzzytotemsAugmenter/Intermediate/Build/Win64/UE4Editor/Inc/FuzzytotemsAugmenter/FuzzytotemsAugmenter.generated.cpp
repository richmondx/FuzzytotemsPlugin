// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/FuzzytotemsAugmenterPrivatePCH.h"
#include "FuzzytotemsAugmenter.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuzzytotemsAugmenter() {}
static class UEnum* EErrorCode_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern FUZZYTOTEMSAUGMENTER_API class UEnum* Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode();
		extern FUZZYTOTEMSAUGMENTER_API class UPackage* Z_Construct_UPackage_FuzzytotemsAugmenter();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode, Z_Construct_UPackage_FuzzytotemsAugmenter(), TEXT("EErrorCode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EErrorCode(EErrorCode_StaticEnum, TEXT("/Script/FuzzytotemsAugmenter"));
static class UEnum* ESortType_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern FUZZYTOTEMSAUGMENTER_API class UEnum* Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType();
		extern FUZZYTOTEMSAUGMENTER_API class UPackage* Z_Construct_UPackage_FuzzytotemsAugmenter();
		Singleton = GetStaticEnum(Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType, Z_Construct_UPackage_FuzzytotemsAugmenter(), TEXT("ESortType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESortType(ESortType_StaticEnum, TEXT("/Script/FuzzytotemsAugmenter"));
	void UFuzzytotemsAugmenterBPLibrary::StaticRegisterNativesUFuzzytotemsAugmenterBPLibrary()
	{
		FNativeFunctionRegistrar::RegisterFunction(UFuzzytotemsAugmenterBPLibrary::StaticClass(),"TArraySortFloat",(Native)&UFuzzytotemsAugmenterBPLibrary::execTArraySortFloat);
		FNativeFunctionRegistrar::RegisterFunction(UFuzzytotemsAugmenterBPLibrary::StaticClass(),"TArraySortInt",(Native)&UFuzzytotemsAugmenterBPLibrary::execTArraySortInt);
		FNativeFunctionRegistrar::RegisterFunction(UFuzzytotemsAugmenterBPLibrary::StaticClass(),"TArraySortName",(Native)&UFuzzytotemsAugmenterBPLibrary::execTArraySortName);
		FNativeFunctionRegistrar::RegisterFunction(UFuzzytotemsAugmenterBPLibrary::StaticClass(),"TArraySortObject",(Native)&UFuzzytotemsAugmenterBPLibrary::execTArraySortObject);
		FNativeFunctionRegistrar::RegisterFunction(UFuzzytotemsAugmenterBPLibrary::StaticClass(),"TArraySortString",(Native)&UFuzzytotemsAugmenterBPLibrary::execTArraySortString);
	}
	IMPLEMENT_CLASS(UFuzzytotemsAugmenterBPLibrary, 2365848152);
	bool IISortable::Compare(const UObject* otherObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Compare instead.");
		ISortable_eventCompare_Parms Parms;
		return Parms.ReturnValue;
	}
	void UISortable::StaticRegisterNativesUISortable()
	{
	}
	IMPLEMENT_CLASS(UISortable, 183082075);
	bool IISortable::Execute_Compare(UObject* O, const UObject* otherObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UISortable::StaticClass()));
		ISortable_eventCompare_Parms Parms;
		UFunction* const Func = O->FindFunction(FUZZYTOTEMSAUGMENTER_Compare);
		if (Func)
		{
			Parms.otherObject=otherObject;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
FName FUZZYTOTEMSAUGMENTER_Compare = FName(TEXT("Compare"));
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	FUZZYTOTEMSAUGMENTER_API class UEnum* Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode();
	FUZZYTOTEMSAUGMENTER_API class UEnum* Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType();
	FUZZYTOTEMSAUGMENTER_API class UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortFloat();
	FUZZYTOTEMSAUGMENTER_API class UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortInt();
	FUZZYTOTEMSAUGMENTER_API class UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortName();
	FUZZYTOTEMSAUGMENTER_API class UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortObject();
	FUZZYTOTEMSAUGMENTER_API class UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortString();
	FUZZYTOTEMSAUGMENTER_API class UClass* Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary_NoRegister();
	FUZZYTOTEMSAUGMENTER_API class UClass* Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary();
	FUZZYTOTEMSAUGMENTER_API class UFunction* Z_Construct_UFunction_UISortable_Compare();
	FUZZYTOTEMSAUGMENTER_API class UClass* Z_Construct_UClass_UISortable_NoRegister();
	FUZZYTOTEMSAUGMENTER_API class UClass* Z_Construct_UClass_UISortable();
	FUZZYTOTEMSAUGMENTER_API class UPackage* Z_Construct_UPackage_FuzzytotemsAugmenter();
	UEnum* Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode()
	{
		UPackage* Outer=Z_Construct_UPackage_FuzzytotemsAugmenter();
		extern uint32 Get_Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("EErrorCode"), 0, Get_Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EErrorCode"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EErrorCode::EEC_NoError")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EErrorCode::EEC_NoInterface")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EErrorCode::EEC_Exception")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EErrorCode::EEC_MAX")), 3));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("EEC_Exception.DisplayName"), TEXT("An exception was thrown; Will not retain output"));
			MetaData->SetValue(ReturnEnum, TEXT("EEC_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("EEC_NoError.DisplayName"), TEXT("No Error"));
			MetaData->SetValue(ReturnEnum, TEXT("EEC_NoInterface.DisplayName"), TEXT("No ISortable interface detected"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FuzzytotemsAugmenter_EErrorCode_CRC() { return 3248403669U; }
	UEnum* Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType()
	{
		UPackage* Outer=Z_Construct_UPackage_FuzzytotemsAugmenter();
		extern uint32 Get_Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("ESortType"), 0, Get_Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESortType"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("ESortType::EST_Sort")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("ESortType::EST_UnstableSort")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("ESortType::EST_HeapSort")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("ESortType::EST_MAX")), 3));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("EST_HeapSort.DisplayName"), TEXT("Heap Sort"));
			MetaData->SetValue(ReturnEnum, TEXT("EST_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("EST_Sort.DisplayName"), TEXT("Default (Stable Sort)"));
			MetaData->SetValue(ReturnEnum, TEXT("EST_UnstableSort.DisplayName"), TEXT("Unstable Sort"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType_CRC() { return 1656415847U; }
	UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortFloat()
	{
		struct FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms
		{
			TArray<float> input;
			TArray<float> output;
			TEnumAsByte<ESortType> optionalSetting;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TArraySortFloat"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms), sizeof(bool), true);
			UProperty* NewProp_optionalSetting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("optionalSetting"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(optionalSetting, FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms), 0x0000000000000080, Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType());
			UProperty* NewProp_output = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("output"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(output, FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms), 0x0000000000000180);
			UProperty* NewProp_output_Inner = new(EC_InternalUseOnlyConstructor, NewProp_output, TEXT("output"), RF_Public|RF_Transient|RF_Native) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_input = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("input"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(input, FuzzytotemsAugmenterBPLibrary_eventTArraySortFloat_Parms), 0x0000000000000080);
			UProperty* NewProp_input_Inner = new(EC_InternalUseOnlyConstructor, NewProp_input, TEXT("input"), RF_Public|RF_Transient|RF_Native) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fuzzytotems TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Sort Float TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("FuzzytotemsAugmenter TArray Sort Float"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortInt()
	{
		struct FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms
		{
			TArray<int32> input;
			TArray<int32> output;
			TEnumAsByte<ESortType> optionalSetting;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TArraySortInt"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms), sizeof(bool), true);
			UProperty* NewProp_optionalSetting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("optionalSetting"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(optionalSetting, FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms), 0x0000000000000080, Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType());
			UProperty* NewProp_output = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("output"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(output, FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms), 0x0000000000000180);
			UProperty* NewProp_output_Inner = new(EC_InternalUseOnlyConstructor, NewProp_output, TEXT("output"), RF_Public|RF_Transient|RF_Native) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_input = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("input"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(input, FuzzytotemsAugmenterBPLibrary_eventTArraySortInt_Parms), 0x0000000000000080);
			UProperty* NewProp_input_Inner = new(EC_InternalUseOnlyConstructor, NewProp_input, TEXT("input"), RF_Public|RF_Transient|RF_Native) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fuzzytotems TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Sort Int TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("FuzzytotemsAugmenter TArray Sort Int"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortName()
	{
		struct FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms
		{
			TArray<FName> input;
			TArray<FName> output;
			TEnumAsByte<ESortType> optionalSetting;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TArraySortName"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms), sizeof(bool), true);
			UProperty* NewProp_optionalSetting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("optionalSetting"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(optionalSetting, FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms), 0x0000000000000080, Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType());
			UProperty* NewProp_output = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("output"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(output, FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms), 0x0000000000000180);
			UProperty* NewProp_output_Inner = new(EC_InternalUseOnlyConstructor, NewProp_output, TEXT("output"), RF_Public|RF_Transient|RF_Native) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_input = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("input"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(input, FuzzytotemsAugmenterBPLibrary_eventTArraySortName_Parms), 0x0000000000000080);
			UProperty* NewProp_input_Inner = new(EC_InternalUseOnlyConstructor, NewProp_input, TEXT("input"), RF_Public|RF_Transient|RF_Native) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fuzzytotems TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Sort Name TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("FuzzytotemsAugmenter TArray Sort FName"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortObject()
	{
		struct FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms
		{
			TArray<UObject*> input;
			TArray<UObject*> output;
			TEnumAsByte<ESortType> optionalSetting;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TArraySortObject"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms), sizeof(bool), true);
			UProperty* NewProp_optionalSetting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("optionalSetting"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(optionalSetting, FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms), 0x0000000000000080, Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType());
			UProperty* NewProp_output = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("output"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(output, FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms), 0x0000000000000180);
			UProperty* NewProp_output_Inner = new(EC_InternalUseOnlyConstructor, NewProp_output, TEXT("output"), RF_Public|RF_Transient|RF_Native) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_input = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("input"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(input, FuzzytotemsAugmenterBPLibrary_eventTArraySortObject_Parms), 0x0000000000000080);
			UProperty* NewProp_input_Inner = new(EC_InternalUseOnlyConstructor, NewProp_input, TEXT("input"), RF_Public|RF_Transient|RF_Native) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fuzzytotems TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Sort Object TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("FuzzytotemsAugmenter TArray Sort Object"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Sort Text TArray\", Keywords = \"FuzzytotemsAugmenter TArray Sort FText\"), Category = \"Fuzzytotems TArray\")\n       static bool TArraySortText(TArray<FText> input, TArray<FText> &output, ESortType optionalSetting);"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortString()
	{
		struct FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms
		{
			TArray<FString> input;
			TArray<FString> output;
			TEnumAsByte<ESortType> optionalSetting;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TArraySortString"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms), sizeof(bool), true);
			UProperty* NewProp_optionalSetting = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("optionalSetting"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(optionalSetting, FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms), 0x0000000000000080, Z_Construct_UEnum_FuzzytotemsAugmenter_ESortType());
			UProperty* NewProp_output = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("output"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(output, FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms), 0x0000000000000180);
			UProperty* NewProp_output_Inner = new(EC_InternalUseOnlyConstructor, NewProp_output, TEXT("output"), RF_Public|RF_Transient|RF_Native) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_input = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("input"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(input, FuzzytotemsAugmenterBPLibrary_eventTArraySortString_Parms), 0x0000000000000080);
			UProperty* NewProp_input_Inner = new(EC_InternalUseOnlyConstructor, NewProp_input, TEXT("input"), RF_Public|RF_Transient|RF_Native) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fuzzytotems TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Sort String TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("FuzzytotemsAugmenter TArray Sort FString"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary_NoRegister()
	{
		return UFuzzytotemsAugmenterBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage_FuzzytotemsAugmenter();
			OuterClass = UFuzzytotemsAugmenterBPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortInt());
				OuterClass->LinkChild(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortName());
				OuterClass->LinkChild(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortString());

				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortFloat()); // 2832191858
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortInt()); // 2705410050
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortName()); // 3847028888
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortObject()); // 3849441638
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UFuzzytotemsAugmenterBPLibrary_TArraySortString()); // 3308222334
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FuzzytotemsAugmenterBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFuzzytotemsAugmenterBPLibrary(Z_Construct_UClass_UFuzzytotemsAugmenterBPLibrary, TEXT("UFuzzytotemsAugmenterBPLibrary"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuzzytotemsAugmenterBPLibrary);
	UFunction* Z_Construct_UFunction_UISortable_Compare()
	{
		UObject* Outer=Z_Construct_UClass_UISortable();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Compare"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08020800, 65535, sizeof(ISortable_eventCompare_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ISortable_eventCompare_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ISortable_eventCompare_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ISortable_eventCompare_Parms), sizeof(bool), true);
			UProperty* NewProp_otherObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherObject"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(otherObject, ISortable_eventCompare_Parms), 0x0000000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fuzzytotems TArray"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Sorting Predicate"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Sorting Predicate"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FuzzytotemsAugmenterBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UISortable_NoRegister()
	{
		return UISortable::StaticClass();
	}
	UClass* Z_Construct_UClass_UISortable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			UInterface::StaticClass();
			Z_Construct_UPackage_FuzzytotemsAugmenter();
			OuterClass = UISortable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20084081;

				OuterClass->LinkChild(Z_Construct_UFunction_UISortable_Compare());

				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UISortable_Compare()); // 27582370
				OuterClass->StaticLink();
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISortable(Z_Construct_UClass_UISortable, TEXT("UISortable"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISortable);
	UPackage* Z_Construct_UPackage_FuzzytotemsAugmenter()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/FuzzytotemsAugmenter")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x0D805279;
			Guid.B = 0x30B42F69;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
