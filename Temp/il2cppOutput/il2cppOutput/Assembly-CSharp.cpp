#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// AxleInfo
struct AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B;
// AxleInfo[]
struct AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763;
// SimpleCarController
struct SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116;
// System.Collections.Generic.List`1<AxleInfo>
struct List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WheelCollider
struct WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641;

IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC7225256B1141B08B6C9DE5B569F969F41CAE34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m74F92741C06953D51C49981C9970AE7823349477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m51E9A1C6903BBC98326DB1176FD833F4EF867E5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m30F4F17C0A0570EF76838DFBDEBF0D3AFBED4630_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t SimpleCarController_FixedUpdate_m14ED12A0F8633A35EC8C907D208739EB71ABB2C2_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// AxleInfo
struct  AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B  : public RuntimeObject
{
public:
	// UnityEngine.WheelCollider AxleInfo::leftWheel
	WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * ___leftWheel_0;
	// UnityEngine.WheelCollider AxleInfo::rightWheel
	WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * ___rightWheel_1;
	// System.Boolean AxleInfo::motor
	bool ___motor_2;
	// System.Boolean AxleInfo::steering
	bool ___steering_3;

public:
	inline static int32_t get_offset_of_leftWheel_0() { return static_cast<int32_t>(offsetof(AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B, ___leftWheel_0)); }
	inline WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * get_leftWheel_0() const { return ___leftWheel_0; }
	inline WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 ** get_address_of_leftWheel_0() { return &___leftWheel_0; }
	inline void set_leftWheel_0(WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * value)
	{
		___leftWheel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftWheel_0), (void*)value);
	}

	inline static int32_t get_offset_of_rightWheel_1() { return static_cast<int32_t>(offsetof(AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B, ___rightWheel_1)); }
	inline WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * get_rightWheel_1() const { return ___rightWheel_1; }
	inline WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 ** get_address_of_rightWheel_1() { return &___rightWheel_1; }
	inline void set_rightWheel_1(WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * value)
	{
		___rightWheel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightWheel_1), (void*)value);
	}

	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B, ___motor_2)); }
	inline bool get_motor_2() const { return ___motor_2; }
	inline bool* get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(bool value)
	{
		___motor_2 = value;
	}

	inline static int32_t get_offset_of_steering_3() { return static_cast<int32_t>(offsetof(AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B, ___steering_3)); }
	inline bool get_steering_3() const { return ___steering_3; }
	inline bool* get_address_of_steering_3() { return &___steering_3; }
	inline void set_steering_3(bool value)
	{
		___steering_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<AxleInfo>
struct  List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19, ____items_1)); }
	inline AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763* get__items_1() const { return ____items_1; }
	inline AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19_StaticFields, ____emptyArray_5)); }
	inline AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AxleInfoU5BU5D_t39213C8D8BA1FEA5A856EB3B01CCCBBC5526C763* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<AxleInfo>
struct  Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9, ___list_0)); }
	inline List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * get_list_0() const { return ___list_0; }
	inline List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9, ___current_3)); }
	inline AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * get_current_3() const { return ___current_3; }
	inline AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.WheelCollider
