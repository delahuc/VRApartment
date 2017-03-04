#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// MutablePose3D
struct MutablePose3D_t1273683304;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudio
struct  GvrAudio_t4159038547  : public Il2CppObject
{
public:

public:
};

struct GvrAudio_t4159038547_StaticFields
{
public:
	// System.Int32 GvrAudio::sampleRate
	int32_t ___sampleRate_15;
	// System.Int32 GvrAudio::numChannels
	int32_t ___numChannels_16;
	// System.Int32 GvrAudio::framesPerBuffer
	int32_t ___framesPerBuffer_17;
	// System.Boolean GvrAudio::initialized
	bool ___initialized_18;
	// UnityEngine.Transform GvrAudio::listenerTransform
	Transform_t1659122786 * ___listenerTransform_19;
	// System.Int32 GvrAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_20;
	// MutablePose3D GvrAudio::pose
	MutablePose3D_t1273683304 * ___pose_21;
	// System.Single GvrAudio::worldScaleInverse
	float ___worldScaleInverse_22;

public:
	inline static int32_t get_offset_of_sampleRate_15() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___sampleRate_15)); }
	inline int32_t get_sampleRate_15() const { return ___sampleRate_15; }
	inline int32_t* get_address_of_sampleRate_15() { return &___sampleRate_15; }
	inline void set_sampleRate_15(int32_t value)
	{
		___sampleRate_15 = value;
	}

	inline static int32_t get_offset_of_numChannels_16() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___numChannels_16)); }
	inline int32_t get_numChannels_16() const { return ___numChannels_16; }
	inline int32_t* get_address_of_numChannels_16() { return &___numChannels_16; }
	inline void set_numChannels_16(int32_t value)
	{
		___numChannels_16 = value;
	}

	inline static int32_t get_offset_of_framesPerBuffer_17() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___framesPerBuffer_17)); }
	inline int32_t get_framesPerBuffer_17() const { return ___framesPerBuffer_17; }
	inline int32_t* get_address_of_framesPerBuffer_17() { return &___framesPerBuffer_17; }
	inline void set_framesPerBuffer_17(int32_t value)
	{
		___framesPerBuffer_17 = value;
	}

	inline static int32_t get_offset_of_initialized_18() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___initialized_18)); }
	inline bool get_initialized_18() const { return ___initialized_18; }
	inline bool* get_address_of_initialized_18() { return &___initialized_18; }
	inline void set_initialized_18(bool value)
	{
		___initialized_18 = value;
	}

	inline static int32_t get_offset_of_listenerTransform_19() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___listenerTransform_19)); }
	inline Transform_t1659122786 * get_listenerTransform_19() const { return ___listenerTransform_19; }
	inline Transform_t1659122786 ** get_address_of_listenerTransform_19() { return &___listenerTransform_19; }
	inline void set_listenerTransform_19(Transform_t1659122786 * value)
	{
		___listenerTransform_19 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTransform_19, value);
	}

	inline static int32_t get_offset_of_occlusionMaskValue_20() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___occlusionMaskValue_20)); }
	inline int32_t get_occlusionMaskValue_20() const { return ___occlusionMaskValue_20; }
	inline int32_t* get_address_of_occlusionMaskValue_20() { return &___occlusionMaskValue_20; }
	inline void set_occlusionMaskValue_20(int32_t value)
	{
		___occlusionMaskValue_20 = value;
	}

	inline static int32_t get_offset_of_pose_21() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___pose_21)); }
	inline MutablePose3D_t1273683304 * get_pose_21() const { return ___pose_21; }
	inline MutablePose3D_t1273683304 ** get_address_of_pose_21() { return &___pose_21; }
	inline void set_pose_21(MutablePose3D_t1273683304 * value)
	{
		___pose_21 = value;
		Il2CppCodeGenWriteBarrier(&___pose_21, value);
	}

	inline static int32_t get_offset_of_worldScaleInverse_22() { return static_cast<int32_t>(offsetof(GvrAudio_t4159038547_StaticFields, ___worldScaleInverse_22)); }
	inline float get_worldScaleInverse_22() const { return ___worldScaleInverse_22; }
	inline float* get_address_of_worldScaleInverse_22() { return &___worldScaleInverse_22; }
	inline void set_worldScaleInverse_22(float value)
	{
		___worldScaleInverse_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
