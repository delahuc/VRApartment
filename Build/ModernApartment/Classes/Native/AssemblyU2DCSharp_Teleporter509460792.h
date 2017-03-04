#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// GvrViewer
struct GvrViewer_t671349045;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleporter
struct  Teleporter_t509460792  : public MonoBehaviour_t667441552
{
public:
	// System.Single Teleporter::height
	float ___height_2;
	// System.Single Teleporter::speed
	float ___speed_3;
	// UnityEngine.Transform[] Teleporter::waypoints
	TransformU5BU5D_t3792884695* ___waypoints_4;
	// System.Int32 Teleporter::currentWaypointIndex
	int32_t ___currentWaypointIndex_5;
	// GvrViewer Teleporter::viewer
	GvrViewer_t671349045 * ___viewer_6;
	// UnityEngine.Camera Teleporter::cam
	Camera_t2727095145 * ___cam_7;
	// UnityEngine.Animator Teleporter::globeAnimator
	Animator_t2776330603 * ___globeAnimator_8;
	// UnityEngine.Animator Teleporter::bookShelfAnimator
	Animator_t2776330603 * ___bookShelfAnimator_9;

public:
	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___height_2)); }
	inline float get_height_2() const { return ___height_2; }
	inline float* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(float value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___waypoints_4)); }
	inline TransformU5BU5D_t3792884695* get_waypoints_4() const { return ___waypoints_4; }
	inline TransformU5BU5D_t3792884695** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(TransformU5BU5D_t3792884695* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_4, value);
	}

	inline static int32_t get_offset_of_currentWaypointIndex_5() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___currentWaypointIndex_5)); }
	inline int32_t get_currentWaypointIndex_5() const { return ___currentWaypointIndex_5; }
	inline int32_t* get_address_of_currentWaypointIndex_5() { return &___currentWaypointIndex_5; }
	inline void set_currentWaypointIndex_5(int32_t value)
	{
		___currentWaypointIndex_5 = value;
	}

	inline static int32_t get_offset_of_viewer_6() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___viewer_6)); }
	inline GvrViewer_t671349045 * get_viewer_6() const { return ___viewer_6; }
	inline GvrViewer_t671349045 ** get_address_of_viewer_6() { return &___viewer_6; }
	inline void set_viewer_6(GvrViewer_t671349045 * value)
	{
		___viewer_6 = value;
		Il2CppCodeGenWriteBarrier(&___viewer_6, value);
	}

	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___cam_7)); }
	inline Camera_t2727095145 * get_cam_7() const { return ___cam_7; }
	inline Camera_t2727095145 ** get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(Camera_t2727095145 * value)
	{
		___cam_7 = value;
		Il2CppCodeGenWriteBarrier(&___cam_7, value);
	}

	inline static int32_t get_offset_of_globeAnimator_8() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___globeAnimator_8)); }
	inline Animator_t2776330603 * get_globeAnimator_8() const { return ___globeAnimator_8; }
	inline Animator_t2776330603 ** get_address_of_globeAnimator_8() { return &___globeAnimator_8; }
	inline void set_globeAnimator_8(Animator_t2776330603 * value)
	{
		___globeAnimator_8 = value;
		Il2CppCodeGenWriteBarrier(&___globeAnimator_8, value);
	}

	inline static int32_t get_offset_of_bookShelfAnimator_9() { return static_cast<int32_t>(offsetof(Teleporter_t509460792, ___bookShelfAnimator_9)); }
	inline Animator_t2776330603 * get_bookShelfAnimator_9() const { return ___bookShelfAnimator_9; }
	inline Animator_t2776330603 ** get_address_of_bookShelfAnimator_9() { return &___bookShelfAnimator_9; }
	inline void set_bookShelfAnimator_9(Animator_t2776330603 * value)
	{
		___bookShelfAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___bookShelfAnimator_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
