// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HelloWorldCommandlet.h"
#include "CommandletPluginPrivate.h"


UHelloWorldCommandlet::UHelloWorldCommandlet()
{
	IsClient = false;
	IsEditor = false;
	IsServer = false;
	LogToConsole = true;
}


int32 UHelloWorldCommandlet::Main(const FString& Params)
{
	UE_LOG(LogCommandletPlugin, Display, TEXT("Hello world!"));

	return 0;
}
