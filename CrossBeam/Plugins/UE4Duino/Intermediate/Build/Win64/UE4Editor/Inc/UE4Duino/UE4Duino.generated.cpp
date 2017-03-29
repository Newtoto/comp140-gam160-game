// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/UE4DuinoPCH.h"
#include "UE4Duino.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UE4Duino() {}
	void UThreadBP::StaticRegisterNativesUThreadBP()
	{
		FNativeFunctionRegistrar::RegisterFunction(UThreadBP::StaticClass(), "CloseSerial",(Native)&UThreadBP::execCloseSerial);
		FNativeFunctionRegistrar::RegisterFunction(UThreadBP::StaticClass(), "IsSerialPortOpen",(Native)&UThreadBP::execIsSerialPortOpen);
		FNativeFunctionRegistrar::RegisterFunction(UThreadBP::StaticClass(), "OpenSerial",(Native)&UThreadBP::execOpenSerial);
		FNativeFunctionRegistrar::RegisterFunction(UThreadBP::StaticClass(), "ReadSerial",(Native)&UThreadBP::execReadSerial);
		FNativeFunctionRegistrar::RegisterFunction(UThreadBP::StaticClass(), "WriteSerial",(Native)&UThreadBP::execWriteSerial);
	}
	IMPLEMENT_CLASS(UThreadBP, 1144071422);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	UE4DUINO_API class UFunction* Z_Construct_UFunction_UThreadBP_CloseSerial();
	UE4DUINO_API class UFunction* Z_Construct_UFunction_UThreadBP_IsSerialPortOpen();
	UE4DUINO_API class UFunction* Z_Construct_UFunction_UThreadBP_OpenSerial();
	UE4DUINO_API class UFunction* Z_Construct_UFunction_UThreadBP_ReadSerial();
	UE4DUINO_API class UFunction* Z_Construct_UFunction_UThreadBP_WriteSerial();
	UE4DUINO_API class UClass* Z_Construct_UClass_UThreadBP_NoRegister();
	UE4DUINO_API class UClass* Z_Construct_UClass_UThreadBP();
	UE4DUINO_API class UPackage* Z_Construct_UPackage__Script_UE4Duino();
	UFunction* Z_Construct_UFunction_UThreadBP_CloseSerial()
	{
		UObject* Outer=Z_Construct_UClass_UThreadBP();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CloseSerial"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/ThreadBP.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_IsSerialPortOpen()
	{
		struct ThreadBP_eventIsSerialPortOpen_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UThreadBP();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsSerialPortOpen"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(ThreadBP_eventIsSerialPortOpen_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ThreadBP_eventIsSerialPortOpen_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ThreadBP_eventIsSerialPortOpen_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ThreadBP_eventIsSerialPortOpen_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/ThreadBP.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_OpenSerial()
	{
		struct ThreadBP_eventOpenSerial_Parms
		{
			int32 portNum;
			int32 baudRate;
		};
		UObject* Outer=Z_Construct_UClass_UThreadBP();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenSerial"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(ThreadBP_eventOpenSerial_Parms));
			UProperty* NewProp_baudRate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("baudRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(baudRate, ThreadBP_eventOpenSerial_Parms), 0x0010000000000080);
			UProperty* NewProp_portNum = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("portNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(portNum, ThreadBP_eventOpenSerial_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/ThreadBP.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_ReadSerial()
	{
		struct ThreadBP_eventReadSerial_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UThreadBP();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadSerial"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(ThreadBP_eventReadSerial_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, ThreadBP_eventReadSerial_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/ThreadBP.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UThreadBP_WriteSerial()
	{
		struct ThreadBP_eventWriteSerial_Parms
		{
			FString writeData;
		};
		UObject* Outer=Z_Construct_UClass_UThreadBP();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WriteSerial"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(ThreadBP_eventWriteSerial_Parms));
			UProperty* NewProp_writeData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("writeData"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(writeData, ThreadBP_eventWriteSerial_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/ThreadBP.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThreadBP_NoRegister()
	{
		return UThreadBP::StaticClass();
	}
	UClass* Z_Construct_UClass_UThreadBP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_UE4Duino();
			OuterClass = UThreadBP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UThreadBP_CloseSerial());
				OuterClass->LinkChild(Z_Construct_UFunction_UThreadBP_IsSerialPortOpen());
				OuterClass->LinkChild(Z_Construct_UFunction_UThreadBP_OpenSerial());
				OuterClass->LinkChild(Z_Construct_UFunction_UThreadBP_ReadSerial());
				OuterClass->LinkChild(Z_Construct_UFunction_UThreadBP_WriteSerial());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UThreadBP_CloseSerial(), "CloseSerial"); // 1680836022
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UThreadBP_IsSerialPortOpen(), "IsSerialPortOpen"); // 2949450847
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UThreadBP_OpenSerial(), "OpenSerial"); // 3361865096
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UThreadBP_ReadSerial(), "ReadSerial"); // 3421957609
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UThreadBP_WriteSerial(), "WriteSerial"); // 482088582
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ThreadBP.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/ThreadBP.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThreadBP(Z_Construct_UClass_UThreadBP, &UThreadBP::StaticClass, TEXT("UThreadBP"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThreadBP);
	UPackage* Z_Construct_UPackage__Script_UE4Duino()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/UE4Duino")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB1B23E34;
			Guid.B = 0x21792652;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
