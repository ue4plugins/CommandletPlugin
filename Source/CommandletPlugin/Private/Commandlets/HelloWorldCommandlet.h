// Copyright 2015 Headcrash Industries LLC. All Rights Reserved.

#pragma once

#include "Commandlets/Commandlet.h"
#include "HelloWorldCommandlet.generated.h"


UCLASS()
class UHelloWorldCommandlet
	: public UCommandlet
{
	GENERATED_BODY()

public:

	/** Default constructor. */
	UHelloWorldCommandlet()
	{
		IsClient = false;
		IsEditor = false;
		IsServer = false;
		LogToConsole = true;
	}

public:

	//~ UCommandlet interface

	virtual int32 Main(const FString& Params) override
	{
		UE_LOG(LogCommandletPlugin, Display, TEXT("Hello world!"));

		return 0;
	}
};
