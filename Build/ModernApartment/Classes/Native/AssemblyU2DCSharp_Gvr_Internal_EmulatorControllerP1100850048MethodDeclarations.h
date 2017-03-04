#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Gvr.Internal.EmulatorControllerProvider
struct EmulatorControllerProvider_t1100850048;
// Gvr.Internal.ControllerState
struct ControllerState_t4024446631;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnectionM325090054.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerState4024446631.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent2112311150.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3989687101.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent3657941864.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent2349426533.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Gvr.Internal.EmulatorControllerProvider::.ctor(GvrController/EmulatorConnectionMode,System.Boolean,System.Boolean)
extern "C"  void EmulatorControllerProvider__ctor_m3175471741 (EmulatorControllerProvider_t1100850048 * __this, int32_t ___connectionMode0, bool ___enableGyro1, bool ___enableAccel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::ReadState(Gvr.Internal.ControllerState)
extern "C"  void EmulatorControllerProvider_ReadState_m3768787725 (EmulatorControllerProvider_t1100850048 * __this, ControllerState_t4024446631 * ___outState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::OnPause()
extern "C"  void EmulatorControllerProvider_OnPause_m2568284888 (EmulatorControllerProvider_t1100850048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::OnResume()
extern "C"  void EmulatorControllerProvider_OnResume_m698006701 (EmulatorControllerProvider_t1100850048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleTouchEvent(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void EmulatorControllerProvider_HandleTouchEvent_m332279960 (EmulatorControllerProvider_t1100850048 * __this, EmulatorTouchEvent_t2112311150  ___touchEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleOrientationEvent(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void EmulatorControllerProvider_HandleOrientationEvent_m271881722 (EmulatorControllerProvider_t1100850048 * __this, EmulatorOrientationEvent_t3989687101  ___orientationEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleButtonEvent(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void EmulatorControllerProvider_HandleButtonEvent_m2116400596 (EmulatorControllerProvider_t1100850048 * __this, EmulatorButtonEvent_t200175493  ___buttonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleGyroEvent(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void EmulatorControllerProvider_HandleGyroEvent_m1056460020 (EmulatorControllerProvider_t1100850048 * __this, EmulatorGyroEvent_t3657941864  ___gyroEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleAccelEvent(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void EmulatorControllerProvider_HandleAccelEvent_m1548884586 (EmulatorControllerProvider_t1100850048 * __this, EmulatorAccelEvent_t2349426533  ___accelEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  EmulatorControllerProvider_ConvertEmulatorQuaternion_m623505530 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___emulatorQuat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorGyro(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  EmulatorControllerProvider_ConvertEmulatorGyro_m2568741479 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___emulatorGyro0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorAccel(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  EmulatorControllerProvider_ConvertEmulatorAccel_m3099251858 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___emulatorAccel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::Recenter()
extern "C"  void EmulatorControllerProvider_Recenter_m2909363977 (EmulatorControllerProvider_t1100850048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
