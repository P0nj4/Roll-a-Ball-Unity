﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t630;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1383;
// System.Collections.Stack
struct Stack_t911;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t161;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t1382  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t630 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t630 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t1383 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t911 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;
};
struct ConfigHandler_t1382_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map27
	Dictionary_2_t161 * ___U3CU3Ef__switchU24map27_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map28
	Dictionary_2_t161 * ___U3CU3Ef__switchU24map28_9;
};