struct  WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// SimpleCarController
struct  SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.List`1<AxleInfo> SimpleCarController::axleInfos
	List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * ___axleInfos_4;
	// System.Single SimpleCarController::maxMotorTorque
	float ___maxMotorTorque_5;
	// System.Single SimpleCarController::maxSteeringAngle
	float ___maxSteeringAngle_6;

public:
	inline static int32_t get_offset_of_axleInfos_4() { return static_cast<int32_t>(offsetof(SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116, ___axleInfos_4)); }
	inline List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * get_axleInfos_4() const { return ___axleInfos_4; }
	inline List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 ** get_address_of_axleInfos_4() { return &___axleInfos_4; }
	inline void set_axleInfos_4(List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * value)
	{
		___axleInfos_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axleInfos_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxMotorTorque_5() { return static_cast<int32_t>(offsetof(SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116, ___maxMotorTorque_5)); }
	inline float get_maxMotorTorque_5() const { return ___maxMotorTorque_5; }
	inline float* get_address_of_maxMotorTorque_5() { return &___maxMotorTorque_5; }
	inline void set_maxMotorTorque_5(float value)
	{
		___maxMotorTorque_5 = value;
	}

	inline static int32_t get_offset_of_maxSteeringAngle_6() { return static_cast<int32_t>(offsetof(SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116, ___maxSteeringAngle_6)); }
	inline float get_maxSteeringAngle_6() const { return ___maxSteeringAngle_6; }
	inline float* get_address_of_maxSteeringAngle_6() { return &___maxSteeringAngle_6; }
	inline void set_maxSteeringAngle_6(float value)
	{
		___maxSteeringAngle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_GetWorldPose_m8508E3D8CD2D56CCA9458F634F4C7A1B1B5516AA (WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___quat1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<AxleInfo>::GetEnumerator()
inline Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9  List_1_GetEnumerator_m30F4F17C0A0570EF76838DFBDEBF0D3AFBED4630 (List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9  (*) (List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<AxleInfo>::get_Current()
inline AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * Enumerator_get_Current_m51E9A1C6903BBC98326DB1176FD833F4EF867E5B_inline (Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 * __this, const RuntimeMethod* method)
{
	return ((  AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * (*) (Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_mB86472369D34F42CFE9A54E6A4D4D26E11DBF176 (WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_m404286BB97DBB636DC13F435B94B4E009210A82C (WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * __this, float ___value0, const RuntimeMethod* method);
// System.Void SimpleCarController::ApplyLocalPositionToVisuals(UnityEngine.WheelCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCarController_ApplyLocalPositionToVisuals_mDC2ABFD597A50D9C66CF91FD6F15B6F17B19CC41 (SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116 * __this, WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * ___collider0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<AxleInfo>::MoveNext()
inline bool Enumerator_MoveNext_m74F92741C06953D51C49981C9970AE7823349477 (Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<AxleInfo>::Dispose()
inline void Enumerator_Dispose_mFC7225256B1141B08B6C9DE5B569F969F41CAE34 (Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxleInfo__ctor_m84E9F475A781CEB5EF7550D634970559420A2F69 (AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleCarController::ApplyLocalPositionToVisuals(UnityEngine.WheelCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCarController_ApplyLocalPositionToVisuals_mDC2ABFD597A50D9C66CF91FD6F15B6F17B19CC41 (SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116 * __this, WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * ___collider0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (collider.transform.childCount == 0)
		WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_0 = ___collider0;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Transform visualWheel = collider.transform.GetChild(0);
		WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_3 = ___collider0;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_4, 0, /*hidden argument*/NULL);
		// collider.GetWorldPose(out position, out rotation);
		WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_6 = ___collider0;
		NullCheck(L_6);
		WheelCollider_GetWorldPose_m8508E3D8CD2D56CCA9458F634F4C7A1B1B5516AA(L_6, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		// visualWheel.transform.position = position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = L_5;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_8, L_9, /*hidden argument*/NULL);
		// visualWheel.transform.rotation = rotation;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = V_1;
		NullCheck(L_10);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleCarController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCarController_FixedUpdate_m14ED12A0F8633A35EC8C907D208739EB71ABB2C2 (SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCarController_FixedUpdate_m14ED12A0F8633A35EC8C907D208739EB71ABB2C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// float motor = maxMotorTorque * Input.GetAxis("Vertical");
		float L_0 = __this->get_maxMotorTorque_5();
		float L_1 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// float steering = maxSteeringAngle * Input.GetAxis("Horizontal");
		float L_2 = __this->get_maxSteeringAngle_6();
		float L_3 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// foreach (AxleInfo axleInfo in axleInfos)
		List_1_tC7C726D93BA65D0EB329BD83F211D68FD7BC3D19 * L_4 = __this->get_axleInfos_4();
		NullCheck(L_4);
		Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9  L_5 = List_1_GetEnumerator_m30F4F17C0A0570EF76838DFBDEBF0D3AFBED4630(L_4, /*hidden argument*/List_1_GetEnumerator_m30F4F17C0A0570EF76838DFBDEBF0D3AFBED4630_RuntimeMethod_var);
		V_2 = L_5;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_0032:
		{
			// foreach (AxleInfo axleInfo in axleInfos)
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_6 = Enumerator_get_Current_m51E9A1C6903BBC98326DB1176FD833F4EF867E5B_inline((Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m51E9A1C6903BBC98326DB1176FD833F4EF867E5B_RuntimeMethod_var);
			V_3 = L_6;
			// if (axleInfo.steering)
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_7 = V_3;
			NullCheck(L_7);
			bool L_8 = L_7->get_steering_3();
			if (!L_8)
			{
				goto IL_005a;
			}
		}

IL_0042:
		{
			// axleInfo.leftWheel.steerAngle = steering;
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_9 = V_3;
			NullCheck(L_9);
			WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_10 = L_9->get_leftWheel_0();
			float L_11 = V_1;
			NullCheck(L_10);
			WheelCollider_set_steerAngle_mB86472369D34F42CFE9A54E6A4D4D26E11DBF176(L_10, L_11, /*hidden argument*/NULL);
			// axleInfo.rightWheel.steerAngle = steering;
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_12 = V_3;
			NullCheck(L_12);
			WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_13 = L_12->get_rightWheel_1();
			float L_14 = V_1;
			NullCheck(L_13);
			WheelCollider_set_steerAngle_mB86472369D34F42CFE9A54E6A4D4D26E11DBF176(L_13, L_14, /*hidden argument*/NULL);
		}

IL_005a:
		{
			// if (axleInfo.motor)
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_15 = V_3;
			NullCheck(L_15);
			bool L_16 = L_15->get_motor_2();
			if (!L_16)
			{
				goto IL_007a;
			}
		}

IL_0062:
		{
			// axleInfo.leftWheel.motorTorque = motor;
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_17 = V_3;
			NullCheck(L_17);
			WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_18 = L_17->get_leftWheel_0();
			float L_19 = V_0;
			NullCheck(L_18);
			WheelCollider_set_motorTorque_m404286BB97DBB636DC13F435B94B4E009210A82C(L_18, L_19, /*hidden argument*/NULL);
			// axleInfo.rightWheel.motorTorque = motor;
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_20 = V_3;
			NullCheck(L_20);
			WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_21 = L_20->get_rightWheel_1();
			float L_22 = V_0;
			NullCheck(L_21);
			WheelCollider_set_motorTorque_m404286BB97DBB636DC13F435B94B4E009210A82C(L_21, L_22, /*hidden argument*/NULL);
		}

IL_007a:
		{
			// ApplyLocalPositionToVisuals(axleInfo.leftWheel);
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_23 = V_3;
			NullCheck(L_23);
			WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_24 = L_23->get_leftWheel_0();
			SimpleCarController_ApplyLocalPositionToVisuals_mDC2ABFD597A50D9C66CF91FD6F15B6F17B19CC41(__this, L_24, /*hidden argument*/NULL);
			// ApplyLocalPositionToVisuals(axleInfo.rightWheel);
			AxleInfo_t36CCE1FD37AB3C4BF85FE5A4CCC0745552285D4B * L_25 = V_3;
			NullCheck(L_25);
			WheelCollider_t92116DAF9E41154A9FB854E1BE553799E6837641 * L_26 = L_25->get_rightWheel_1();
			SimpleCarController_ApplyLocalPositionToVisuals_mDC2ABFD597A50D9C66CF91FD6F15B6F17B19CC41(__this, L_26, /*hidden argument*/NULL);
		}

IL_0092:
		{
			// foreach (AxleInfo axleInfo in axleInfos)
			bool L_27 = Enumerator_MoveNext_m74F92741C06953D51C49981C9970AE7823349477((Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m74F92741C06953D51C49981C9970AE7823349477_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0032;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFC7225256B1141B08B6C9DE5B569F969F41CAE34((Enumerator_tB02FC5935877AFD69574FFEEF22C1D57368B29C9 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mFC7225256B1141B08B6C9DE5B569F969F41CAE34_RuntimeMethod_var);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void SimpleCarController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCarController__ctor_m4C54D9A89E201B768BC7C9AFC9B8EEA81D0BFC9B (SimpleCarController_t7B887D441D3F7B2CC3B5D4B08F1FE4E4F36F2116 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
