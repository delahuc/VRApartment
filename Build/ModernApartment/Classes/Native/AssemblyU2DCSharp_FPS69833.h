﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPS
struct  FPS_t69833  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text FPS::textField
	Text_t9039225 * ___textField_2;
	// System.Single FPS::fps
	float ___fps_3;

public:
	inline static int32_t get_offset_of_textField_2() { return static_cast<int32_t>(offsetof(FPS_t69833, ___textField_2)); }
	inline Text_t9039225 * get_textField_2() const { return ___textField_2; }
	inline Text_t9039225 ** get_address_of_textField_2() { return &___textField_2; }
	inline void set_textField_2(Text_t9039225 * value)
	{
		___textField_2 = value;
		Il2CppCodeGenWriteBarrier(&___textField_2, value);
	}

	inline static int32_t get_offset_of_fps_3() { return static_cast<int32_t>(offsetof(FPS_t69833, ___fps_3)); }
	inline float get_fps_3() const { return ___fps_3; }
	inline float* get_address_of_fps_3() { return &___fps_3; }
	inline void set_fps_3(float value)
	{
		___fps_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
