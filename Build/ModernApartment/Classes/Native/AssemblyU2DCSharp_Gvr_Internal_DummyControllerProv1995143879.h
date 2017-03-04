#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Gvr.Internal.ControllerState
struct ControllerState_t4024446631;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.DummyControllerProvider
struct  DummyControllerProvider_t1995143879  : public Il2CppObject
{
public:
	// Gvr.Internal.ControllerState Gvr.Internal.DummyControllerProvider::dummyState
	ControllerState_t4024446631 * ___dummyState_0;

public:
	inline static int32_t get_offset_of_dummyState_0() { return static_cast<int32_t>(offsetof(DummyControllerProvider_t1995143879, ___dummyState_0)); }
	inline ControllerState_t4024446631 * get_dummyState_0() const { return ___dummyState_0; }
	inline ControllerState_t4024446631 ** get_address_of_dummyState_0() { return &___dummyState_0; }
	inline void set_dummyState_0(ControllerState_t4024446631 * value)
	{
		___dummyState_0 = value;
		Il2CppCodeGenWriteBarrier(&___dummyState_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
