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
	UHelloWorldCommandlet();

public:

	//~ UCommandlet interface

	virtual int32 Main(const FString& Params) override;
};
