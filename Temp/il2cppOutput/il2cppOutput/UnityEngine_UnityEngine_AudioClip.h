﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t448;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t450;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.AudioClip
struct  AudioClip_t451  : public Object_t276
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t448 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t450 * ___m_PCMSetPositionCallback_3;
};
