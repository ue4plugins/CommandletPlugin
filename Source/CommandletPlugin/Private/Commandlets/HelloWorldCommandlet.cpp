// Copyright 2015 Headcrash Industries LLC. All Rights Reserved.

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
