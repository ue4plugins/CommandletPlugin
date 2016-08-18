// Copyright 2015 Headcrash Industries LLC. All Rights Reserved.

#include "CommandletPluginPCH.h"
#include "ModuleInterface.h"


/**
 * Implements the CommandletPlugin module.
 */
class FCommandletPluginModule
	: public IModuleInterface
{
public:

	//~ IModuleInterface interface

	virtual void StartupModule() override { }
	virtual void ShutdownModule() override { }

	virtual bool SupportsDynamicReloading() override
	{
		return true;
	}
};


IMPLEMENT_MODULE(FCommandletPluginModule, CommandletPlugin);
