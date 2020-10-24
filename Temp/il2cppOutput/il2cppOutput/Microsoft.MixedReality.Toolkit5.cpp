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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.AdapterInfo[]
struct AdapterInfoU5BU5D_tBAA5B3F967EA83537D6FFA1701A7C62194ED00A8;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo
struct ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo[]
struct ApplicationInfoU5BU5D_t97DAC9B527946359F32A366948C9D1C420EDFD89;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.BatteryInfo
struct BatteryInfo_t9F13B4C5789047F90F3CEC4997A99D22B4CFA377;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo
struct DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo[]
struct DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortalConnections
struct DevicePortalConnections_tAA4C6923646B9EF95D22BD96A595D1E1A39D7323;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo[]
struct FileInfoU5BU5D_t550AF1B9F8D05001F702BB64886F4CA047EAFB83;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileList
struct FileList_t518F366914A5D44DE1B036BAA85CA65F581A3165;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus
struct InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps
struct InstalledApps_tA833026A2B09FF11E02580FD3F6206E082174E15;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo
struct InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo[]
struct InterfaceInfoU5BU5D_t0F8227B11A66DDFC1995B7C2DB5D44C55C24FB8D;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpAddressInfo
struct IpAddressInfo_t74B44737FA45169AB3180F437756B4F04EDFBBC5;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo
struct IpConfigInfo_tD0976F25291C176FD9C96B956E2FFBCEEC83AFE0;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName
struct MachineName_tBA926D8E198BC7994CB9A60D12CCF8C6CCCC341B;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces
struct NetworkInterfaces_t35B34FBB0AD6B0F82322483FD889275CC4F2C22E;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo
struct NetworkProfileInfo_t4E4CF9305AE7AA174C30AD7477B5BFD2C0CC15B8;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo[]
struct NetworkProfileInfoU5BU5D_t95677F8670F7995391D8F4275F30F270613F4FE2;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo
struct PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo
struct ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo[]
struct ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessList
struct ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo
struct WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo>
struct List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Byte[]>
struct Func_1_tF446E07B3865854020BC1156A3DF8C64A33A791C;
// System.Func`1<System.String>
struct Func_1_tA732247549D3531F543287C316CF7F7F02F061F7;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>>
struct Func_2_t08670465AB961B8C591232D75840AC3B3A36A1C1;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>>
struct Func_2_tA451B1DE16BC0E69A6ED70C179607440306F114E;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>>
struct Func_2_t5D7D0F648EFE771CF0EBA4CFD246EFD7480A23CE;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileInfo
struct FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tF557E5B102336CF23E33FF09270CB81EAB2E1029;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskFactory_1_t0F49079A32ABD6579DA36CD36FA122C108876E9B;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct TaskFactory_1_t4B7BE600FA2F684644E6964B9E1B9712F6F47553;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct TaskFactory_1_t2781B71D149FDF969E039F51DBBF6FC271CA22AE;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_tF2A8133ECD11ED4D21C36287E2B75EDCDB0B9E22;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.WWWForm
struct WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3;
IL2CPP_EXTERN_C String_t* _stringLiteral0DBD69F7278A03A086F884D2F7A027E897AC964A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5C7711BC3CEC2ECFCC69D3D1BFDF44EA9D03BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2085243405803843B0FA363495274C1D2499BC43;
IL2CPP_EXTERN_C String_t* _stringLiteral29D8DEC43E88B47582179DE53EF2720D981E8AB1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DD43BCA8BF76D9535758848D49F2A0F0EDBE4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral318288AFA711F16AD8008992D052362B499BA731;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3B6BEF4AFC5F978BAC9AA67CD3499B1CDFE59341;
IL2CPP_EXTERN_C String_t* _stringLiteral4574566DDC68C661BFBF351191376879359A8CF3;
IL2CPP_EXTERN_C String_t* _stringLiteral46A380659F7AD7F957D8BD60A988076AA967E641;
IL2CPP_EXTERN_C String_t* _stringLiteral500D1AD82B2A9E532E251E94D31DE3F8A5CF4174;
IL2CPP_EXTERN_C String_t* _stringLiteral547E3C559B1F6088BB6673538DD40CB97ED74EA3;
IL2CPP_EXTERN_C String_t* _stringLiteral59C826FC854197CBD4D1083BCE8FC00D0761E8B3;
IL2CPP_EXTERN_C String_t* _stringLiteral665368390ACCA5AB4ABB61EC7D12556AD67B640C;
IL2CPP_EXTERN_C String_t* _stringLiteral6EAE3A5B062C6D0D79F070C26E6D62486B40CB46;
IL2CPP_EXTERN_C String_t* _stringLiteral76A6AB37C34BE2069368C556BD900065D9AE36FC;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2F677A75FC6CF5C184A3DC04893B53FF0CD423;
IL2CPP_EXTERN_C String_t* _stringLiteral8EABC73A6C6505C4109358A33216B58D3A2C97E0;
IL2CPP_EXTERN_C String_t* _stringLiteral98C29E29F03C7A715766BC72021170D9D0C72809;
IL2CPP_EXTERN_C String_t* _stringLiteralA014392C3E204B016EA606A05AF5A6A3C6C4463E;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A;
IL2CPP_EXTERN_C String_t* _stringLiteralBB16CE026BF1A07A5455F7B9DDAF3FA1E5DC5686;
IL2CPP_EXTERN_C String_t* _stringLiteralC735E4716FB65CDFA973C9261881C31F574A20B5;
IL2CPP_EXTERN_C String_t* _stringLiteralD0588AC0612FC42B49B33281427CCEAB317BC622;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1BB95574BEF056665514562CFE16FFEBF12290;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0E8CCB5A0C17B2171FB42287A689549ABD5002;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C81EF410616CA8103A6D5A609E5F846445877A;
IL2CPP_EXTERN_C String_t* _stringLiteralF896CECFF02F21B16A9C71E87E40E5C903E56CBE;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6B6FA48E46C6F2B29DA1AFF5D72EC0F1BBE024;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m244C56488FDDA65AAE037960D70142D1E0EDDA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_mD3EC76334F8BAF4E756590524CE73EEECE387C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491_m00131F69C8009529B2AFCBC7A4E67FB7EE93A00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_mCC6E211BD3811DB78FD15D545E1CF91A7EAD4422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m01D1E960F382DB51E59B4F471DBF25CEBF6898F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m25DA5B322DB4842292AACF48787B861F22674739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m74D80FFC20BF889C7D01F98FE70CA4A80AA089BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mF97E953E2D97A04123E94334741949AFEC69BBF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mD6147102B505162D41207067B1F14F9A721F7ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m1661AF2AF2A69DCD619842AE7F5650193E583A61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mB2FF372808AE46FE78AEA8ACA5D2C46D59199130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m9B85FAF464FC1772DEC5E57AD1732A4F156F1193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m34495C46B609169EC7FEBB1DCD8F19668FEDFFBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_mD87BD1DB9C9D8B391277791ACFC42EE46B6045C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388_m1220D9489F08113580C55E9FF831F4AF6AA01F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m76DF6B3AEF4E06E5E50A04EA37CDB088B141957A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355_m727E47ED23BE0A6562B7FF579461D92E543FEA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m75DAE88C71233B38F4AB2144C29EFE60D819995C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9F1D6F4CD867D8E61EFC52F83376327F862C9FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5FE7DFB976404B750B6D94FB305B4766AAEA8A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mBD3E3A58FA5E551BD55ED66E15DD6C8E7A243B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mF7A5F84763CEDF89660D604397B6994A1C7B3224_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DevicePortalConnections__ctor_m9E0A633B4C62CEF35A5779D07E5A0A90FD9B439D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DevicePortalConnections__ctor_mC8AB6AE674767BB0B508AAE8265B1C6FC7B02CA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInstallAppAsyncU3Ed__27_MoveNext_m5EFDBE91E3567E3182CB00A479F14C55C6DCD89B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInstallAppAsyncU3Ed__27_SetStateMachine_m4A3A4F7A149F1B19857F3257BB9149B8EC39C839_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CIsAppInstalledAsyncU3Ed__23_MoveNext_m0C3AAA2DD8E150F3613FF87B7C99DCD323BC962B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CIsAppInstalledAsyncU3Ed__23_SetStateMachine_m0099D62AB1DD28C0A9D5E111A1E6F918CF845AEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CIsAppRunningAsyncU3Ed__24_MoveNext_m359F5BA2A24D124CEC02BB0EE54FCD8A04D851A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CIsAppRunningAsyncU3Ed__24_SetStateMachine_m1CD67D4BC9A22735BC48BFD8A1784664CD2B7FBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLaunchAppAsyncU3Ed__30_MoveNext_mCDFCCED61A7796DF51AC7C56244E4C8967680CCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLaunchAppAsyncU3Ed__30_SetStateMachine_mA1AC6C1BD7937889139EA29358ED18B4C77129B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRefreshCsrfTokenAsyncU3Ed__38_MoveNext_m1AF7EEA004A3A88933403D13AED6F384742C0FC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRefreshCsrfTokenAsyncU3Ed__38_SetStateMachine_m2B3638321C003CD4EA39DD0B064C305FC2462BB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRestartAsyncU3Ed__21_MoveNext_mF95157499EFD63797DFE67187AF80F707AB8BE80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRestartAsyncU3Ed__21_SetStateMachine_mD422623D94954E3966491A6B2D5D3242407479C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShutdownAsyncU3Ed__22_MoveNext_m70770B3953BB8F589BCB71260938DD464D43772B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShutdownAsyncU3Ed__22_SetStateMachine_mD87F88BF2E1B904FC5E67EF3E0B4FE2E8DED2C2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopAppAsyncU3Ed__31_MoveNext_mCD048BF4FD63D2272347D6C87435BDDA56260832_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopAppAsyncU3Ed__31_SetStateMachine_mA1B39769BBBDBFD5C6F18E8E00CADE18B7999161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUninstallAppAsyncU3Ed__29_MoveNext_m1ED5CF1349FD12D2DDDA19FCE92B9719107FC6E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUninstallAppAsyncU3Ed__29_SetStateMachine_m7A9913B11A67F6443E783539547DD39265712072_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::continuation
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0, ___continuation_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo
struct  ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo::Name
	String_t* ___Name_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo::PackageFamilyName
	String_t* ___PackageFamilyName_1;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo::PackageFullName
	String_t* ___PackageFullName_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo::PackageOrigin
	int32_t ___PackageOrigin_3;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo::PackageRelativeId
	String_t* ___PackageRelativeId_4;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo::Publisher
	String_t* ___Publisher_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_PackageFamilyName_1() { return static_cast<int32_t>(offsetof(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5, ___PackageFamilyName_1)); }
	inline String_t* get_PackageFamilyName_1() const { return ___PackageFamilyName_1; }
	inline String_t** get_address_of_PackageFamilyName_1() { return &___PackageFamilyName_1; }
	inline void set_PackageFamilyName_1(String_t* value)
	{
		___PackageFamilyName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackageFamilyName_1), (void*)value);
	}

	inline static int32_t get_offset_of_PackageFullName_2() { return static_cast<int32_t>(offsetof(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5, ___PackageFullName_2)); }
	inline String_t* get_PackageFullName_2() const { return ___PackageFullName_2; }
	inline String_t** get_address_of_PackageFullName_2() { return &___PackageFullName_2; }
	inline void set_PackageFullName_2(String_t* value)
	{
		___PackageFullName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackageFullName_2), (void*)value);
	}

	inline static int32_t get_offset_of_PackageOrigin_3() { return static_cast<int32_t>(offsetof(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5, ___PackageOrigin_3)); }
	inline int32_t get_PackageOrigin_3() const { return ___PackageOrigin_3; }
	inline int32_t* get_address_of_PackageOrigin_3() { return &___PackageOrigin_3; }
	inline void set_PackageOrigin_3(int32_t value)
	{
		___PackageOrigin_3 = value;
	}

	inline static int32_t get_offset_of_PackageRelativeId_4() { return static_cast<int32_t>(offsetof(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5, ___PackageRelativeId_4)); }
	inline String_t* get_PackageRelativeId_4() const { return ___PackageRelativeId_4; }
	inline String_t** get_address_of_PackageRelativeId_4() { return &___PackageRelativeId_4; }
	inline void set_PackageRelativeId_4(String_t* value)
	{
		___PackageRelativeId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackageRelativeId_4), (void*)value);
	}

	inline static int32_t get_offset_of_Publisher_5() { return static_cast<int32_t>(offsetof(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5, ___Publisher_5)); }
	inline String_t* get_Publisher_5() const { return ___Publisher_5; }
	inline String_t** get_address_of_Publisher_5() { return &___Publisher_5; }
	inline void set_Publisher_5(String_t* value)
	{
		___Publisher_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Publisher_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo
struct  DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::IP
	String_t* ___IP_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::User
	String_t* ___User_3;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::Password
	String_t* ___Password_4;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::MachineName
	String_t* ___MachineName_5;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::CsrfToken
	String_t* ___CsrfToken_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::authorization
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___authorization_7;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.BatteryInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::<BatteryInfo>k__BackingField
	BatteryInfo_t9F13B4C5789047F90F3CEC4997A99D22B4CFA377 * ___U3CBatteryInfoU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::<PowerState>k__BackingField
	PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB * ___U3CPowerStateU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_IP_2() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___IP_2)); }
	inline String_t* get_IP_2() const { return ___IP_2; }
	inline String_t** get_address_of_IP_2() { return &___IP_2; }
	inline void set_IP_2(String_t* value)
	{
		___IP_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IP_2), (void*)value);
	}

	inline static int32_t get_offset_of_User_3() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___User_3)); }
	inline String_t* get_User_3() const { return ___User_3; }
	inline String_t** get_address_of_User_3() { return &___User_3; }
	inline void set_User_3(String_t* value)
	{
		___User_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___User_3), (void*)value);
	}

	inline static int32_t get_offset_of_Password_4() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___Password_4)); }
	inline String_t* get_Password_4() const { return ___Password_4; }
	inline String_t** get_address_of_Password_4() { return &___Password_4; }
	inline void set_Password_4(String_t* value)
	{
		___Password_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Password_4), (void*)value);
	}

	inline static int32_t get_offset_of_MachineName_5() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___MachineName_5)); }
	inline String_t* get_MachineName_5() const { return ___MachineName_5; }
	inline String_t** get_address_of_MachineName_5() { return &___MachineName_5; }
	inline void set_MachineName_5(String_t* value)
	{
		___MachineName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MachineName_5), (void*)value);
	}

	inline static int32_t get_offset_of_CsrfToken_6() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___CsrfToken_6)); }
	inline String_t* get_CsrfToken_6() const { return ___CsrfToken_6; }
	inline String_t** get_address_of_CsrfToken_6() { return &___CsrfToken_6; }
	inline void set_CsrfToken_6(String_t* value)
	{
		___CsrfToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CsrfToken_6), (void*)value);
	}

	inline static int32_t get_offset_of_authorization_7() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___authorization_7)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_authorization_7() const { return ___authorization_7; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_authorization_7() { return &___authorization_7; }
	inline void set_authorization_7(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___authorization_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authorization_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBatteryInfoU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___U3CBatteryInfoU3Ek__BackingField_8)); }
	inline BatteryInfo_t9F13B4C5789047F90F3CEC4997A99D22B4CFA377 * get_U3CBatteryInfoU3Ek__BackingField_8() const { return ___U3CBatteryInfoU3Ek__BackingField_8; }
	inline BatteryInfo_t9F13B4C5789047F90F3CEC4997A99D22B4CFA377 ** get_address_of_U3CBatteryInfoU3Ek__BackingField_8() { return &___U3CBatteryInfoU3Ek__BackingField_8; }
	inline void set_U3CBatteryInfoU3Ek__BackingField_8(BatteryInfo_t9F13B4C5789047F90F3CEC4997A99D22B4CFA377 * value)
	{
		___U3CBatteryInfoU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBatteryInfoU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPowerStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8, ___U3CPowerStateU3Ek__BackingField_9)); }
	inline PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB * get_U3CPowerStateU3Ek__BackingField_9() const { return ___U3CPowerStateU3Ek__BackingField_9; }
	inline PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB ** get_address_of_U3CPowerStateU3Ek__BackingField_9() { return &___U3CPowerStateU3Ek__BackingField_9; }
	inline void set_U3CPowerStateU3Ek__BackingField_9(PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB * value)
	{
		___U3CPowerStateU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPowerStateU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortalConnections
struct  DevicePortalConnections_tAA4C6923646B9EF95D22BD96A595D1E1A39D7323  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortalConnections::Connections
	List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * ___Connections_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortalConnections::CurrentConnectionIndex
	int32_t ___CurrentConnectionIndex_1;

public:
	inline static int32_t get_offset_of_Connections_0() { return static_cast<int32_t>(offsetof(DevicePortalConnections_tAA4C6923646B9EF95D22BD96A595D1E1A39D7323, ___Connections_0)); }
	inline List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * get_Connections_0() const { return ___Connections_0; }
	inline List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 ** get_address_of_Connections_0() { return &___Connections_0; }
	inline void set_Connections_0(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * value)
	{
		___Connections_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Connections_0), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentConnectionIndex_1() { return static_cast<int32_t>(offsetof(DevicePortalConnections_tAA4C6923646B9EF95D22BD96A595D1E1A39D7323, ___CurrentConnectionIndex_1)); }
	inline int32_t get_CurrentConnectionIndex_1() const { return ___CurrentConnectionIndex_1; }
	inline int32_t* get_address_of_CurrentConnectionIndex_1() { return &___CurrentConnectionIndex_1; }
	inline void set_CurrentConnectionIndex_1(int32_t value)
	{
		___CurrentConnectionIndex_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileList
struct  FileList_t518F366914A5D44DE1B036BAA85CA65F581A3165  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileList::Items
	FileInfoU5BU5D_t550AF1B9F8D05001F702BB64886F4CA047EAFB83* ___Items_0;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(FileList_t518F366914A5D44DE1B036BAA85CA65F581A3165, ___Items_0)); }
	inline FileInfoU5BU5D_t550AF1B9F8D05001F702BB64886F4CA047EAFB83* get_Items_0() const { return ___Items_0; }
	inline FileInfoU5BU5D_t550AF1B9F8D05001F702BB64886F4CA047EAFB83** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(FileInfoU5BU5D_t550AF1B9F8D05001F702BB64886F4CA047EAFB83* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus
struct  InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus::Code
	int32_t ___Code_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus::CodeText
	String_t* ___CodeText_1;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus::Reason
	String_t* ___Reason_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus::Success
	bool ___Success_3;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_CodeText_1() { return static_cast<int32_t>(offsetof(InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6, ___CodeText_1)); }
	inline String_t* get_CodeText_1() const { return ___CodeText_1; }
	inline String_t** get_address_of_CodeText_1() { return &___CodeText_1; }
	inline void set_CodeText_1(String_t* value)
	{
		___CodeText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CodeText_1), (void*)value);
	}

	inline static int32_t get_offset_of_Reason_2() { return static_cast<int32_t>(offsetof(InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6, ___Reason_2)); }
	inline String_t* get_Reason_2() const { return ___Reason_2; }
	inline String_t** get_address_of_Reason_2() { return &___Reason_2; }
	inline void set_Reason_2(String_t* value)
	{
		___Reason_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reason_2), (void*)value);
	}

	inline static int32_t get_offset_of_Success_3() { return static_cast<int32_t>(offsetof(InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6, ___Success_3)); }
	inline bool get_Success_3() const { return ___Success_3; }
	inline bool* get_address_of_Success_3() { return &___Success_3; }
	inline void set_Success_3(bool value)
	{
		___Success_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps
struct  InstalledApps_tA833026A2B09FF11E02580FD3F6206E082174E15  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps::InstalledPackages
	ApplicationInfoU5BU5D_t97DAC9B527946359F32A366948C9D1C420EDFD89* ___InstalledPackages_0;

public:
	inline static int32_t get_offset_of_InstalledPackages_0() { return static_cast<int32_t>(offsetof(InstalledApps_tA833026A2B09FF11E02580FD3F6206E082174E15, ___InstalledPackages_0)); }
	inline ApplicationInfoU5BU5D_t97DAC9B527946359F32A366948C9D1C420EDFD89* get_InstalledPackages_0() const { return ___InstalledPackages_0; }
	inline ApplicationInfoU5BU5D_t97DAC9B527946359F32A366948C9D1C420EDFD89** get_address_of_InstalledPackages_0() { return &___InstalledPackages_0; }
	inline void set_InstalledPackages_0(ApplicationInfoU5BU5D_t97DAC9B527946359F32A366948C9D1C420EDFD89* value)
	{
		___InstalledPackages_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InstalledPackages_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo
struct  InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo::Description
	String_t* ___Description_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo::GUID
	String_t* ___GUID_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo::Index
	int32_t ___Index_2;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo::ProfilesList
	NetworkProfileInfoU5BU5D_t95677F8670F7995391D8F4275F30F270613F4FE2* ___ProfilesList_3;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_0), (void*)value);
	}

	inline static int32_t get_offset_of_GUID_1() { return static_cast<int32_t>(offsetof(InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864, ___GUID_1)); }
	inline String_t* get_GUID_1() const { return ___GUID_1; }
	inline String_t** get_address_of_GUID_1() { return &___GUID_1; }
	inline void set_GUID_1(String_t* value)
	{
		___GUID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUID_1), (void*)value);
	}

	inline static int32_t get_offset_of_Index_2() { return static_cast<int32_t>(offsetof(InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864, ___Index_2)); }
	inline int32_t get_Index_2() const { return ___Index_2; }
	inline int32_t* get_address_of_Index_2() { return &___Index_2; }
	inline void set_Index_2(int32_t value)
	{
		___Index_2 = value;
	}

	inline static int32_t get_offset_of_ProfilesList_3() { return static_cast<int32_t>(offsetof(InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864, ___ProfilesList_3)); }
	inline NetworkProfileInfoU5BU5D_t95677F8670F7995391D8F4275F30F270613F4FE2* get_ProfilesList_3() const { return ___ProfilesList_3; }
	inline NetworkProfileInfoU5BU5D_t95677F8670F7995391D8F4275F30F270613F4FE2** get_address_of_ProfilesList_3() { return &___ProfilesList_3; }
	inline void set_ProfilesList_3(NetworkProfileInfoU5BU5D_t95677F8670F7995391D8F4275F30F270613F4FE2* value)
	{
		___ProfilesList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProfilesList_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpAddressInfo
struct  IpAddressInfo_t74B44737FA45169AB3180F437756B4F04EDFBBC5  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpAddressInfo::IpAddress
	String_t* ___IpAddress_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpAddressInfo::Mask
	String_t* ___Mask_1;

public:
	inline static int32_t get_offset_of_IpAddress_0() { return static_cast<int32_t>(offsetof(IpAddressInfo_t74B44737FA45169AB3180F437756B4F04EDFBBC5, ___IpAddress_0)); }
	inline String_t* get_IpAddress_0() const { return ___IpAddress_0; }
	inline String_t** get_address_of_IpAddress_0() { return &___IpAddress_0; }
	inline void set_IpAddress_0(String_t* value)
	{
		___IpAddress_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IpAddress_0), (void*)value);
	}

	inline static int32_t get_offset_of_Mask_1() { return static_cast<int32_t>(offsetof(IpAddressInfo_t74B44737FA45169AB3180F437756B4F04EDFBBC5, ___Mask_1)); }
	inline String_t* get_Mask_1() const { return ___Mask_1; }
	inline String_t** get_address_of_Mask_1() { return &___Mask_1; }
	inline void set_Mask_1(String_t* value)
	{
		___Mask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mask_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo
struct  IpConfigInfo_tD0976F25291C176FD9C96B956E2FFBCEEC83AFE0  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.AdapterInfo[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo::Adapters
	AdapterInfoU5BU5D_tBAA5B3F967EA83537D6FFA1701A7C62194ED00A8* ___Adapters_0;

public:
	inline static int32_t get_offset_of_Adapters_0() { return static_cast<int32_t>(offsetof(IpConfigInfo_tD0976F25291C176FD9C96B956E2FFBCEEC83AFE0, ___Adapters_0)); }
	inline AdapterInfoU5BU5D_tBAA5B3F967EA83537D6FFA1701A7C62194ED00A8* get_Adapters_0() const { return ___Adapters_0; }
	inline AdapterInfoU5BU5D_tBAA5B3F967EA83537D6FFA1701A7C62194ED00A8** get_address_of_Adapters_0() { return &___Adapters_0; }
	inline void set_Adapters_0(AdapterInfoU5BU5D_tBAA5B3F967EA83537D6FFA1701A7C62194ED00A8* value)
	{
		___Adapters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Adapters_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName
struct  MachineName_tBA926D8E198BC7994CB9A60D12CCF8C6CCCC341B  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName::ComputerName
	String_t* ___ComputerName_0;

public:
	inline static int32_t get_offset_of_ComputerName_0() { return static_cast<int32_t>(offsetof(MachineName_tBA926D8E198BC7994CB9A60D12CCF8C6CCCC341B, ___ComputerName_0)); }
	inline String_t* get_ComputerName_0() const { return ___ComputerName_0; }
	inline String_t** get_address_of_ComputerName_0() { return &___ComputerName_0; }
	inline void set_ComputerName_0(String_t* value)
	{
		___ComputerName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComputerName_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces
struct  NetworkInterfaces_t35B34FBB0AD6B0F82322483FD889275CC4F2C22E  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces::Interfaces
	InterfaceInfoU5BU5D_t0F8227B11A66DDFC1995B7C2DB5D44C55C24FB8D* ___Interfaces_0;

public:
	inline static int32_t get_offset_of_Interfaces_0() { return static_cast<int32_t>(offsetof(NetworkInterfaces_t35B34FBB0AD6B0F82322483FD889275CC4F2C22E, ___Interfaces_0)); }
	inline InterfaceInfoU5BU5D_t0F8227B11A66DDFC1995B7C2DB5D44C55C24FB8D* get_Interfaces_0() const { return ___Interfaces_0; }
	inline InterfaceInfoU5BU5D_t0F8227B11A66DDFC1995B7C2DB5D44C55C24FB8D** get_address_of_Interfaces_0() { return &___Interfaces_0; }
	inline void set_Interfaces_0(InterfaceInfoU5BU5D_t0F8227B11A66DDFC1995B7C2DB5D44C55C24FB8D* value)
	{
		___Interfaces_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interfaces_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo
struct  NetworkProfileInfo_t4E4CF9305AE7AA174C30AD7477B5BFD2C0CC15B8  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo::GroupPolicyProfile
	bool ___GroupPolicyProfile_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo::Name
	String_t* ___Name_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo::PerUserProfile
	bool ___PerUserProfile_2;

public:
	inline static int32_t get_offset_of_GroupPolicyProfile_0() { return static_cast<int32_t>(offsetof(NetworkProfileInfo_t4E4CF9305AE7AA174C30AD7477B5BFD2C0CC15B8, ___GroupPolicyProfile_0)); }
	inline bool get_GroupPolicyProfile_0() const { return ___GroupPolicyProfile_0; }
	inline bool* get_address_of_GroupPolicyProfile_0() { return &___GroupPolicyProfile_0; }
	inline void set_GroupPolicyProfile_0(bool value)
	{
		___GroupPolicyProfile_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(NetworkProfileInfo_t4E4CF9305AE7AA174C30AD7477B5BFD2C0CC15B8, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_PerUserProfile_2() { return static_cast<int32_t>(offsetof(NetworkProfileInfo_t4E4CF9305AE7AA174C30AD7477B5BFD2C0CC15B8, ___PerUserProfile_2)); }
	inline bool get_PerUserProfile_2() const { return ___PerUserProfile_2; }
	inline bool* get_address_of_PerUserProfile_2() { return &___PerUserProfile_2; }
	inline void set_PerUserProfile_2(bool value)
	{
		___PerUserProfile_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo
struct  PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo::LowPowerState
	bool ___LowPowerState_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo::LowPowerStateAvailable
	bool ___LowPowerStateAvailable_1;

public:
	inline static int32_t get_offset_of_LowPowerState_0() { return static_cast<int32_t>(offsetof(PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB, ___LowPowerState_0)); }
	inline bool get_LowPowerState_0() const { return ___LowPowerState_0; }
	inline bool* get_address_of_LowPowerState_0() { return &___LowPowerState_0; }
	inline void set_LowPowerState_0(bool value)
	{
		___LowPowerState_0 = value;
	}

	inline static int32_t get_offset_of_LowPowerStateAvailable_1() { return static_cast<int32_t>(offsetof(PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB, ___LowPowerStateAvailable_1)); }
	inline bool get_LowPowerStateAvailable_1() const { return ___LowPowerStateAvailable_1; }
	inline bool* get_address_of_LowPowerStateAvailable_1() { return &___LowPowerStateAvailable_1; }
	inline void set_LowPowerStateAvailable_1(bool value)
	{
		___LowPowerStateAvailable_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo
struct  ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::CPUUsage
	float ___CPUUsage_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::ImageName
	String_t* ___ImageName_1;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::PageFileUsage
	float ___PageFileUsage_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::PrivateWorkingSet
	int32_t ___PrivateWorkingSet_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::ProcessId
	int32_t ___ProcessId_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::SessionId
	int32_t ___SessionId_5;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::UserName
	String_t* ___UserName_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::VirtualSize
	int32_t ___VirtualSize_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::WorkingSetSize
	int32_t ___WorkingSetSize_8;

public:
	inline static int32_t get_offset_of_CPUUsage_0() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___CPUUsage_0)); }
	inline float get_CPUUsage_0() const { return ___CPUUsage_0; }
	inline float* get_address_of_CPUUsage_0() { return &___CPUUsage_0; }
	inline void set_CPUUsage_0(float value)
	{
		___CPUUsage_0 = value;
	}

	inline static int32_t get_offset_of_ImageName_1() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___ImageName_1)); }
	inline String_t* get_ImageName_1() const { return ___ImageName_1; }
	inline String_t** get_address_of_ImageName_1() { return &___ImageName_1; }
	inline void set_ImageName_1(String_t* value)
	{
		___ImageName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageName_1), (void*)value);
	}

	inline static int32_t get_offset_of_PageFileUsage_2() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___PageFileUsage_2)); }
	inline float get_PageFileUsage_2() const { return ___PageFileUsage_2; }
	inline float* get_address_of_PageFileUsage_2() { return &___PageFileUsage_2; }
	inline void set_PageFileUsage_2(float value)
	{
		___PageFileUsage_2 = value;
	}

	inline static int32_t get_offset_of_PrivateWorkingSet_3() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___PrivateWorkingSet_3)); }
	inline int32_t get_PrivateWorkingSet_3() const { return ___PrivateWorkingSet_3; }
	inline int32_t* get_address_of_PrivateWorkingSet_3() { return &___PrivateWorkingSet_3; }
	inline void set_PrivateWorkingSet_3(int32_t value)
	{
		___PrivateWorkingSet_3 = value;
	}

	inline static int32_t get_offset_of_ProcessId_4() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___ProcessId_4)); }
	inline int32_t get_ProcessId_4() const { return ___ProcessId_4; }
	inline int32_t* get_address_of_ProcessId_4() { return &___ProcessId_4; }
	inline void set_ProcessId_4(int32_t value)
	{
		___ProcessId_4 = value;
	}

	inline static int32_t get_offset_of_SessionId_5() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___SessionId_5)); }
	inline int32_t get_SessionId_5() const { return ___SessionId_5; }
	inline int32_t* get_address_of_SessionId_5() { return &___SessionId_5; }
	inline void set_SessionId_5(int32_t value)
	{
		___SessionId_5 = value;
	}

	inline static int32_t get_offset_of_UserName_6() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___UserName_6)); }
	inline String_t* get_UserName_6() const { return ___UserName_6; }
	inline String_t** get_address_of_UserName_6() { return &___UserName_6; }
	inline void set_UserName_6(String_t* value)
	{
		___UserName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserName_6), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualSize_7() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___VirtualSize_7)); }
	inline int32_t get_VirtualSize_7() const { return ___VirtualSize_7; }
	inline int32_t* get_address_of_VirtualSize_7() { return &___VirtualSize_7; }
	inline void set_VirtualSize_7(int32_t value)
	{
		___VirtualSize_7 = value;
	}

	inline static int32_t get_offset_of_WorkingSetSize_8() { return static_cast<int32_t>(offsetof(ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7, ___WorkingSetSize_8)); }
	inline int32_t get_WorkingSetSize_8() const { return ___WorkingSetSize_8; }
	inline int32_t* get_address_of_WorkingSetSize_8() { return &___WorkingSetSize_8; }
	inline void set_WorkingSetSize_8(int32_t value)
	{
		___WorkingSetSize_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessList
struct  ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessList::Processes
	ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F* ___Processes_0;

public:
	inline static int32_t get_offset_of_Processes_0() { return static_cast<int32_t>(offsetof(ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355, ___Processes_0)); }
	inline ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F* get_Processes_0() const { return ___Processes_0; }
	inline ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F** get_address_of_Processes_0() { return &___Processes_0; }
	inline void set_Processes_0(ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F* value)
	{
		___Processes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Processes_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo
struct  WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::AlreadyConnected
	bool ___AlreadyConnected_0;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::AuthenticationAlgorithm
	String_t* ___AuthenticationAlgorithm_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::Channel
	int32_t ___Channel_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::CipherAlgorithm
	String_t* ___CipherAlgorithm_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::Connectable
	int32_t ___Connectable_4;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::InfrastructureType
	String_t* ___InfrastructureType_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::ProfileAvailable
	bool ___ProfileAvailable_6;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::ProfileName
	String_t* ___ProfileName_7;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::SSID
	String_t* ___SSID_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::SecurityEnabled
	int32_t ___SecurityEnabled_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::SignalQuality
	int32_t ___SignalQuality_10;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::BSSID
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___BSSID_11;
	// System.String[] Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::PhysicalTypes
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___PhysicalTypes_12;

public:
	inline static int32_t get_offset_of_AlreadyConnected_0() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___AlreadyConnected_0)); }
	inline bool get_AlreadyConnected_0() const { return ___AlreadyConnected_0; }
	inline bool* get_address_of_AlreadyConnected_0() { return &___AlreadyConnected_0; }
	inline void set_AlreadyConnected_0(bool value)
	{
		___AlreadyConnected_0 = value;
	}

	inline static int32_t get_offset_of_AuthenticationAlgorithm_1() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___AuthenticationAlgorithm_1)); }
	inline String_t* get_AuthenticationAlgorithm_1() const { return ___AuthenticationAlgorithm_1; }
	inline String_t** get_address_of_AuthenticationAlgorithm_1() { return &___AuthenticationAlgorithm_1; }
	inline void set_AuthenticationAlgorithm_1(String_t* value)
	{
		___AuthenticationAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthenticationAlgorithm_1), (void*)value);
	}

	inline static int32_t get_offset_of_Channel_2() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___Channel_2)); }
	inline int32_t get_Channel_2() const { return ___Channel_2; }
	inline int32_t* get_address_of_Channel_2() { return &___Channel_2; }
	inline void set_Channel_2(int32_t value)
	{
		___Channel_2 = value;
	}

	inline static int32_t get_offset_of_CipherAlgorithm_3() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___CipherAlgorithm_3)); }
	inline String_t* get_CipherAlgorithm_3() const { return ___CipherAlgorithm_3; }
	inline String_t** get_address_of_CipherAlgorithm_3() { return &___CipherAlgorithm_3; }
	inline void set_CipherAlgorithm_3(String_t* value)
	{
		___CipherAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CipherAlgorithm_3), (void*)value);
	}

	inline static int32_t get_offset_of_Connectable_4() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___Connectable_4)); }
	inline int32_t get_Connectable_4() const { return ___Connectable_4; }
	inline int32_t* get_address_of_Connectable_4() { return &___Connectable_4; }
	inline void set_Connectable_4(int32_t value)
	{
		___Connectable_4 = value;
	}

	inline static int32_t get_offset_of_InfrastructureType_5() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___InfrastructureType_5)); }
	inline String_t* get_InfrastructureType_5() const { return ___InfrastructureType_5; }
	inline String_t** get_address_of_InfrastructureType_5() { return &___InfrastructureType_5; }
	inline void set_InfrastructureType_5(String_t* value)
	{
		___InfrastructureType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InfrastructureType_5), (void*)value);
	}

	inline static int32_t get_offset_of_ProfileAvailable_6() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___ProfileAvailable_6)); }
	inline bool get_ProfileAvailable_6() const { return ___ProfileAvailable_6; }
	inline bool* get_address_of_ProfileAvailable_6() { return &___ProfileAvailable_6; }
	inline void set_ProfileAvailable_6(bool value)
	{
		___ProfileAvailable_6 = value;
	}

	inline static int32_t get_offset_of_ProfileName_7() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___ProfileName_7)); }
	inline String_t* get_ProfileName_7() const { return ___ProfileName_7; }
	inline String_t** get_address_of_ProfileName_7() { return &___ProfileName_7; }
	inline void set_ProfileName_7(String_t* value)
	{
		___ProfileName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProfileName_7), (void*)value);
	}

	inline static int32_t get_offset_of_SSID_8() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___SSID_8)); }
	inline String_t* get_SSID_8() const { return ___SSID_8; }
	inline String_t** get_address_of_SSID_8() { return &___SSID_8; }
	inline void set_SSID_8(String_t* value)
	{
		___SSID_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SSID_8), (void*)value);
	}

	inline static int32_t get_offset_of_SecurityEnabled_9() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___SecurityEnabled_9)); }
	inline int32_t get_SecurityEnabled_9() const { return ___SecurityEnabled_9; }
	inline int32_t* get_address_of_SecurityEnabled_9() { return &___SecurityEnabled_9; }
	inline void set_SecurityEnabled_9(int32_t value)
	{
		___SecurityEnabled_9 = value;
	}

	inline static int32_t get_offset_of_SignalQuality_10() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___SignalQuality_10)); }
	inline int32_t get_SignalQuality_10() const { return ___SignalQuality_10; }
	inline int32_t* get_address_of_SignalQuality_10() { return &___SignalQuality_10; }
	inline void set_SignalQuality_10(int32_t value)
	{
		___SignalQuality_10 = value;
	}

	inline static int32_t get_offset_of_BSSID_11() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___BSSID_11)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_BSSID_11() const { return ___BSSID_11; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_BSSID_11() { return &___BSSID_11; }
	inline void set_BSSID_11(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___BSSID_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BSSID_11), (void*)value);
	}

	inline static int32_t get_offset_of_PhysicalTypes_12() { return static_cast<int32_t>(offsetof(WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C, ___PhysicalTypes_12)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_PhysicalTypes_12() const { return ___PhysicalTypes_12; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_PhysicalTypes_12() { return &___PhysicalTypes_12; }
	inline void set_PhysicalTypes_12(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___PhysicalTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhysicalTypes_12), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo>
struct  List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258, ____items_1)); }
	inline DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173* get__items_1() const { return ____items_1; }
	inline DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258_StaticFields, ____emptyArray_5)); }
	inline DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DeviceInfoU5BU5D_t88FEE7DA424FCFC286110F53A7F38F05C06B4173* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// UnityEngine.WWWForm
struct  WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___formData_0)); }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * get_formData_0() const { return ___formData_0; }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___fieldNames_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___fileNames_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___types_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_types_3() const { return ___types_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___boundary_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.Response
struct  Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::responseBody
	String_t* ___responseBody_1;
	// System.Func`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyAction
	Func_1_tA732247549D3531F543287C316CF7F7F02F061F7 * ___responseBodyAction_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::responseData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___responseData_3;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Response::responseDataAction
	Func_1_tF446E07B3865854020BC1156A3DF8C64A33A791C * ___responseDataAction_4;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_responseBody_1() { return static_cast<int32_t>(offsetof(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584, ___responseBody_1)); }
	inline String_t* get_responseBody_1() const { return ___responseBody_1; }
	inline String_t** get_address_of_responseBody_1() { return &___responseBody_1; }
	inline void set_responseBody_1(String_t* value)
	{
		___responseBody_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBody_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyAction_2() { return static_cast<int32_t>(offsetof(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584, ___responseBodyAction_2)); }
	inline Func_1_tA732247549D3531F543287C316CF7F7F02F061F7 * get_responseBodyAction_2() const { return ___responseBodyAction_2; }
	inline Func_1_tA732247549D3531F543287C316CF7F7F02F061F7 ** get_address_of_responseBodyAction_2() { return &___responseBodyAction_2; }
	inline void set_responseBodyAction_2(Func_1_tA732247549D3531F543287C316CF7F7F02F061F7 * value)
	{
		___responseBodyAction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyAction_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_3() { return static_cast<int32_t>(offsetof(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584, ___responseData_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_responseData_3() const { return ___responseData_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_responseData_3() { return &___responseData_3; }
	inline void set_responseData_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___responseData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseDataAction_4() { return static_cast<int32_t>(offsetof(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584, ___responseDataAction_4)); }
	inline Func_1_tF446E07B3865854020BC1156A3DF8C64A33A791C * get_responseDataAction_4() const { return ___responseDataAction_4; }
	inline Func_1_tF446E07B3865854020BC1156A3DF8C64A33A791C ** get_address_of_responseDataAction_4() { return &___responseDataAction_4; }
	inline void set_responseDataAction_4(Func_1_tF446E07B3865854020BC1156A3DF8C64A33A791C * value)
	{
		___responseDataAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseDataAction_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584, ___U3CResponseCodeU3Ek__BackingField_5)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_5() const { return ___U3CResponseCodeU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_5() { return &___U3CResponseCodeU3Ek__BackingField_5; }
	inline void set_U3CResponseCodeU3Ek__BackingField_5(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
struct  FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::CurrentDir
	String_t* ___CurrentDir_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::DateCreated
	int32_t ___DateCreated_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::FileSize
	int32_t ___FileSize_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::Id
	String_t* ___Id_3;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::Name
	String_t* ___Name_4;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::SubPath
	String_t* ___SubPath_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo::Type
	int32_t ___Type_6;

public:
	inline static int32_t get_offset_of_CurrentDir_0() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___CurrentDir_0)); }
	inline String_t* get_CurrentDir_0() const { return ___CurrentDir_0; }
	inline String_t** get_address_of_CurrentDir_0() { return &___CurrentDir_0; }
	inline void set_CurrentDir_0(String_t* value)
	{
		___CurrentDir_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentDir_0), (void*)value);
	}

	inline static int32_t get_offset_of_DateCreated_1() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___DateCreated_1)); }
	inline int32_t get_DateCreated_1() const { return ___DateCreated_1; }
	inline int32_t* get_address_of_DateCreated_1() { return &___DateCreated_1; }
	inline void set_DateCreated_1(int32_t value)
	{
		___DateCreated_1 = value;
	}

	inline static int32_t get_offset_of_FileSize_2() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___FileSize_2)); }
	inline int32_t get_FileSize_2() const { return ___FileSize_2; }
	inline int32_t* get_address_of_FileSize_2() { return &___FileSize_2; }
	inline void set_FileSize_2(int32_t value)
	{
		___FileSize_2 = value;
	}

	inline static int32_t get_offset_of_Id_3() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___Id_3)); }
	inline String_t* get_Id_3() const { return ___Id_3; }
	inline String_t** get_address_of_Id_3() { return &___Id_3; }
	inline void set_Id_3(String_t* value)
	{
		___Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_SubPath_5() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___SubPath_5)); }
	inline String_t* get_SubPath_5() const { return ___SubPath_5; }
	inline String_t** get_address_of_SubPath_5() { return &___SubPath_5; }
	inline void set_SubPath_5(String_t* value)
	{
		___SubPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubPath_5), (void*)value);
	}

	inline static int32_t get_offset_of_Type_6() { return static_cast<int32_t>(offsetof(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4, ___Type_6)); }
	inline int32_t get_Type_6() const { return ___Type_6; }
	inline int32_t* get_address_of_Type_6() { return &___Type_6; }
	inline void set_Type_6(int32_t value)
	{
		___Type_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
struct FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_pinvoke
{
	char* ___CurrentDir_0;
	int32_t ___DateCreated_1;
	int32_t ___FileSize_2;
	char* ___Id_3;
	char* ___Name_4;
	char* ___SubPath_5;
	int32_t ___Type_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
struct FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_com
{
	Il2CppChar* ___CurrentDir_0;
	int32_t ___DateCreated_1;
	int32_t ___FileSize_2;
	Il2CppChar* ___Id_3;
	Il2CppChar* ___Name_4;
	Il2CppChar* ___SubPath_5;
	int32_t ___Type_6;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct  IsReadOnlyAttribute_tF557E5B102336CF23E33FF09270CB81EAB2E1029  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct  TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3, ___m_task_0)); }
	inline Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct  TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD, ___m_task_0)); }
	inline Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_AppInstallStatus>
struct  TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21, ___m_task_0)); }
	inline Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct  TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090, ___m_task_0)); }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>
struct  TaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF2A8133ECD11ED4D21C36287E2B75EDCDB0B9E22 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4, ___m_task_0)); }
	inline Task_1_tF2A8133ECD11ED4D21C36287E2B75EDCDB0B9E22 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF2A8133ECD11ED4D21C36287E2B75EDCDB0B9E22 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF2A8133ECD11ED4D21C36287E2B75EDCDB0B9E22 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_AppInstallStatus
struct  AppInstallStatus_t3E445835F40C3C5A8C0644497A1DD763270DA224 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_AppInstallStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppInstallStatus_t3E445835F40C3C5A8C0644497A1DD763270DA224, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileShare
struct  FileShare_t9AA8473BBE5DD8532CEAF3F48F26DA5A25A93684 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileShare_t9AA8473BBE5DD8532CEAF3F48F26DA5A25A93684, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct  AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE, ___m_task_2)); }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27
struct  U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::appFullPath
	String_t* ___appFullPath_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::waitForDone
	bool ___waitForDone_4;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::<fileName>5__2
	String_t* ___U3CfileNameU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::<>u__1
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_AppInstallStatus> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::<>u__3
	TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  ___U3CU3Eu__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___targetDevice_2)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_2), (void*)value);
	}

	inline static int32_t get_offset_of_appFullPath_3() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___appFullPath_3)); }
	inline String_t* get_appFullPath_3() const { return ___appFullPath_3; }
	inline String_t** get_address_of_appFullPath_3() { return &___appFullPath_3; }
	inline void set_appFullPath_3(String_t* value)
	{
		___appFullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appFullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_waitForDone_4() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___waitForDone_4)); }
	inline bool get_waitForDone_4() const { return ___waitForDone_4; }
	inline bool* get_address_of_waitForDone_4() { return &___waitForDone_4; }
	inline void set_waitForDone_4(bool value)
	{
		___waitForDone_4 = value;
	}

	inline static int32_t get_offset_of_U3CfileNameU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___U3CfileNameU3E5__2_5)); }
	inline String_t* get_U3CfileNameU3E5__2_5() const { return ___U3CfileNameU3E5__2_5; }
	inline String_t** get_address_of_U3CfileNameU3E5__2_5() { return &___U3CfileNameU3E5__2_5; }
	inline void set_U3CfileNameU3E5__2_5(String_t* value)
	{
		___U3CfileNameU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfileNameU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  value)
	{
		___U3CU3Eu__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__3_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23
struct  U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::packageName
	String_t* ___packageName_2;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::<>u__1
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_packageName_2() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491, ___packageName_2)); }
	inline String_t* get_packageName_2() const { return ___packageName_2; }
	inline String_t** get_address_of_packageName_2() { return &___packageName_2; }
	inline void set_packageName_2(String_t* value)
	{
		___packageName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageName_2), (void*)value);
	}

	inline static int32_t get_offset_of_targetDevice_3() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491, ___targetDevice_3)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_3() const { return ___targetDevice_3; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_3() { return &___targetDevice_3; }
	inline void set_targetDevice_3(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24
struct  U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::appInfo
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::<response>5__2
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::<>u__1
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::<>u__3
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___appInfo_2)); }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageName_3), (void*)value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___targetDevice_4)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___U3CresponseU3E5__2_5)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___U3CresponseU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__3_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30
struct  U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::appInfo
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<response>5__2
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<>u__1
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<>u__3
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__3_8;
	// System.Object Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::<>u__4
	RuntimeObject * ___U3CU3Eu__4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___appInfo_2)); }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageName_3), (void*)value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___targetDevice_4)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CresponseU3E5__2_5)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___U3CresponseU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__3_8))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__4_9() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538, ___U3CU3Eu__4_9)); }
	inline RuntimeObject * get_U3CU3Eu__4_9() const { return ___U3CU3Eu__4_9; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__4_9() { return &___U3CU3Eu__4_9; }
	inline void set_U3CU3Eu__4_9(RuntimeObject * value)
	{
		___U3CU3Eu__4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__4_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38
struct  U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38::<>u__1
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388, ___targetDevice_2)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21
struct  U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<response>5__2
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<>u__1
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<hasRestarted>5__3
	bool ___U3ChasRestartedU3E5__3_6;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::<query>5__4
	String_t* ___U3CqueryU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___targetDevice_2)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3CresponseU3E5__2_3)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___U3CresponseU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3ChasRestartedU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3ChasRestartedU3E5__3_6)); }
	inline bool get_U3ChasRestartedU3E5__3_6() const { return ___U3ChasRestartedU3E5__3_6; }
	inline bool* get_address_of_U3ChasRestartedU3E5__3_6() { return &___U3ChasRestartedU3E5__3_6; }
	inline void set_U3ChasRestartedU3E5__3_6(bool value)
	{
		___U3ChasRestartedU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CqueryU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821, ___U3CqueryU3E5__4_7)); }
	inline String_t* get_U3CqueryU3E5__4_7() const { return ___U3CqueryU3E5__4_7; }
	inline String_t** get_address_of_U3CqueryU3E5__4_7() { return &___U3CqueryU3E5__4_7; }
	inline void set_U3CqueryU3E5__4_7(String_t* value)
	{
		___U3CqueryU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CqueryU3E5__4_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22
struct  U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::<response>5__2
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::<>u__1
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E, ___targetDevice_2)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E, ___U3CresponseU3E5__2_3)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___U3CresponseU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_3))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31
struct  U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::appInfo
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<response>5__2
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<>u__1
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<>u__3
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__3_8;
	// System.Object Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::<>u__4
	RuntimeObject * ___U3CU3Eu__4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___appInfo_2)); }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageName_3), (void*)value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___targetDevice_4)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CresponseU3E5__2_5)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___U3CresponseU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__3_8))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__4_9() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904, ___U3CU3Eu__4_9)); }
	inline RuntimeObject * get_U3CU3Eu__4_9() const { return ___U3CU3Eu__4_9; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__4_9() { return &___U3CU3Eu__4_9; }
	inline void set_U3CU3Eu__4_9(RuntimeObject * value)
	{
		___U3CU3Eu__4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__4_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29
struct  U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::<>t__builder
	AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::appInfo
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::targetDevice
	DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Response Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::<response>5__2
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::<>u__1
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::<>u__2
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::<>u__3
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  ___U3CU3Eu__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___appInfo_2)); }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageName_3), (void*)value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___targetDevice_4)); }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetDevice_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___U3CresponseU3E5__2_5)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___U3CresponseU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CresponseU3E5__2_5))->___responseDataAction_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  value)
	{
		___U3CU3Eu__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__3_8))->___m_task_0), (void*)NULL);
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct  Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326, ___m_result_22)); }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  get_m_result_22() const { return ___m_result_22; }
	inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___responseDataAction_4), (void*)NULL);
		#endif
	}
};

struct Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t0F49079A32ABD6579DA36CD36FA122C108876E9B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t08670465AB961B8C591232D75840AC3B3A36A1C1 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t0F49079A32ABD6579DA36CD36FA122C108876E9B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t0F49079A32ABD6579DA36CD36FA122C108876E9B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t0F49079A32ABD6579DA36CD36FA122C108876E9B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t08670465AB961B8C591232D75840AC3B3A36A1C1 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t08670465AB961B8C591232D75840AC3B3A36A1C1 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t08670465AB961B8C591232D75840AC3B3A36A1C1 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct  Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2, ___m_result_22)); }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * get_m_result_22() const { return ___m_result_22; }
	inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4B7BE600FA2F684644E6964B9E1B9712F6F47553 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA451B1DE16BC0E69A6ED70C179607440306F114E * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4B7BE600FA2F684644E6964B9E1B9712F6F47553 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4B7BE600FA2F684644E6964B9E1B9712F6F47553 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4B7BE600FA2F684644E6964B9E1B9712F6F47553 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tA451B1DE16BC0E69A6ED70C179607440306F114E * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tA451B1DE16BC0E69A6ED70C179607440306F114E ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tA451B1DE16BC0E69A6ED70C179607440306F114E * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_AppInstallStatus>
struct  Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2781B71D149FDF969E039F51DBBF6FC271CA22AE * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5D7D0F648EFE771CF0EBA4CFD246EFD7480A23CE * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t2781B71D149FDF969E039F51DBBF6FC271CA22AE * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t2781B71D149FDF969E039F51DBBF6FC271CA22AE ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t2781B71D149FDF969E039F51DBBF6FC271CA22AE * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t5D7D0F648EFE771CF0EBA4CFD246EFD7480A23CE * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t5D7D0F648EFE771CF0EBA4CFD246EFD7480A23CE ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t5D7D0F648EFE771CF0EBA4CFD246EFD7480A23CE * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileInfo
struct  FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.FileInfo::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * m_Items[1];

public:
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo[]
struct ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * m_Items[1];

public:
	inline ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_gshared (Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_gshared (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_gshared (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_gshared (Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_gshared (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mD6147102B505162D41207067B1F14F9A721F7ACD_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_gshared (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32Enum>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4  Task_1_GetAwaiter_m5467A8D470955355DA7A22E6B7264602DD1FC610_gshared (Task_1_tF2A8133ECD11ED4D21C36287E2B75EDCDB0B9E22 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m3BA72D698AFD4D287367B3BDE2EEBBA0D2C05C5E_gshared (TaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m314A306D66E0A020BC6E49C3825FC670160F7C73_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4 * ___awaiter0, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mBB40A2EF7EC876930E6670FB413294A1A2FA96CA_gshared (TaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98  Task_1_GetAwaiter_m40CD4C3C72D95F5D675375EB656B4E7A873F4B35_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m4D35B5EE53D627263E8D9BB9C152B030CC9C58C5_gshared (TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491_m0098A00350D123F0A0A3A2BED1D617299328C2F7_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * ___awaiter0, U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_mC8490473DAF559B4C66291A49769D25924786D88_gshared (TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m7CDEB95883CDA3DFFE2DEE93B01CA332C0CCE8E7_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * ___awaiter0, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m1661AF2AF2A69DCD619842AE7F5650193E583A61_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * ___stateMachine1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m7E013FBEA31B25E9B682B92351A67D2DF64410A0_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mB2FF372808AE46FE78AEA8ACA5D2C46D59199130_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mD8ECEA2AAF34D0CE040685051DA57447A3F7232D_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, RuntimeObject ** ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__38>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388_m1220D9489F08113580C55E9FF831F4AF6AA01F0F_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RestartAsync>d__21>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RestartAsync>d__21>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m9B85FAF464FC1772DEC5E57AD1732A4F156F1193_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m8097FABC0D5F8CF4A83AAD9A16E27C4094AE9C6C_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m34495C46B609169EC7FEBB1DCD8F19668FEDFFBD_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m90196D686641EC08116F6A663A66EAE54564C34E_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, RuntimeObject ** ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m673EA6C630127DE7CF4520C6856D1F2F24F64AF4_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98 * ___awaiter0, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_mD87BD1DB9C9D8B391277791ACFC42EE46B6045C5_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738_gshared (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::EnsureAuthenticationAsync(Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_EnsureAuthenticationAsync_mC8A2DB2C662C95DE597218AE3E1BAF4A594825AB (DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E (Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  (*) (Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 *, const RuntimeMethod*))Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8 (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.Path::ChangeExtension(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_ChangeExtension_m03CF4C94D0A42F0FE0ECA71A3FF03741A4F5FB48 (String_t* ___path0, String_t* ___extension1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m61922AA6D7B48EACBA36FF41A1B28F506CFB8A97 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695 (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mB254658F1E758D76B41C942CB91BDF38FD544C83 (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_mDC01404EEF71794A04210CA2696C11CB81FCF30F (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, String_t* ___fieldName0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___contents1, String_t* ___fileName2, const RuntimeMethod* method);
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m00923CD8472B1FB220FAEE9D09CCCF9A96A021C6 (DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * __this, String_t* ___path0, const RuntimeMethod* method);
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* DirectoryInfo_GetFiles_m3E2F7B3AA18FE603D7746175A572298AD649DBF6 (DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::FinalizeUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E (String_t* ___targetUrl0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m95ACCD28C59C1A12E4CAF186002A31C84A7CA13F (String_t* ___s0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo::get_Authorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967 (DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::PostAsync(System.String,UnityEngine.WWWForm,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * Rest_PostAsync_mC69DA37FF7A7C5B8AB3E82452CBF354320A0A724 (String_t* ___query0, WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * ___formData1, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___headers2, int32_t ___timeout3, bool ___readResponseData4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
inline TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6 (Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  (*) (Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 *, const RuntimeMethod*))Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mD6147102B505162D41207067B1F14F9A721F7ACD (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mD6147102B505162D41207067B1F14F9A721F7ACD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
inline Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * __this, const RuntimeMethod* method)
{
	return ((  Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  (*) (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::get_Successful()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline (Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * __this, const RuntimeMethod* method);
// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::get_ResponseCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline (Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::RefreshCsrfTokenAsync(Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96 (DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::InstallAppAsync(System.String,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_InstallAppAsync_mE1D8146CE25ACEF7ED6C096A7C2E6BF55DCB4724 (String_t* ___appFullPath0, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice1, bool ___waitForDone2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::GetInstallStatusAsync(Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 * DevicePortal_GetInstallStatusAsync_mB7B36B56F20EC4701CDA8F48156EE57F651B1646 (DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>::GetAwaiter()
inline TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  Task_1_GetAwaiter_mF7A5F84763CEDF89660D604397B6994A1C7B3224 (Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  (*) (Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 *, const RuntimeMethod*))Task_1_GetAwaiter_m5467A8D470955355DA7A22E6B7264602DD1FC610_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mBD3E3A58FA5E551BD55ED66E15DD6C8E7A243B80 (TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3BA72D698AFD4D287367B3BDE2EEBBA0D2C05C5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mF97E953E2D97A04123E94334741949AFEC69BBF1 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 * ___awaiter0, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 *, U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2F9635C50EA71086D07A442F29B1D9051103E3D4_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m314A306D66E0A020BC6E49C3825FC670160F7C73_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m5FE7DFB976404B750B6D94FB305B4766AAEA8A07 (TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mBB40A2EF7EC876930E6670FB413294A1A2FA96CA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__27_MoveNext_m5EFDBE91E3567E3182CB00A479F14C55C6DCD89B (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__27_SetStateMachine_m4A3A4F7A149F1B19857F3257BB9149B8EC39C839 (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::GetApplicationInfoAsync(System.String,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * DevicePortal_GetApplicationInfoAsync_m6277752E297BC7E4699683D69A4081AD64840AF3 (String_t* ___packageName0, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>::GetAwaiter()
inline TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301 (Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  (*) (Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 *, const RuntimeMethod*))Task_1_GetAwaiter_m40CD4C3C72D95F5D675375EB656B4E7A873F4B35_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997 (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m4D35B5EE53D627263E8D9BB9C152B030CC9C58C5_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__23>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491_m00131F69C8009529B2AFCBC7A4E67FB7EE93A00F (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * ___awaiter0, U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491_m0098A00350D123F0A0A3A2BED1D617299328C2F7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>::GetResult()
inline ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * __this, const RuntimeMethod* method)
{
	return ((  ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * (*) (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mC8490473DAF559B4C66291A49769D25924786D88_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__23_MoveNext_m0C3AAA2DD8E150F3613FF87B7C99DCD323BC962B (U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__23_SetStateMachine_m0099D62AB1DD28C0A9D5E111A1E6F918CF845AEF (U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_mCC6E211BD3811DB78FD15D545E1CF91A7EAD4422 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * ___awaiter0, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m7CDEB95883CDA3DFFE2DEE93B01CA332C0CCE8E7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::GetAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,UnityEngine.Networking.DownloadHandler,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * Rest_GetAsync_m83C2DC547045A1566E20C2D3D604EF59C581AF0E (String_t* ___query0, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___headers1, int32_t ___timeout2, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___downloadHandler3, bool ___readResponseData4, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m1661AF2AF2A69DCD619842AE7F5650193E583A61 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m1661AF2AF2A69DCD619842AE7F5650193E583A61_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::get_ResponseBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC (Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessList>(System.String)
inline ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * JsonUtility_FromJson_TisProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355_m727E47ED23BE0A6562B7FF579461D92E543FEA2F (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared)(___json0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::IsAppRunningAsync(System.String,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_IsAppRunningAsync_m5A0AD795C76FFE57FB2DE6CC7B1D2D21CC46D2AF (String_t* ___packageName0, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice1, ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__24_MoveNext_m359F5BA2A24D124CEC02BB0EE54FCD8A04D851A5 (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__24_SetStateMachine_m1CD67D4BC9A22735BC48BFD8A1784664CD2B7FBC (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m01D1E960F382DB51E59B4F471DBF25CEBF6898F9 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m7E013FBEA31B25E9B682B92351A67D2DF64410A0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.StringExtensions::EncodeTo64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_EncodeTo64_mFCDB92AE19AD46918157CC260F2FF9C08994A049 (String_t* ___toEncode0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::PostAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * Rest_PostAsync_m6A0703027F0075B7F126D1DE9EFFB97E260BE688 (String_t* ___query0, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___headers1, int32_t ___timeout2, bool ___readResponseData3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mB2FF372808AE46FE78AEA8ACA5D2C46D59199130 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mB2FF372808AE46FE78AEA8ACA5D2C46D59199130_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::LaunchAppAsync(System.String,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_LaunchAppAsync_m76A9707B8E37DCACB509624014305FE1826B23A1 (String_t* ___packageName0, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice1, ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForSeconds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * AwaiterExtensions_GetAwaiter_mA151CB86362B91B55D90DB5FA30EAB9A50BC2373 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m219ED5CB30C4CC801ED9E04339285E92AE3B22EF_inline (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m244C56488FDDA65AAE037960D70142D1E0EDDA82 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 ** ___awaiter0, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **, U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mD8ECEA2AAF34D0CE040685051DA57447A3F7232D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mA592B7EA41A7A59FB3490600A4A28B13FB9D589A (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__30_MoveNext_mCDFCCED61A7796DF51AC7C56244E4C8967680CCB (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__30_SetStateMachine_mA1AC6C1BD7937889139EA29358ED18B4C77129B0 (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(!0)
inline bool Dictionary_2_Remove_m76DF6B3AEF4E06E5E50A04EA37CDB088B141957A (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__38>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388_m1220D9489F08113580C55E9FF831F4AF6AA01F0F (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388_m1220D9489F08113580C55E9FF831F4AF6AA01F0F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__38_MoveNext_m1AF7EEA004A3A88933403D13AED6F384742C0FC6 (U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__38_SetStateMachine_m2B3638321C003CD4EA39DD0B064C305FC2462BB4 (U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RestartAsync>d__21>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RestartAsync>d__21>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::RestartAsync(Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_RestartAsync_mCEF30D5EC5744A488FA569833F50833A93BF5E23 (DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RestartAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__21_MoveNext_mF95157499EFD63797DFE67187AF80F707AB8BE80 (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<RestartAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__21_SetStateMachine_mD422623D94954E3966491A6B2D5D3242407479C4 (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__22>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__22>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m9B85FAF464FC1772DEC5E57AD1732A4F156F1193 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m9B85FAF464FC1772DEC5E57AD1732A4F156F1193_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::ShutdownAsync(Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_ShutdownAsync_m315EB4FD85037BD98077712778BB558C97B2F341 (DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__22_MoveNext_m70770B3953BB8F589BCB71260938DD464D43772B (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__22_SetStateMachine_mD87F88BF2E1B904FC5E67EF3E0B4FE2E8DED2C2A (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m25DA5B322DB4842292AACF48787B861F22674739 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m8097FABC0D5F8CF4A83AAD9A16E27C4094AE9C6C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::DeleteAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * Rest_DeleteAsync_mAF3F4760488F7C5B3BA069C8C31917478E23D4E5 (String_t* ___query0, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___headers1, int32_t ___timeout2, bool ___readResponseData3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m34495C46B609169EC7FEBB1DCD8F19668FEDFFBD (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m34495C46B609169EC7FEBB1DCD8F19668FEDFFBD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::StopAppAsync(System.String,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_StopAppAsync_m88160488B050597B922D406B2282362F938D0542 (String_t* ___packageName0, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice1, ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_mD3EC76334F8BAF4E756590524CE73EEECE387C27 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 ** ___awaiter0, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **, U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m90196D686641EC08116F6A663A66EAE54564C34E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__31_MoveNext_mCD048BF4FD63D2272347D6C87435BDDA56260832 (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__31_SetStateMachine_mA1B39769BBBDBFD5C6F18E8E00CADE18B7999161 (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m74D80FFC20BF889C7D01F98FE70CA4A80AA089BD (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * ___awaiter0, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD3A72D03B0F75A522942812BA4AACA9A1C448B98_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m673EA6C630127DE7CF4520C6856D1F2F24F64AF4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_mD87BD1DB9C9D8B391277791ACFC42EE46B6045C5 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * ___awaiter0, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_mD87BD1DB9C9D8B391277791ACFC42EE46B6045C5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738 (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * __this, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * ___awaiter0, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *, TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *, U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal::UninstallAppAsync(System.String,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo,Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * DevicePortal_UninstallAppAsync_mED2CB89DC895F96BEBBE4D3267E1BF70B99C2DB1 (String_t* ___packageName0, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___targetDevice1, ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * ___appInfo2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__29_MoveNext_m1ED5CF1349FD12D2DDDA19FCE92B9719107FC6E2 (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__29_SetStateMachine_m7A9913B11A67F6443E783539547DD39265712072 (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo>::.ctor(System.Int32)
inline void List_1__ctor_m9F1D6F4CD867D8E61EFC52F83376327F862C9FAF (List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo>::Add(!0)
inline void List_1_Add_m75DAE88C71233B38F4AB2144C29EFE60D819995C (List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * __this, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 *, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__27_MoveNext_m5EFDBE91E3567E3182CB00A479F14C55C6DCD89B (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInstallAppAsyncU3Ed__27_MoveNext_m5EFDBE91E3567E3182CB00A479F14C55C6DCD89B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * V_6 = NULL;
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_9;
	memset((&V_9), 0, sizeof(V_9));
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_10 = NULL;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_11 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_12 = NULL;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_13 = NULL;
	FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* V_14 = NULL;
	int32_t V_15 = 0;
	FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * V_16 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_17 = NULL;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_18 = NULL;
	String_t* V_19 = NULL;
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Exception_t * V_23 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 20);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0060;
				}
				case 1:
				{
					goto IL_0306;
				}
				case 2:
				{
					goto IL_038c;
				}
				case 3:
				{
					goto IL_0401;
				}
				case 4:
				{
					goto IL_04b8;
				}
			}
		}

IL_0021:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_2 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_3 = DevicePortal_EnsureAuthenticationAsync_mC8A2DB2C662C95DE597218AE3E1BAF4A594825AB(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_4 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_3, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_9 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_007d;
			}
		}

IL_003c:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_7 = V_9;
			__this->set_U3CU3Eu__1_6(L_7);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_8, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159_RuntimeMethod_var);
			goto IL_05b4;
		}

IL_0060:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_9 = __this->get_U3CU3Eu__1_6();
			V_9 = L_9;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_10 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_007d:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			// if (!isAuth)
			if (L_12)
			{
				goto IL_008d;
			}
		}

IL_0086:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_05a0;
		}

IL_008d:
		{
			// Debug.Log($"Starting app install on {targetDevice.ToString()}...");
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
			String_t* L_15 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralDB1BB95574BEF056665514562CFE16FFEBF12290, L_14, _stringLiteral6EAE3A5B062C6D0D79F070C26E6D62486B40CB46, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
			// string fileName = Path.GetFileName(appFullPath);
			String_t* L_16 = __this->get_appFullPath_3();
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_17 = Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E(L_16, /*hidden argument*/NULL);
			__this->set_U3CfileNameU3E5__2_5(L_17);
			// string certFullPath = Path.ChangeExtension(appFullPath, ".cer");
			String_t* L_18 = __this->get_appFullPath_3();
			String_t* L_19 = Path_ChangeExtension_m03CF4C94D0A42F0FE0ECA71A3FF03741A4F5FB48(L_18, _stringLiteralF4C81EF410616CA8103A6D5A609E5F846445877A, /*hidden argument*/NULL);
			V_2 = L_19;
			// string certName = Path.GetFileName(certFullPath);
			String_t* L_20 = V_2;
			String_t* L_21 = Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E(L_20, /*hidden argument*/NULL);
			V_3 = L_21;
			// string arch = "ARM";
			V_4 = _stringLiteral29D8DEC43E88B47582179DE53EF2720D981E8AB1;
			// if (appFullPath.Contains("x86"))
			String_t* L_22 = __this->get_appFullPath_3();
			NullCheck(L_22);
			bool L_23 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_22, _stringLiteral500D1AD82B2A9E532E251E94D31DE3F8A5CF4174, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00f7;
			}
		}

IL_00ee:
		{
			// arch = "x86";
			V_4 = _stringLiteral500D1AD82B2A9E532E251E94D31DE3F8A5CF4174;
			// }
			goto IL_0110;
		}

IL_00f7:
		{
			// else if (appFullPath.Contains("ARM64"))
			String_t* L_24 = __this->get_appFullPath_3();
			NullCheck(L_24);
			bool L_25 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_24, _stringLiteralBB16CE026BF1A07A5455F7B9DDAF3FA1E5DC5686, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_0110;
			}
		}

IL_0109:
		{
			// arch = "ARM64";
			V_4 = _stringLiteralBB16CE026BF1A07A5455F7B9DDAF3FA1E5DC5686;
		}

IL_0110:
		{
			// string depPath = $@"{Path.GetDirectoryName(appFullPath)}\Dependencies\{arch}\";
			String_t* L_26 = __this->get_appFullPath_3();
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_27 = Path_GetDirectoryName_m61922AA6D7B48EACBA36FF41A1B28F506CFB8A97(L_26, /*hidden argument*/NULL);
			String_t* L_28 = V_4;
			String_t* L_29 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_27, _stringLiteral98C29E29F03C7A715766BC72021170D9D0C72809, L_28, _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3, /*hidden argument*/NULL);
			V_5 = L_29;
			// var form = new WWWForm();
			WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_30 = (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 *)il2cpp_codegen_object_new(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var);
			WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695(L_30, /*hidden argument*/NULL);
			V_6 = L_30;
		}

IL_0135:
		try
		{ // begin try (depth: 2)
			{
				// using (var stream = new FileStream(appFullPath, FileMode.Open, FileAccess.Read, FileShare.Read))
				String_t* L_31 = __this->get_appFullPath_3();
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_32 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
				FileStream__ctor_mB254658F1E758D76B41C942CB91BDF38FD544C83(L_32, L_31, 3, 1, 1, /*hidden argument*/NULL);
				V_10 = L_32;
			}

IL_0145:
			try
			{ // begin try (depth: 3)
				{
					// using (var reader = new BinaryReader(stream))
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_33 = V_10;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_34 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
					BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_34, L_33, /*hidden argument*/NULL);
					V_11 = L_34;
				}

IL_014e:
				try
				{ // begin try (depth: 4)
					// form.AddBinaryData(fileName, reader.ReadBytes((int)reader.BaseStream.Length), fileName);
					WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_35 = V_6;
					String_t* L_36 = __this->get_U3CfileNameU3E5__2_5();
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_37 = V_11;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_38 = V_11;
					NullCheck(L_38);
					Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_39 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_38);
					NullCheck(L_39);
					int64_t L_40 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_39);
					NullCheck(L_37);
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_37, (((int32_t)((int32_t)L_40))));
					String_t* L_42 = __this->get_U3CfileNameU3E5__2_5();
					NullCheck(L_35);
					WWWForm_AddBinaryData_mDC01404EEF71794A04210CA2696C11CB81FCF30F(L_35, L_36, L_41, L_42, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x187, FINALLY_0177);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0177;
				}

FINALLY_0177:
				{ // begin finally (depth: 4)
					{
						int32_t L_43 = V_0;
						if ((((int32_t)L_43) >= ((int32_t)0)))
						{
							goto IL_0186;
						}
					}

IL_017b:
					{
						BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_44 = V_11;
						if (!L_44)
						{
							goto IL_0186;
						}
					}

IL_017f:
					{
						BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_45 = V_11;
						NullCheck(L_45);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_45);
					}

IL_0186:
					{
						IL2CPP_END_FINALLY(375)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(375)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x187, IL_0187)
				}

IL_0187:
				{
					// }
					IL2CPP_LEAVE(0x199, FINALLY_0189);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0189;
			}

FINALLY_0189:
			{ // begin finally (depth: 3)
				{
					int32_t L_46 = V_0;
					if ((((int32_t)L_46) >= ((int32_t)0)))
					{
						goto IL_0198;
					}
				}

IL_018d:
				{
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_47 = V_10;
					if (!L_47)
					{
						goto IL_0198;
					}
				}

IL_0191:
				{
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_48 = V_10;
					NullCheck(L_48);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_48);
				}

IL_0198:
				{
					IL2CPP_END_FINALLY(393)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(393)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x199, IL_0199)
			}

IL_0199:
			{
				// using (var stream = new FileStream(certFullPath, FileMode.Open, FileAccess.Read, FileShare.Read))
				String_t* L_49 = V_2;
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_50 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
				FileStream__ctor_mB254658F1E758D76B41C942CB91BDF38FD544C83(L_50, L_49, 3, 1, 1, /*hidden argument*/NULL);
				V_12 = L_50;
			}

IL_01a4:
			try
			{ // begin try (depth: 3)
				{
					// using (var reader = new BinaryReader(stream))
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_51 = V_12;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_52 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
					BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_52, L_51, /*hidden argument*/NULL);
					V_13 = L_52;
				}

IL_01ad:
				try
				{ // begin try (depth: 4)
					// form.AddBinaryData(certName, reader.ReadBytes((int)reader.BaseStream.Length), certName);
					WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_53 = V_6;
					String_t* L_54 = V_3;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_55 = V_13;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_56 = V_13;
					NullCheck(L_56);
					Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_57 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_56);
					NullCheck(L_57);
					int64_t L_58 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_57);
					NullCheck(L_55);
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_59 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_55, (((int32_t)((int32_t)L_58))));
					String_t* L_60 = V_3;
					NullCheck(L_53);
					WWWForm_AddBinaryData_mDC01404EEF71794A04210CA2696C11CB81FCF30F(L_53, L_54, L_59, L_60, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x1DC, FINALLY_01cc);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_01cc;
				}

FINALLY_01cc:
				{ // begin finally (depth: 4)
					{
						int32_t L_61 = V_0;
						if ((((int32_t)L_61) >= ((int32_t)0)))
						{
							goto IL_01db;
						}
					}

IL_01d0:
					{
						BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_62 = V_13;
						if (!L_62)
						{
							goto IL_01db;
						}
					}

IL_01d4:
					{
						BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_63 = V_13;
						NullCheck(L_63);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_63);
					}

IL_01db:
					{
						IL2CPP_END_FINALLY(460)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(460)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x1DC, IL_01dc)
				}

IL_01dc:
				{
					// }
					IL2CPP_LEAVE(0x1EE, FINALLY_01de);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01de;
			}

FINALLY_01de:
			{ // begin finally (depth: 3)
				{
					int32_t L_64 = V_0;
					if ((((int32_t)L_64) >= ((int32_t)0)))
					{
						goto IL_01ed;
					}
				}

IL_01e2:
				{
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_65 = V_12;
					if (!L_65)
					{
						goto IL_01ed;
					}
				}

IL_01e6:
				{
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_66 = V_12;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_66);
				}

IL_01ed:
				{
					IL2CPP_END_FINALLY(478)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(478)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x1EE, IL_01ee)
			}

IL_01ee:
			{
				// IOFileInfo[] depFiles = new DirectoryInfo(depPath).GetFiles();
				String_t* L_67 = V_5;
				DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * L_68 = (DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F *)il2cpp_codegen_object_new(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F_il2cpp_TypeInfo_var);
				DirectoryInfo__ctor_m00923CD8472B1FB220FAEE9D09CCCF9A96A021C6(L_68, L_67, /*hidden argument*/NULL);
				NullCheck(L_68);
				FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* L_69 = DirectoryInfo_GetFiles_m3E2F7B3AA18FE603D7746175A572298AD649DBF6(L_68, /*hidden argument*/NULL);
				// foreach (IOFileInfo dep in depFiles)
				V_14 = L_69;
				V_15 = 0;
				goto IL_0279;
			}

IL_0201:
			{
				// foreach (IOFileInfo dep in depFiles)
				FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* L_70 = V_14;
				int32_t L_71 = V_15;
				NullCheck(L_70);
				int32_t L_72 = L_71;
				FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				V_16 = L_73;
				// using (var stream = new FileStream(dep.FullName, FileMode.Open, FileAccess.Read, FileShare.Read))
				FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_74 = V_16;
				NullCheck(L_74);
				String_t* L_75 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_74);
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_76 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
				FileStream__ctor_mB254658F1E758D76B41C942CB91BDF38FD544C83(L_76, L_75, 3, 1, 1, /*hidden argument*/NULL);
				V_17 = L_76;
			}

IL_0219:
			try
			{ // begin try (depth: 3)
				{
					// using (var reader = new BinaryReader(stream))
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_77 = V_17;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_78 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
					BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_78, L_77, /*hidden argument*/NULL);
					V_18 = L_78;
				}

IL_0222:
				try
				{ // begin try (depth: 4)
					// string depFilename = Path.GetFileName(dep.FullName);
					FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_79 = V_16;
					NullCheck(L_79);
					String_t* L_80 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_79);
					IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
					String_t* L_81 = Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E(L_80, /*hidden argument*/NULL);
					V_19 = L_81;
					// form.AddBinaryData(depFilename, reader.ReadBytes((int)reader.BaseStream.Length), depFilename);
					WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_82 = V_6;
					String_t* L_83 = V_19;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_84 = V_18;
					BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_85 = V_18;
					NullCheck(L_85);
					Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_86 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_85);
					NullCheck(L_86);
					int64_t L_87 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_86);
					NullCheck(L_84);
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_88 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_84, (((int32_t)((int32_t)L_87))));
					String_t* L_89 = V_19;
					NullCheck(L_82);
					WWWForm_AddBinaryData_mDC01404EEF71794A04210CA2696C11CB81FCF30F(L_82, L_83, L_88, L_89, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x261, FINALLY_0251);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0251;
				}

FINALLY_0251:
				{ // begin finally (depth: 4)
					{
						int32_t L_90 = V_0;
						if ((((int32_t)L_90) >= ((int32_t)0)))
						{
							goto IL_0260;
						}
					}

IL_0255:
					{
						BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_91 = V_18;
						if (!L_91)
						{
							goto IL_0260;
						}
					}

IL_0259:
					{
						BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_92 = V_18;
						NullCheck(L_92);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_92);
					}

IL_0260:
					{
						IL2CPP_END_FINALLY(593)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(593)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x261, IL_0261)
				}

IL_0261:
				{
					// }
					IL2CPP_LEAVE(0x273, FINALLY_0263);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0263;
			}

FINALLY_0263:
			{ // begin finally (depth: 3)
				{
					int32_t L_93 = V_0;
					if ((((int32_t)L_93) >= ((int32_t)0)))
					{
						goto IL_0272;
					}
				}

IL_0267:
				{
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_94 = V_17;
					if (!L_94)
					{
						goto IL_0272;
					}
				}

IL_026b:
				{
					FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_95 = V_17;
					NullCheck(L_95);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_95);
				}

IL_0272:
				{
					IL2CPP_END_FINALLY(611)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(611)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x273, IL_0273)
			}

IL_0273:
			{
				int32_t L_96 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
			}

IL_0279:
			{
				// foreach (IOFileInfo dep in depFiles)
				int32_t L_97 = V_15;
				FileInfoU5BU5D_t268B75E848D5C2969FBD79C672A5743FA9429F88* L_98 = V_14;
				NullCheck(L_98);
				if ((((int32_t)L_97) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))))
				{
					goto IL_0201;
				}
			}

IL_0281:
			{
				// }
				goto IL_028f;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0283;
			throw e;
		}

CATCH_0283:
		{ // begin catch(System.Exception)
			// Debug.LogException(e);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_05a0;
		} // end catch (depth: 2)

IL_028f:
		{
			// string query = $"{string.Format(InstallQuery, FinalizeUrl(targetDevice.IP))}?package={UnityWebRequest.EscapeURL(fileName)}";
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_99 = __this->get_targetDevice_2();
			NullCheck(L_99);
			String_t* L_100 = L_99->get_IP_2();
			String_t* L_101 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_100, /*hidden argument*/NULL);
			String_t* L_102 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8EABC73A6C6505C4109358A33216B58D3A2C97E0, L_101, /*hidden argument*/NULL);
			String_t* L_103 = __this->get_U3CfileNameU3E5__2_5();
			String_t* L_104 = UnityWebRequest_EscapeURL_m95ACCD28C59C1A12E4CAF186002A31C84A7CA13F(L_103, /*hidden argument*/NULL);
			String_t* L_105 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_102, _stringLiteral3B6BEF4AFC5F978BAC9AA67CD3499B1CDFE59341, L_104, /*hidden argument*/NULL);
			// var response = await Rest.PostAsync(query, form, targetDevice.Authorization);
			WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_106 = V_6;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_107 = __this->get_targetDevice_2();
			NullCheck(L_107);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_108 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_107, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_109 = Rest_PostAsync_mC69DA37FF7A7C5B8AB3E82452CBF354320A0A724(L_105, L_106, L_108, (-1), (bool)0, /*hidden argument*/NULL);
			NullCheck(L_109);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_110 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_109, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_20 = L_110;
			bool L_111 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_20), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_111)
			{
				goto IL_0323;
			}
		}

IL_02e2:
		{
			int32_t L_112 = 1;
			V_0 = L_112;
			__this->set_U3CU3E1__state_0(L_112);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_113 = V_20;
			__this->set_U3CU3Eu__2_7(L_113);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_114 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mD6147102B505162D41207067B1F14F9A721F7ACD((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_114, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_20), (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mD6147102B505162D41207067B1F14F9A721F7ACD_RuntimeMethod_var);
			goto IL_05b4;
		}

IL_0306:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_115 = __this->get_U3CU3Eu__2_7();
			V_20 = L_115;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_116 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_116, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_117 = (-1);
			V_0 = L_117;
			__this->set_U3CU3E1__state_0(L_117);
		}

IL_0323:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_118 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_20), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_7 = L_118;
			// if (!response.Successful)
			bool L_119 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)(&V_7), /*hidden argument*/NULL);
			if (L_119)
			{
				goto IL_0471;
			}
		}

IL_0338:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			int64_t L_120 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)(&V_7), /*hidden argument*/NULL);
			V_21 = (bool)((((int64_t)L_120) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_121 = V_21;
			if (!L_121)
			{
				goto IL_03b2;
			}
		}

IL_034d:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_122 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_123 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_122, /*hidden argument*/NULL);
			NullCheck(L_123);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_124 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_123, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_9 = L_124;
			bool L_125 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_125)
			{
				goto IL_03a9;
			}
		}

IL_0368:
		{
			int32_t L_126 = 2;
			V_0 = L_126;
			__this->set_U3CU3E1__state_0(L_126);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_127 = V_9;
			__this->set_U3CU3Eu__1_6(L_127);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_128 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_128, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159_RuntimeMethod_var);
			goto IL_05b4;
		}

IL_038c:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_129 = __this->get_U3CU3Eu__1_6();
			V_9 = L_129;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_130 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_130, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_131 = (-1);
			V_0 = L_131;
			__this->set_U3CU3E1__state_0(L_131);
		}

IL_03a9:
		{
			bool L_132 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_21 = L_132;
		}

IL_03b2:
		{
			bool L_133 = V_21;
			if (!L_133)
			{
				goto IL_042b;
			}
		}

IL_03b6:
		{
			// return await InstallAppAsync(appFullPath, targetDevice, waitForDone);
			String_t* L_134 = __this->get_appFullPath_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_135 = __this->get_targetDevice_2();
			bool L_136 = __this->get_waitForDone_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_137 = DevicePortal_InstallAppAsync_mE1D8146CE25ACEF7ED6C096A7C2E6BF55DCB4724(L_134, L_135, L_136, /*hidden argument*/NULL);
			NullCheck(L_137);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_138 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_137, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_9 = L_138;
			bool L_139 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_139)
			{
				goto IL_041e;
			}
		}

IL_03dd:
		{
			int32_t L_140 = 3;
			V_0 = L_140;
			__this->set_U3CU3E1__state_0(L_140);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_141 = V_9;
			__this->set_U3CU3Eu__1_6(L_141);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_142 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_142, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_m747EC59976BDC44D272062F6DC422A77AFA8E159_RuntimeMethod_var);
			goto IL_05b4;
		}

IL_0401:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_143 = __this->get_U3CU3Eu__1_6();
			V_9 = L_143;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_144 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_144, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_145 = (-1);
			V_0 = L_145;
			__this->set_U3CU3E1__state_0(L_145);
		}

IL_041e:
		{
			bool L_146 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_146;
			goto IL_05a0;
		}

IL_042b:
		{
			// Debug.LogError($"Failed to install {fileName} on {targetDevice.ToString()}.");
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_147 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_148 = L_147;
			NullCheck(L_148);
			ArrayElementTypeCheck (L_148, _stringLiteral2085243405803843B0FA363495274C1D2499BC43);
			(L_148)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2085243405803843B0FA363495274C1D2499BC43);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_149 = L_148;
			String_t* L_150 = __this->get_U3CfileNameU3E5__2_5();
			NullCheck(L_149);
			ArrayElementTypeCheck (L_149, L_150);
			(L_149)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_150);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_151 = L_149;
			NullCheck(L_151);
			ArrayElementTypeCheck (L_151, _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			(L_151)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_152 = L_151;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_153 = __this->get_targetDevice_2();
			NullCheck(L_153);
			String_t* L_154 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_153);
			NullCheck(L_152);
			ArrayElementTypeCheck (L_152, L_154);
			(L_152)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_154);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_155 = L_152;
			NullCheck(L_155);
			ArrayElementTypeCheck (L_155, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			(L_155)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			String_t* L_156 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_155, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_156, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_05a0;
		}

IL_0471:
		{
			// var status = AppInstallStatus.Installing;
			V_8 = 1;
			goto IL_0573;
		}

IL_0479:
		{
			// status = await GetInstallStatusAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_157 = __this->get_targetDevice_2();
			Task_1_t2E3D4D221B9C4B12B4B9A28EBBD528E34B2C02E4 * L_158 = DevicePortal_GetInstallStatusAsync_mB7B36B56F20EC4701CDA8F48156EE57F651B1646(L_157, /*hidden argument*/NULL);
			NullCheck(L_158);
			TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  L_159 = Task_1_GetAwaiter_mF7A5F84763CEDF89660D604397B6994A1C7B3224(L_158, /*hidden argument*/Task_1_GetAwaiter_mF7A5F84763CEDF89660D604397B6994A1C7B3224_RuntimeMethod_var);
			V_22 = L_159;
			bool L_160 = TaskAwaiter_1_get_IsCompleted_mBD3E3A58FA5E551BD55ED66E15DD6C8E7A243B80((TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 *)(&V_22), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mBD3E3A58FA5E551BD55ED66E15DD6C8E7A243B80_RuntimeMethod_var);
			if (L_160)
			{
				goto IL_04d5;
			}
		}

IL_0494:
		{
			int32_t L_161 = 4;
			V_0 = L_161;
			__this->set_U3CU3E1__state_0(L_161);
			TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  L_162 = V_22;
			__this->set_U3CU3Eu__3_8(L_162);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_163 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mF97E953E2D97A04123E94334741949AFEC69BBF1((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_163, (TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 *)(&V_22), (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21_TisU3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5_mF97E953E2D97A04123E94334741949AFEC69BBF1_RuntimeMethod_var);
			goto IL_05b4;
		}

IL_04b8:
		{
			TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21  L_164 = __this->get_U3CU3Eu__3_8();
			V_22 = L_164;
			TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 * L_165 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_165, sizeof(TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 ));
			int32_t L_166 = (-1);
			V_0 = L_166;
			__this->set_U3CU3E1__state_0(L_166);
		}

IL_04d5:
		{
			int32_t L_167 = TaskAwaiter_1_GetResult_m5FE7DFB976404B750B6D94FB305B4766AAEA8A07((TaskAwaiter_1_t6511D0A5DFDEB740A922491B79825B87A8EEAE21 *)(&V_22), /*hidden argument*/TaskAwaiter_1_GetResult_m5FE7DFB976404B750B6D94FB305B4766AAEA8A07_RuntimeMethod_var);
			V_8 = L_167;
			// switch (status)
			int32_t L_168 = V_8;
			if ((((int32_t)L_168) == ((int32_t)2)))
			{
				goto IL_04ed;
			}
		}

IL_04e3:
		{
			int32_t L_169 = V_8;
			if ((((int32_t)L_169) == ((int32_t)3)))
			{
				goto IL_0530;
			}
		}

IL_04e8:
		{
			goto IL_0573;
		}

IL_04ed:
		{
			// Debug.Log($"Successfully installed {fileName} on {targetDevice.ToString()}.");
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_170 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_171 = L_170;
			NullCheck(L_171);
			ArrayElementTypeCheck (L_171, _stringLiteral318288AFA711F16AD8008992D052362B499BA731);
			(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral318288AFA711F16AD8008992D052362B499BA731);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_172 = L_171;
			String_t* L_173 = __this->get_U3CfileNameU3E5__2_5();
			NullCheck(L_172);
			ArrayElementTypeCheck (L_172, L_173);
			(L_172)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_173);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_174 = L_172;
			NullCheck(L_174);
			ArrayElementTypeCheck (L_174, _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			(L_174)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_175 = L_174;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_176 = __this->get_targetDevice_2();
			NullCheck(L_176);
			String_t* L_177 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_176);
			NullCheck(L_175);
			ArrayElementTypeCheck (L_175, L_177);
			(L_175)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_177);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_178 = L_175;
			NullCheck(L_178);
			ArrayElementTypeCheck (L_178, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			(L_178)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			String_t* L_179 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_178, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_179, /*hidden argument*/NULL);
			// return true;
			V_1 = (bool)1;
			goto IL_05a0;
		}

IL_0530:
		{
			// Debug.LogError($"Failed to install {fileName} on {targetDevice.ToString()}.");
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_180 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_181 = L_180;
			NullCheck(L_181);
			ArrayElementTypeCheck (L_181, _stringLiteral2085243405803843B0FA363495274C1D2499BC43);
			(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2085243405803843B0FA363495274C1D2499BC43);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_182 = L_181;
			String_t* L_183 = __this->get_U3CfileNameU3E5__2_5();
			NullCheck(L_182);
			ArrayElementTypeCheck (L_182, L_183);
			(L_182)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_183);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_184 = L_182;
			NullCheck(L_184);
			ArrayElementTypeCheck (L_184, _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			(L_184)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_185 = L_184;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_186 = __this->get_targetDevice_2();
			NullCheck(L_186);
			String_t* L_187 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_186);
			NullCheck(L_185);
			ArrayElementTypeCheck (L_185, L_187);
			(L_185)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_187);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_188 = L_185;
			NullCheck(L_188);
			ArrayElementTypeCheck (L_188, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			(L_188)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			String_t* L_189 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_188, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_189, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_05a0;
		}

IL_0573:
		{
			// while (waitForDone && status == AppInstallStatus.Installing)
			bool L_190 = __this->get_waitForDone_4();
			if (!L_190)
			{
				goto IL_0583;
			}
		}

IL_057b:
		{
			int32_t L_191 = V_8;
			if ((((int32_t)L_191) == ((int32_t)1)))
			{
				goto IL_0479;
			}
		}

IL_0583:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_05a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0587;
		throw e;
	}

CATCH_0587:
	{ // begin catch(System.Exception)
		V_23 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_192 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_193 = V_23;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_192, L_193, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_05b4;
	} // end catch (depth: 1)

IL_05a0:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_194 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_195 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_194, L_195, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_05b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInstallAppAsyncU3Ed__27_MoveNext_m5EFDBE91E3567E3182CB00A479F14C55C6DCD89B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * _thisAdjusted = reinterpret_cast<U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *>(__this + _offset);
	U3CInstallAppAsyncU3Ed__27_MoveNext_m5EFDBE91E3567E3182CB00A479F14C55C6DCD89B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<InstallAppAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__27_SetStateMachine_m4A3A4F7A149F1B19857F3257BB9149B8EC39C839 (U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInstallAppAsyncU3Ed__27_SetStateMachine_m4A3A4F7A149F1B19857F3257BB9149B8EC39C839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInstallAppAsyncU3Ed__27_SetStateMachine_m4A3A4F7A149F1B19857F3257BB9149B8EC39C839_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 * _thisAdjusted = reinterpret_cast<U3CInstallAppAsyncU3Ed__27_tFA6B8C89DB0A509A38FEF97C08AB3C95C3D204D5 *>(__this + _offset);
	U3CInstallAppAsyncU3Ed__27_SetStateMachine_m4A3A4F7A149F1B19857F3257BB9149B8EC39C839(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__23_MoveNext_m0C3AAA2DD8E150F3613FF87B7C99DCD323BC962B (U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppInstalledAsyncU3Ed__23_MoveNext_m0C3AAA2DD8E150F3613FF87B7C99DCD323BC962B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_004a;
			}
		}

IL_000a:
		{
			// return await GetApplicationInfoAsync(packageName, targetDevice) != null;
			String_t* L_2 = __this->get_packageName_2();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_3 = __this->get_targetDevice_3();
			Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * L_4 = DevicePortal_GetApplicationInfoAsync_m6277752E297BC7E4699683D69A4081AD64840AF3(L_2, L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_5 = Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301(L_4, /*hidden argument*/Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6 = TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0066;
			}
		}

IL_002a:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_8 = V_2;
			__this->set_U3CU3Eu__1_4(L_8);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491_m00131F69C8009529B2AFCBC7A4E67FB7EE93A00F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_9, (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_2), (U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491_m00131F69C8009529B2AFCBC7A4E67FB7EE93A00F_RuntimeMethod_var);
			goto IL_009e;
		}

IL_004a:
		{
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_10 = __this->get_U3CU3Eu__1_4();
			V_2 = L_10;
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * L_11 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0066:
		{
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_13 = TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F_RuntimeMethod_var);
			V_1 = (bool)((!(((RuntimeObject*)(ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_008a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_14, L_15, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_009e;
	} // end catch (depth: 1)

IL_008a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_17 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_16, L_17, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_009e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CIsAppInstalledAsyncU3Ed__23_MoveNext_m0C3AAA2DD8E150F3613FF87B7C99DCD323BC962B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * _thisAdjusted = reinterpret_cast<U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 *>(__this + _offset);
	U3CIsAppInstalledAsyncU3Ed__23_MoveNext_m0C3AAA2DD8E150F3613FF87B7C99DCD323BC962B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppInstalledAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__23_SetStateMachine_m0099D62AB1DD28C0A9D5E111A1E6F918CF845AEF (U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppInstalledAsyncU3Ed__23_SetStateMachine_m0099D62AB1DD28C0A9D5E111A1E6F918CF845AEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CIsAppInstalledAsyncU3Ed__23_SetStateMachine_m0099D62AB1DD28C0A9D5E111A1E6F918CF845AEF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 * _thisAdjusted = reinterpret_cast<U3CIsAppInstalledAsyncU3Ed__23_tF647D77C6D2D84ACC42B44E952488333638AC491 *>(__this + _offset);
	U3CIsAppInstalledAsyncU3Ed__23_SetStateMachine_m0099D62AB1DD28C0A9D5E111A1E6F918CF845AEF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__24_MoveNext_m359F5BA2A24D124CEC02BB0EE54FCD8A04D851A5 (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppRunningAsyncU3Ed__24_MoveNext_m359F5BA2A24D124CEC02BB0EE54FCD8A04D851A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * V_2 = NULL;
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 10);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B31_0 = NULL;
	String_t* G_B30_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0068;
				}
				case 1:
				{
					goto IL_0118;
				}
				case 2:
				{
					goto IL_0204;
				}
				case 3:
				{
					goto IL_0276;
				}
			}
		}

IL_001d:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_0093;
			}
		}

IL_0025:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_4 = __this->get_targetDevice_4();
			Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * L_5 = DevicePortal_GetApplicationInfoAsync_m6277752E297BC7E4699683D69A4081AD64840AF3(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_6 = Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301(L_5, /*hidden argument*/Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0084;
			}
		}

IL_0045:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_mCC6E211BD3811DB78FD15D545E1CF91A7EAD4422((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_10, (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_mCC6E211BD3811DB78FD15D545E1CF91A7EAD4422_RuntimeMethod_var);
			goto IL_02e7;
		}

IL_0068:
		{
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0084:
		{
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_14 = TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_0093:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00b7;
			}
		}

IL_009b:
		{
			// Debug.LogError($"{packageName} not installed.");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_17, _stringLiteral665368390ACCA5AB4ABB61EC7D12556AD67B640C, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_02d3;
		}

IL_00b7:
		{
			// var response = await Rest.GetAsync(string.Format(ProcessQuery, FinalizeUrl(targetDevice.IP)), targetDevice.Authorization, readResponseData: true);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_19 = __this->get_targetDevice_4();
			NullCheck(L_19);
			String_t* L_20 = L_19->get_IP_2();
			String_t* L_21 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_20, /*hidden argument*/NULL);
			String_t* L_22 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4574566DDC68C661BFBF351191376879359A8CF3, L_21, /*hidden argument*/NULL);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_23 = __this->get_targetDevice_4();
			NullCheck(L_23);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_24 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_25 = Rest_GetAsync_m83C2DC547045A1566E20C2D3D604EF59C581AF0E(L_22, L_24, (-1), (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)NULL, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_25);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_26 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_25, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_5 = L_26;
			bool L_27 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0135;
			}
		}

IL_00f4:
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_29 = V_5;
			__this->set_U3CU3Eu__2_7(L_29);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_30 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m1661AF2AF2A69DCD619842AE7F5650193E583A61((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_30, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m1661AF2AF2A69DCD619842AE7F5650193E583A61_RuntimeMethod_var);
			goto IL_02e7;
		}

IL_0118:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_31 = __this->get_U3CU3Eu__2_7();
			V_5 = L_31;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_32 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
		}

IL_0135:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_34 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_4 = L_34;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_35 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_35);
			// if (response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_36 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_37 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_01ac;
			}
		}

IL_0153:
		{
			// var processList = JsonUtility.FromJson<ProcessList>(response.ResponseBody);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_38 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_39 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_38, /*hidden argument*/NULL);
			ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * L_40 = JsonUtility_FromJson_TisProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355_m727E47ED23BE0A6562B7FF579461D92E543FEA2F(L_39, /*hidden argument*/JsonUtility_FromJson_TisProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355_m727E47ED23BE0A6562B7FF579461D92E543FEA2F_RuntimeMethod_var);
			V_6 = L_40;
			// for (int i = 0; i < processList.Processes.Length; ++i)
			V_7 = 0;
			goto IL_0198;
		}

IL_016a:
		{
			// if (processList.Processes[i].ImageName.Contains(appInfo.Name))
			ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * L_41 = V_6;
			NullCheck(L_41);
			ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F* L_42 = L_41->get_Processes_0();
			int32_t L_43 = V_7;
			NullCheck(L_42);
			int32_t L_44 = L_43;
			ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
			NullCheck(L_45);
			String_t* L_46 = L_45->get_ImageName_1();
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_47 = __this->get_appInfo_2();
			NullCheck(L_47);
			String_t* L_48 = L_47->get_Name_0();
			NullCheck(L_46);
			bool L_49 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_46, L_48, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_0192;
			}
		}

IL_018b:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_02d3;
		}

IL_0192:
		{
			// for (int i = 0; i < processList.Processes.Length; ++i)
			int32_t L_50 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		}

IL_0198:
		{
			// for (int i = 0; i < processList.Processes.Length; ++i)
			int32_t L_51 = V_7;
			ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * L_52 = V_6;
			NullCheck(L_52);
			ProcessInfoU5BU5D_t0F297EA1A799D725A38A30C178C8A4AEC0DEDC2F* L_53 = L_52->get_Processes_0();
			NullCheck(L_53);
			if ((((int32_t)L_51) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))))
			{
				goto IL_016a;
			}
		}

IL_01a5:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_02d3;
		}

IL_01ac:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_54 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_55 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_54, /*hidden argument*/NULL);
			V_8 = (bool)((((int64_t)L_55) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_56 = V_8;
			if (!L_56)
			{
				goto IL_022a;
			}
		}

IL_01c5:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_57 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_58 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_57, /*hidden argument*/NULL);
			NullCheck(L_58);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_59 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_58, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_9 = L_59;
			bool L_60 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_60)
			{
				goto IL_0221;
			}
		}

IL_01e0:
		{
			int32_t L_61 = 2;
			V_0 = L_61;
			__this->set_U3CU3E1__state_0(L_61);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_62 = V_9;
			__this->set_U3CU3Eu__3_8(L_62);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_63 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_63, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E_RuntimeMethod_var);
			goto IL_02e7;
		}

IL_0204:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_64 = __this->get_U3CU3Eu__3_8();
			V_9 = L_64;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_65 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_65, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_66 = (-1);
			V_0 = L_66;
			__this->set_U3CU3E1__state_0(L_66);
		}

IL_0221:
		{
			bool L_67 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_8 = L_67;
		}

IL_022a:
		{
			bool L_68 = V_8;
			if (!L_68)
			{
				goto IL_029d;
			}
		}

IL_022e:
		{
			// return await IsAppRunningAsync(packageName, targetDevice, appInfo);
			String_t* L_69 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_70 = __this->get_targetDevice_4();
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_71 = __this->get_appInfo_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_72 = DevicePortal_IsAppRunningAsync_m5A0AD795C76FFE57FB2DE6CC7B1D2D21CC46D2AF(L_69, L_70, L_71, /*hidden argument*/NULL);
			NullCheck(L_72);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_73 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_72, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_9 = L_73;
			bool L_74 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_74)
			{
				goto IL_0293;
			}
		}

IL_0255:
		{
			int32_t L_75 = 3;
			V_0 = L_75;
			__this->set_U3CU3E1__state_0(L_75);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_76 = V_9;
			__this->set_U3CU3Eu__3_8(L_76);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_77 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_77, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1_m03A3CC7DE825F6E430C745EB3EBCE1F66D0D6B8E_RuntimeMethod_var);
			goto IL_02e7;
		}

IL_0276:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_78 = __this->get_U3CU3Eu__3_8();
			V_9 = L_78;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_79 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_79, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->set_U3CU3E1__state_0(L_80);
		}

IL_0293:
		{
			bool L_81 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_81;
			goto IL_02d3;
		}

IL_029d:
		{
			// Debug.LogError($"{response.ResponseBody}");
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_82 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_83 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_82, /*hidden argument*/NULL);
			String_t* L_84 = L_83;
			G_B30_0 = L_84;
			if (L_84)
			{
				G_B31_0 = L_84;
				goto IL_02b1;
			}
		}

IL_02ab:
		{
			G_B31_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_02b1:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(G_B31_0, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_02d3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02ba;
		throw e;
	}

CATCH_02ba:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_85 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_86 = V_10;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_85, L_86, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_02e7;
	} // end catch (depth: 1)

IL_02d3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_87 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_88 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_87, L_88, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_02e7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CIsAppRunningAsyncU3Ed__24_MoveNext_m359F5BA2A24D124CEC02BB0EE54FCD8A04D851A5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * _thisAdjusted = reinterpret_cast<U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *>(__this + _offset);
	U3CIsAppRunningAsyncU3Ed__24_MoveNext_m359F5BA2A24D124CEC02BB0EE54FCD8A04D851A5(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<IsAppRunningAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__24_SetStateMachine_m1CD67D4BC9A22735BC48BFD8A1784664CD2B7FBC (U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppRunningAsyncU3Ed__24_SetStateMachine_m1CD67D4BC9A22735BC48BFD8A1784664CD2B7FBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CIsAppRunningAsyncU3Ed__24_SetStateMachine_m1CD67D4BC9A22735BC48BFD8A1784664CD2B7FBC_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 * _thisAdjusted = reinterpret_cast<U3CIsAppRunningAsyncU3Ed__24_tE37C2F186E722B21BAE9379E714B3C06D053BFC1 *>(__this + _offset);
	U3CIsAppRunningAsyncU3Ed__24_SetStateMachine_m1CD67D4BC9A22735BC48BFD8A1784664CD2B7FBC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__30_MoveNext_mCDFCCED61A7796DF51AC7C56244E4C8967680CCB (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLaunchAppAsyncU3Ed__30_MoveNext_mCDFCCED61A7796DF51AC7C56244E4C8967680CCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * V_2 = NULL;
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_7;
	memset((&V_7), 0, sizeof(V_7));
	SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 11);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0070;
				}
				case 1:
				{
					goto IL_016d;
				}
				case 2:
				{
					goto IL_0203;
				}
				case 3:
				{
					goto IL_0273;
				}
				case 4:
				{
					goto IL_030c;
				}
				case 5:
				{
					goto IL_0378;
				}
			}
		}

IL_0025:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_009b;
			}
		}

IL_002d:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_4 = __this->get_targetDevice_4();
			Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * L_5 = DevicePortal_GetApplicationInfoAsync_m6277752E297BC7E4699683D69A4081AD64840AF3(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_6 = Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301(L_5, /*hidden argument*/Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_008c;
			}
		}

IL_004d:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m01D1E960F382DB51E59B4F471DBF25CEBF6898F9((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_10, (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m01D1E960F382DB51E59B4F471DBF25CEBF6898F9_RuntimeMethod_var);
			goto IL_03d2;
		}

IL_0070:
		{
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_008c:
		{
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_14 = TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_009b:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00c4;
			}
		}

IL_00a3:
		{
			// Debug.LogWarning($"Application '{packageName}' not found");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA014392C3E204B016EA606A05AF5A6A3C6C4463E, L_17, _stringLiteral76A6AB37C34BE2069368C556BD900065D9AE36FC, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_03be;
		}

IL_00c4:
		{
			// string query = $"{string.Format(AppQuery, FinalizeUrl(targetDevice.IP))}?appid={UnityWebRequest.EscapeURL(appInfo.PackageRelativeId.EncodeTo64())}&package={UnityWebRequest.EscapeURL(appInfo.PackageFullName)}";
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_21 = __this->get_targetDevice_4();
			NullCheck(L_21);
			String_t* L_22 = L_21->get_IP_2();
			String_t* L_23 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_22, /*hidden argument*/NULL);
			String_t* L_24 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0E5C7711BC3CEC2ECFCC69D3D1BFDF44EA9D03BE, L_23, /*hidden argument*/NULL);
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_24);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_20;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, _stringLiteral8D2F677A75FC6CF5C184A3DC04893B53FF0CD423);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8D2F677A75FC6CF5C184A3DC04893B53FF0CD423);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = L_25;
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_27 = __this->get_appInfo_2();
			NullCheck(L_27);
			String_t* L_28 = L_27->get_PackageRelativeId_4();
			String_t* L_29 = StringExtensions_EncodeTo64_mFCDB92AE19AD46918157CC260F2FF9C08994A049(L_28, /*hidden argument*/NULL);
			String_t* L_30 = UnityWebRequest_EscapeURL_m95ACCD28C59C1A12E4CAF186002A31C84A7CA13F(L_29, /*hidden argument*/NULL);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_30);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_30);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = L_26;
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, _stringLiteralD0588AC0612FC42B49B33281427CCEAB317BC622);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD0588AC0612FC42B49B33281427CCEAB317BC622);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = L_31;
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_33 = __this->get_appInfo_2();
			NullCheck(L_33);
			String_t* L_34 = L_33->get_PackageFullName_2();
			String_t* L_35 = UnityWebRequest_EscapeURL_m95ACCD28C59C1A12E4CAF186002A31C84A7CA13F(L_34, /*hidden argument*/NULL);
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, L_35);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_35);
			String_t* L_36 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_32, /*hidden argument*/NULL);
			// var response = await Rest.PostAsync(query, targetDevice.Authorization, readResponseData: true);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_37 = __this->get_targetDevice_4();
			NullCheck(L_37);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_38 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_39 = Rest_PostAsync_m6A0703027F0075B7F126D1DE9EFFB97E260BE688(L_36, L_38, (-1), (bool)1, /*hidden argument*/NULL);
			NullCheck(L_39);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_40 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_39, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_5 = L_40;
			bool L_41 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_018a;
			}
		}

IL_0149:
		{
			int32_t L_42 = 1;
			V_0 = L_42;
			__this->set_U3CU3E1__state_0(L_42);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_43 = V_5;
			__this->set_U3CU3Eu__2_7(L_43);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_44 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mB2FF372808AE46FE78AEA8ACA5D2C46D59199130((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_44, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_mB2FF372808AE46FE78AEA8ACA5D2C46D59199130_RuntimeMethod_var);
			goto IL_03d2;
		}

IL_016d:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_45 = __this->get_U3CU3Eu__2_7();
			V_5 = L_45;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_46 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
		}

IL_018a:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_48 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_4 = L_48;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_49 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_49);
			// if (!response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_50 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_51 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_50, /*hidden argument*/NULL);
			if (L_51)
			{
				goto IL_0330;
			}
		}

IL_01ab:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_52 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_53 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_52, /*hidden argument*/NULL);
			V_6 = (bool)((((int64_t)L_53) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_54 = V_6;
			if (!L_54)
			{
				goto IL_0229;
			}
		}

IL_01c4:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_55 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_56 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_57 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_56, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_57;
			bool L_58 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_0220;
			}
		}

IL_01df:
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->set_U3CU3E1__state_0(L_59);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_60 = V_7;
			__this->set_U3CU3Eu__3_8(L_60);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_61 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_61, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6_RuntimeMethod_var);
			goto IL_03d2;
		}

IL_0203:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_62 = __this->get_U3CU3Eu__3_8();
			V_7 = L_62;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_63 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_63, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->set_U3CU3E1__state_0(L_64);
		}

IL_0220:
		{
			bool L_65 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_6 = L_65;
		}

IL_0229:
		{
			bool L_66 = V_6;
			if (!L_66)
			{
				goto IL_029d;
			}
		}

IL_022d:
		{
			// return await LaunchAppAsync(packageName, targetDevice);
			String_t* L_67 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_68 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_69 = DevicePortal_LaunchAppAsync_m76A9707B8E37DCACB509624014305FE1826B23A1(L_67, L_68, (ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 *)NULL, /*hidden argument*/NULL);
			NullCheck(L_69);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_70 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_69, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_70;
			bool L_71 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_71)
			{
				goto IL_0290;
			}
		}

IL_024f:
		{
			int32_t L_72 = 3;
			V_0 = L_72;
			__this->set_U3CU3E1__state_0(L_72);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_73 = V_7;
			__this->set_U3CU3Eu__3_8(L_73);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_74 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_74, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6_RuntimeMethod_var);
			goto IL_03d2;
		}

IL_0273:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_75 = __this->get_U3CU3Eu__3_8();
			V_7 = L_75;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_76 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_76, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_77 = (-1);
			V_0 = L_77;
			__this->set_U3CU3E1__state_0(L_77);
		}

IL_0290:
		{
			bool L_78 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_78;
			goto IL_03be;
		}

IL_029d:
		{
			// Debug.LogError($"{response.ResponseCode}|{response.ResponseBody}");
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_79 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_80 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_79, /*hidden argument*/NULL);
			int64_t L_81 = L_80;
			RuntimeObject * L_82 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_81);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_83 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_84 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_83, /*hidden argument*/NULL);
			String_t* L_85 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralC735E4716FB65CDFA973C9261881C31F574A20B5, L_82, L_84, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_85, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_03be;
		}

IL_02ce:
		{
			// await new WaitForSeconds(1f);
			WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_86 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_86, (1.0f), /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_87 = AwaiterExtensions_GetAwaiter_mA151CB86362B91B55D90DB5FA30EAB9A50BC2373(L_86, /*hidden argument*/NULL);
			V_8 = L_87;
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_88 = V_8;
			NullCheck(L_88);
			bool L_89 = SimpleCoroutineAwaiter_get_IsCompleted_m219ED5CB30C4CC801ED9E04339285E92AE3B22EF_inline(L_88, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_0329;
			}
		}

IL_02e8:
		{
			int32_t L_90 = 4;
			V_0 = L_90;
			__this->set_U3CU3E1__state_0(L_90);
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_91 = V_8;
			__this->set_U3CU3Eu__4_9(L_91);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_92 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m244C56488FDDA65AAE037960D70142D1E0EDDA82((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_92, (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **)(&V_8), (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m244C56488FDDA65AAE037960D70142D1E0EDDA82_RuntimeMethod_var);
			goto IL_03d2;
		}

IL_030c:
		{
			RuntimeObject * L_93 = __this->get_U3CU3Eu__4_9();
			V_8 = ((SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 *)CastclassClass((RuntimeObject*)L_93, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__4_9(NULL);
			int32_t L_94 = (-1);
			V_0 = L_94;
			__this->set_U3CU3E1__state_0(L_94);
		}

IL_0329:
		{
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_95 = V_8;
			NullCheck(L_95);
			SimpleCoroutineAwaiter_GetResult_mA592B7EA41A7A59FB3490600A4A28B13FB9D589A(L_95, /*hidden argument*/NULL);
		}

IL_0330:
		{
			// while (!await IsAppRunningAsync(packageName, targetDevice, appInfo))
			String_t* L_96 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_97 = __this->get_targetDevice_4();
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_98 = __this->get_appInfo_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_99 = DevicePortal_IsAppRunningAsync_m5A0AD795C76FFE57FB2DE6CC7B1D2D21CC46D2AF(L_96, L_97, L_98, /*hidden argument*/NULL);
			NullCheck(L_99);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_100 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_99, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_100;
			bool L_101 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_101)
			{
				goto IL_0395;
			}
		}

IL_0357:
		{
			int32_t L_102 = 5;
			V_0 = L_102;
			__this->set_U3CU3E1__state_0(L_102);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_103 = V_7;
			__this->set_U3CU3Eu__3_8(L_103);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_104 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_104, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538_m6DB25EBE5E757A63DDCE5EF1532BAE282AE349D6_RuntimeMethod_var);
			goto IL_03d2;
		}

IL_0378:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_105 = __this->get_U3CU3Eu__3_8();
			V_7 = L_105;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_106 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_106, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_107 = (-1);
			V_0 = L_107;
			__this->set_U3CU3E1__state_0(L_107);
		}

IL_0395:
		{
			bool L_108 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			if (!L_108)
			{
				goto IL_02ce;
			}
		}

IL_03a1:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_03be;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_03a5;
		throw e;
	}

CATCH_03a5:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_109 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_110 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_109, L_110, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_03d2;
	} // end catch (depth: 1)

IL_03be:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_111 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_112 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_111, L_112, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_03d2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLaunchAppAsyncU3Ed__30_MoveNext_mCDFCCED61A7796DF51AC7C56244E4C8967680CCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * _thisAdjusted = reinterpret_cast<U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *>(__this + _offset);
	U3CLaunchAppAsyncU3Ed__30_MoveNext_mCDFCCED61A7796DF51AC7C56244E4C8967680CCB(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<LaunchAppAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__30_SetStateMachine_mA1AC6C1BD7937889139EA29358ED18B4C77129B0 (U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLaunchAppAsyncU3Ed__30_SetStateMachine_mA1AC6C1BD7937889139EA29358ED18B4C77129B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLaunchAppAsyncU3Ed__30_SetStateMachine_mA1AC6C1BD7937889139EA29358ED18B4C77129B0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 * _thisAdjusted = reinterpret_cast<U3CLaunchAppAsyncU3Ed__30_tC784D438274D4B834C75CC419254F1A1E888D538 *>(__this + _offset);
	U3CLaunchAppAsyncU3Ed__30_SetStateMachine_mA1AC6C1BD7937889139EA29358ED18B4C77129B0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__38_MoveNext_m1AF7EEA004A3A88933403D13AED6F384742C0FC6 (U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshCsrfTokenAsyncU3Ed__38_MoveNext_m1AF7EEA004A3A88933403D13AED6F384742C0FC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0082;
			}
		}

IL_000a:
		{
			// if (!targetDevice.Authorization.ContainsKey("cookie"))
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_2 = __this->get_targetDevice_2();
			NullCheck(L_2);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_3 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			bool L_4 = Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC(L_3, _stringLiteral59C826FC854197CBD4D1083BCE8FC00D0761E8B3, /*hidden argument*/Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			// Debug.LogError("Resetting Auth failed!");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral547E3C559B1F6088BB6673538DD40CB97ED74EA3, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_00bf;
		}

IL_0032:
		{
			// targetDevice.Authorization.Remove("cookie");
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_5 = __this->get_targetDevice_2();
			NullCheck(L_5);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_6 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Dictionary_2_Remove_m76DF6B3AEF4E06E5E50A04EA37CDB088B141957A(L_6, _stringLiteral59C826FC854197CBD4D1083BCE8FC00D0761E8B3, /*hidden argument*/Dictionary_2_Remove_m76DF6B3AEF4E06E5E50A04EA37CDB088B141957A_RuntimeMethod_var);
			// return await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_7 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_8 = DevicePortal_EnsureAuthenticationAsync_mC8A2DB2C662C95DE597218AE3E1BAF4A594825AB(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_9 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_8, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_9;
			bool L_10 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_009e;
			}
		}

IL_0062:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_12 = V_2;
			__this->set_U3CU3Eu__1_3(L_12);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388_m1220D9489F08113580C55E9FF831F4AF6AA01F0F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_13, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388_m1220D9489F08113580C55E9FF831F4AF6AA01F0F_RuntimeMethod_var);
			goto IL_00d3;
		}

IL_0082:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_14 = __this->get_U3CU3Eu__1_3();
			V_2 = L_14;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_15 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_009e:
		{
			bool L_17 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_17;
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a8;
		throw e;
	}

CATCH_00a8:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_00d3;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_00d3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRefreshCsrfTokenAsyncU3Ed__38_MoveNext_m1AF7EEA004A3A88933403D13AED6F384742C0FC6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * _thisAdjusted = reinterpret_cast<U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 *>(__this + _offset);
	U3CRefreshCsrfTokenAsyncU3Ed__38_MoveNext_m1AF7EEA004A3A88933403D13AED6F384742C0FC6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RefreshCsrfTokenAsync>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__38_SetStateMachine_m2B3638321C003CD4EA39DD0B064C305FC2462BB4 (U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshCsrfTokenAsyncU3Ed__38_SetStateMachine_m2B3638321C003CD4EA39DD0B064C305FC2462BB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRefreshCsrfTokenAsyncU3Ed__38_SetStateMachine_m2B3638321C003CD4EA39DD0B064C305FC2462BB4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 * _thisAdjusted = reinterpret_cast<U3CRefreshCsrfTokenAsyncU3Ed__38_tBCD265163161B4C0590ED93F527E26B22B598388 *>(__this + _offset);
	U3CRefreshCsrfTokenAsyncU3Ed__38_SetStateMachine_m2B3638321C003CD4EA39DD0B064C305FC2462BB4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__21_MoveNext_mF95157499EFD63797DFE67187AF80F707AB8BE80 (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestartAsyncU3Ed__21_MoveNext_mF95157499EFD63797DFE67187AF80F707AB8BE80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 11);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0062;
				}
				case 1:
				{
					goto IL_00ee;
				}
				case 2:
				{
					goto IL_01a3;
				}
				case 3:
				{
					goto IL_0235;
				}
				case 4:
				{
					goto IL_02ee;
				}
				case 5:
				{
					goto IL_0351;
				}
			}
		}

IL_0025:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_2 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_3 = DevicePortal_EnsureAuthenticationAsync_mC8A2DB2C662C95DE597218AE3E1BAF4A594825AB(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_4 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_3, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_007e;
			}
		}

IL_003f:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_8, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_RuntimeMethod_var);
			goto IL_03b6;
		}

IL_0062:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_007e:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			// if (!isAuth) { return false; }
			if (L_12)
			{
				goto IL_008e;
			}
		}

IL_0087:
		{
			// if (!isAuth) { return false; }
			V_1 = (bool)0;
			goto IL_03a2;
		}

IL_008e:
		{
			// var response = await Rest.PostAsync(string.Format(RestartDeviceQuery, FinalizeUrl(targetDevice.IP)), targetDevice.Authorization, readResponseData: true);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_2();
			String_t* L_15 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral2DD43BCA8BF76D9535758848D49F2A0F0EDBE4AA, L_15, /*hidden argument*/NULL);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_18 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_19 = Rest_PostAsync_m6A0703027F0075B7F126D1DE9EFFB97E260BE688(L_16, L_18, (-1), (bool)1, /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_20 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_19, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_010b;
			}
		}

IL_00ca:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_24, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58_RuntimeMethod_var);
			goto IL_03b6;
		}

IL_00ee:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_010b:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_28 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_3 = L_28;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_0298;
			}
		}

IL_012a:
		{
			// bool hasRestarted = false;
			__this->set_U3ChasRestartedU3E5__3_6((bool)0);
			// string query = string.Format(GetPowerStateQuery, FinalizeUrl(targetDevice.IP));
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_32 = __this->get_targetDevice_2();
			NullCheck(L_32);
			String_t* L_33 = L_32->get_IP_2();
			String_t* L_34 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_33, /*hidden argument*/NULL);
			String_t* L_35 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralDE0E8CCB5A0C17B2171FB42287A689549ABD5002, L_34, /*hidden argument*/NULL);
			__this->set_U3CqueryU3E5__4_7(L_35);
			goto IL_0286;
		}

IL_0156:
		{
			// response = await Rest.GetAsync(query, targetDevice.Authorization, readResponseData: true);
			String_t* L_36 = __this->get_U3CqueryU3E5__4_7();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_37 = __this->get_targetDevice_2();
			NullCheck(L_37);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_38 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_39 = Rest_GetAsync_m83C2DC547045A1566E20C2D3D604EF59C581AF0E(L_36, L_38, (-1), (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)NULL, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_39);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_40 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_39, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_4 = L_40;
			bool L_41 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_01c0;
			}
		}

IL_017f:
		{
			int32_t L_42 = 2;
			V_0 = L_42;
			__this->set_U3CU3E1__state_0(L_42);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_43 = V_4;
			__this->set_U3CU3Eu__2_5(L_43);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_44 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_44, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m184EFF5E95D6058AA474A461C461CB29E105AE58_RuntimeMethod_var);
			goto IL_03b6;
		}

IL_01a3:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_45 = __this->get_U3CU3Eu__2_5();
			V_4 = L_45;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_46 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
		}

IL_01c0:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_48 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_3 = L_48;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_49 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_49);
			// if (!response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_50 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_51 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_50, /*hidden argument*/NULL);
			if (L_51)
			{
				goto IL_0275;
			}
		}

IL_01df:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_52 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_53 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_52, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_53) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_54 = V_5;
			if (!L_54)
			{
				goto IL_025a;
			}
		}

IL_01f8:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_55 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_56 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_57 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_56, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_57;
			bool L_58 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_0251;
			}
		}

IL_0212:
		{
			int32_t L_59 = 3;
			V_0 = L_59;
			__this->set_U3CU3E1__state_0(L_59);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_60 = V_2;
			__this->set_U3CU3Eu__1_4(L_60);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_61 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_61, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_RuntimeMethod_var);
			goto IL_03b6;
		}

IL_0235:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_62 = __this->get_U3CU3Eu__1_4();
			V_2 = L_62;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_63 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_63, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->set_U3CU3E1__state_0(L_64);
		}

IL_0251:
		{
			bool L_65 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_5 = L_65;
		}

IL_025a:
		{
			bool L_66 = V_5;
			if (L_66)
			{
				goto IL_0286;
			}
		}

IL_025e:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_67 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_68 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_68, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_03a2;
		}

IL_0275:
		{
			// hasRestarted = response.Successful;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_69 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_70 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_69, /*hidden argument*/NULL);
			__this->set_U3ChasRestartedU3E5__3_6(L_70);
		}

IL_0286:
		{
			// while (!hasRestarted)
			bool L_71 = __this->get_U3ChasRestartedU3E5__3_6();
			if (!L_71)
			{
				goto IL_0156;
			}
		}

IL_0291:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_03a2;
		}

IL_0298:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_72 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_73 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_72, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_73) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_74 = V_5;
			if (!L_74)
			{
				goto IL_0313;
			}
		}

IL_02b1:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_75 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_76 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_75, /*hidden argument*/NULL);
			NullCheck(L_76);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_77 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_76, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_77;
			bool L_78 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_78)
			{
				goto IL_030a;
			}
		}

IL_02cb:
		{
			int32_t L_79 = 4;
			V_0 = L_79;
			__this->set_U3CU3E1__state_0(L_79);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_80 = V_2;
			__this->set_U3CU3Eu__1_4(L_80);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_81 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_81, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_RuntimeMethod_var);
			goto IL_03b6;
		}

IL_02ee:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_82 = __this->get_U3CU3Eu__1_4();
			V_2 = L_82;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_83 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_83, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_84 = (-1);
			V_0 = L_84;
			__this->set_U3CU3E1__state_0(L_84);
		}

IL_030a:
		{
			bool L_85 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_5 = L_85;
		}

IL_0313:
		{
			bool L_86 = V_5;
			if (!L_86)
			{
				goto IL_0375;
			}
		}

IL_0317:
		{
			// await RestartAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_87 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_88 = DevicePortal_RestartAsync_mCEF30D5EC5744A488FA569833F50833A93BF5E23(L_87, /*hidden argument*/NULL);
			NullCheck(L_88);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_89 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_88, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_89;
			bool L_90 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_90)
			{
				goto IL_036d;
			}
		}

IL_0331:
		{
			int32_t L_91 = 5;
			V_0 = L_91;
			__this->set_U3CU3E1__state_0(L_91);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_92 = V_2;
			__this->set_U3CU3Eu__1_4(L_92);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_93 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_93, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821_m8B2DA6AB053DFEA3DE3CBA0AC9DB626BFFCAF822_RuntimeMethod_var);
			goto IL_03b6;
		}

IL_0351:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_94 = __this->get_U3CU3Eu__1_4();
			V_2 = L_94;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_95 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_95, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_96 = (-1);
			V_0 = L_96;
			__this->set_U3CU3E1__state_0(L_96);
		}

IL_036d:
		{
			TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
		}

IL_0375:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_97 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_98 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_97, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_98, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_03a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0389;
		throw e;
	}

CATCH_0389:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_99 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_100 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_99, L_100, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_03b6;
	} // end catch (depth: 1)

IL_03a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_101 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_102 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_101, L_102, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_03b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRestartAsyncU3Ed__21_MoveNext_mF95157499EFD63797DFE67187AF80F707AB8BE80_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * _thisAdjusted = reinterpret_cast<U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *>(__this + _offset);
	U3CRestartAsyncU3Ed__21_MoveNext_mF95157499EFD63797DFE67187AF80F707AB8BE80(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<RestartAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__21_SetStateMachine_mD422623D94954E3966491A6B2D5D3242407479C4 (U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestartAsyncU3Ed__21_SetStateMachine_mD422623D94954E3966491A6B2D5D3242407479C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRestartAsyncU3Ed__21_SetStateMachine_mD422623D94954E3966491A6B2D5D3242407479C4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 * _thisAdjusted = reinterpret_cast<U3CRestartAsyncU3Ed__21_t37B3E74E626AAA15112A24B366576D086DD59821 *>(__this + _offset);
	U3CRestartAsyncU3Ed__21_SetStateMachine_mD422623D94954E3966491A6B2D5D3242407479C4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__22_MoveNext_m70770B3953BB8F589BCB71260938DD464D43772B (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShutdownAsyncU3Ed__22_MoveNext_m70770B3953BB8F589BCB71260938DD464D43772B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 9);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_005a;
				}
				case 1:
				{
					goto IL_00e6;
				}
				case 2:
				{
					goto IL_0178;
				}
				case 3:
				{
					goto IL_01db;
				}
			}
		}

IL_001d:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_2 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_3 = DevicePortal_EnsureAuthenticationAsync_mC8A2DB2C662C95DE597218AE3E1BAF4A594825AB(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_4 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_3, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_8, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3_RuntimeMethod_var);
			goto IL_0246;
		}

IL_005a:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0076:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			// if (!isAuth) { return false; }
			if (L_12)
			{
				goto IL_0086;
			}
		}

IL_007f:
		{
			// if (!isAuth) { return false; }
			V_1 = (bool)0;
			goto IL_0232;
		}

IL_0086:
		{
			// var response = await Rest.PostAsync(string.Format(ShutdownDeviceQuery, FinalizeUrl(targetDevice.IP)), targetDevice.Authorization, readResponseData: true);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_2();
			String_t* L_15 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralFE6B6FA48E46C6F2B29DA1AFF5D72EC0F1BBE024, L_15, /*hidden argument*/NULL);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_18 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_19 = Rest_PostAsync_m6A0703027F0075B7F126D1DE9EFFB97E260BE688(L_16, L_18, (-1), (bool)1, /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_20 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_19, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0103;
			}
		}

IL_00c2:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m9B85FAF464FC1772DEC5E57AD1732A4F156F1193((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_24, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m9B85FAF464FC1772DEC5E57AD1732A4F156F1193_RuntimeMethod_var);
			goto IL_0246;
		}

IL_00e6:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_0103:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_28 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_3 = L_28;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (!response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_30, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_0215;
			}
		}

IL_0122:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_32 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_33 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_32, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_33) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_34 = V_5;
			if (!L_34)
			{
				goto IL_019d;
			}
		}

IL_013b:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_35 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_36 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_37 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_36, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_37;
			bool L_38 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0194;
			}
		}

IL_0155:
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_40 = V_2;
			__this->set_U3CU3Eu__1_4(L_40);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_41, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3_RuntimeMethod_var);
			goto IL_0246;
		}

IL_0178:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_42 = __this->get_U3CU3Eu__1_4();
			V_2 = L_42;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_43 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0194:
		{
			bool L_45 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_5 = L_45;
		}

IL_019d:
		{
			bool L_46 = V_5;
			if (!L_46)
			{
				goto IL_0201;
			}
		}

IL_01a1:
		{
			// return await ShutdownAsync(targetDevice);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_47 = __this->get_targetDevice_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_48 = DevicePortal_ShutdownAsync_m315EB4FD85037BD98077712778BB558C97B2F341(L_47, /*hidden argument*/NULL);
			NullCheck(L_48);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_49 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_48, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_2 = L_49;
			bool L_50 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_01f7;
			}
		}

IL_01bb:
		{
			int32_t L_51 = 3;
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_52 = V_2;
			__this->set_U3CU3Eu__1_4(L_52);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_53 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_53, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E_m67110700FA8325D4797DB7DBF20CEB18D85C5DA3_RuntimeMethod_var);
			goto IL_0246;
		}

IL_01db:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_54 = __this->get_U3CU3Eu__1_4();
			V_2 = L_54;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_55 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_56 = (-1);
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
		}

IL_01f7:
		{
			bool L_57 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_57;
			goto IL_0232;
		}

IL_0201:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_58 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_59 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_59, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_0232;
		}

IL_0215:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0232;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0219;
		throw e;
	}

CATCH_0219:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_60 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_61 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_60, L_61, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_0246;
	} // end catch (depth: 1)

IL_0232:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_62 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_63 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_62, L_63, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_0246:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShutdownAsyncU3Ed__22_MoveNext_m70770B3953BB8F589BCB71260938DD464D43772B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * _thisAdjusted = reinterpret_cast<U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *>(__this + _offset);
	U3CShutdownAsyncU3Ed__22_MoveNext_m70770B3953BB8F589BCB71260938DD464D43772B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<ShutdownAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__22_SetStateMachine_mD87F88BF2E1B904FC5E67EF3E0B4FE2E8DED2C2A (U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShutdownAsyncU3Ed__22_SetStateMachine_mD87F88BF2E1B904FC5E67EF3E0B4FE2E8DED2C2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShutdownAsyncU3Ed__22_SetStateMachine_mD87F88BF2E1B904FC5E67EF3E0B4FE2E8DED2C2A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E * _thisAdjusted = reinterpret_cast<U3CShutdownAsyncU3Ed__22_t2A335B3F1B2587CA1641BFDC3DAAB3CF72B77A9E *>(__this + _offset);
	U3CShutdownAsyncU3Ed__22_SetStateMachine_mD87F88BF2E1B904FC5E67EF3E0B4FE2E8DED2C2A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__31_MoveNext_mCD048BF4FD63D2272347D6C87435BDDA56260832 (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopAppAsyncU3Ed__31_MoveNext_mCD048BF4FD63D2272347D6C87435BDDA56260832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * V_2 = NULL;
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_7;
	memset((&V_7), 0, sizeof(V_7));
	SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 11);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0070;
				}
				case 1:
				{
					goto IL_0143;
				}
				case 2:
				{
					goto IL_01d9;
				}
				case 3:
				{
					goto IL_0249;
				}
				case 4:
				{
					goto IL_02c8;
				}
				case 5:
				{
					goto IL_0334;
				}
			}
		}

IL_0025:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_009b;
			}
		}

IL_002d:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_4 = __this->get_targetDevice_4();
			Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * L_5 = DevicePortal_GetApplicationInfoAsync_m6277752E297BC7E4699683D69A4081AD64840AF3(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_6 = Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301(L_5, /*hidden argument*/Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_008c;
			}
		}

IL_004d:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m25DA5B322DB4842292AACF48787B861F22674739((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_10, (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m25DA5B322DB4842292AACF48787B861F22674739_RuntimeMethod_var);
			goto IL_038e;
		}

IL_0070:
		{
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_008c:
		{
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_14 = TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_009b:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00c4;
			}
		}

IL_00a3:
		{
			// Debug.LogWarning($"Application '{packageName}' not found");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA014392C3E204B016EA606A05AF5A6A3C6C4463E, L_17, _stringLiteral76A6AB37C34BE2069368C556BD900065D9AE36FC, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_037a;
		}

IL_00c4:
		{
			// string query = $"{string.Format(AppQuery, FinalizeUrl(targetDevice.IP))}?package={UnityWebRequest.EscapeURL(appInfo.PackageFullName.EncodeTo64())}";
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_19 = __this->get_targetDevice_4();
			NullCheck(L_19);
			String_t* L_20 = L_19->get_IP_2();
			String_t* L_21 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_20, /*hidden argument*/NULL);
			String_t* L_22 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0E5C7711BC3CEC2ECFCC69D3D1BFDF44EA9D03BE, L_21, /*hidden argument*/NULL);
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_23 = __this->get_appInfo_2();
			NullCheck(L_23);
			String_t* L_24 = L_23->get_PackageFullName_2();
			String_t* L_25 = StringExtensions_EncodeTo64_mFCDB92AE19AD46918157CC260F2FF9C08994A049(L_24, /*hidden argument*/NULL);
			String_t* L_26 = UnityWebRequest_EscapeURL_m95ACCD28C59C1A12E4CAF186002A31C84A7CA13F(L_25, /*hidden argument*/NULL);
			String_t* L_27 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_22, _stringLiteral3B6BEF4AFC5F978BAC9AA67CD3499B1CDFE59341, L_26, /*hidden argument*/NULL);
			// Response response = await Rest.DeleteAsync(query, targetDevice.Authorization, readResponseData: true);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_28 = __this->get_targetDevice_4();
			NullCheck(L_28);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_29 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_28, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_30 = Rest_DeleteAsync_mAF3F4760488F7C5B3BA069C8C31917478E23D4E5(L_27, L_29, (-1), (bool)1, /*hidden argument*/NULL);
			NullCheck(L_30);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_31 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_30, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_5 = L_31;
			bool L_32 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0160;
			}
		}

IL_011f:
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_34 = V_5;
			__this->set_U3CU3Eu__2_7(L_34);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_35 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m34495C46B609169EC7FEBB1DCD8F19668FEDFFBD((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_35, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m34495C46B609169EC7FEBB1DCD8F19668FEDFFBD_RuntimeMethod_var);
			goto IL_038e;
		}

IL_0143:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_36 = __this->get_U3CU3Eu__2_7();
			V_5 = L_36;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_37 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
		}

IL_0160:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_39 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_4 = L_39;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_40 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_40);
			// if (!response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_41 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_42 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_41, /*hidden argument*/NULL);
			if (L_42)
			{
				goto IL_02ec;
			}
		}

IL_0181:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_43 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_44 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_43, /*hidden argument*/NULL);
			V_6 = (bool)((((int64_t)L_44) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_45 = V_6;
			if (!L_45)
			{
				goto IL_01ff;
			}
		}

IL_019a:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_46 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_47 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_48 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_47, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_48;
			bool L_49 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_01f6;
			}
		}

IL_01b5:
		{
			int32_t L_50 = 2;
			V_0 = L_50;
			__this->set_U3CU3E1__state_0(L_50);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_51 = V_7;
			__this->set_U3CU3Eu__3_8(L_51);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_52 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_52, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887_RuntimeMethod_var);
			goto IL_038e;
		}

IL_01d9:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_53 = __this->get_U3CU3Eu__3_8();
			V_7 = L_53;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_54 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_54, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_55 = (-1);
			V_0 = L_55;
			__this->set_U3CU3E1__state_0(L_55);
		}

IL_01f6:
		{
			bool L_56 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_6 = L_56;
		}

IL_01ff:
		{
			bool L_57 = V_6;
			if (!L_57)
			{
				goto IL_0273;
			}
		}

IL_0203:
		{
			// return await StopAppAsync(packageName, targetDevice);
			String_t* L_58 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_59 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_60 = DevicePortal_StopAppAsync_m88160488B050597B922D406B2282362F938D0542(L_58, L_59, (ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 *)NULL, /*hidden argument*/NULL);
			NullCheck(L_60);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_61 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_60, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_61;
			bool L_62 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_0266;
			}
		}

IL_0225:
		{
			int32_t L_63 = 3;
			V_0 = L_63;
			__this->set_U3CU3E1__state_0(L_63);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_64 = V_7;
			__this->set_U3CU3Eu__3_8(L_64);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_65 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_65, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887_RuntimeMethod_var);
			goto IL_038e;
		}

IL_0249:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_66 = __this->get_U3CU3Eu__3_8();
			V_7 = L_66;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_67 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_67, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_68 = (-1);
			V_0 = L_68;
			__this->set_U3CU3E1__state_0(L_68);
		}

IL_0266:
		{
			bool L_69 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_69;
			goto IL_037a;
		}

IL_0273:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_70 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_71 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_70, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_71, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_037a;
		}

IL_028a:
		{
			// await new WaitForSeconds(1f);
			WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_72 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_72, (1.0f), /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_73 = AwaiterExtensions_GetAwaiter_mA151CB86362B91B55D90DB5FA30EAB9A50BC2373(L_72, /*hidden argument*/NULL);
			V_8 = L_73;
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_74 = V_8;
			NullCheck(L_74);
			bool L_75 = SimpleCoroutineAwaiter_get_IsCompleted_m219ED5CB30C4CC801ED9E04339285E92AE3B22EF_inline(L_74, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_02e5;
			}
		}

IL_02a4:
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->set_U3CU3E1__state_0(L_76);
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_77 = V_8;
			__this->set_U3CU3Eu__4_9(L_77);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_78 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_mD3EC76334F8BAF4E756590524CE73EEECE387C27((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_78, (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 **)(&V_8), (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_mD3EC76334F8BAF4E756590524CE73EEECE387C27_RuntimeMethod_var);
			goto IL_038e;
		}

IL_02c8:
		{
			RuntimeObject * L_79 = __this->get_U3CU3Eu__4_9();
			V_8 = ((SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 *)CastclassClass((RuntimeObject*)L_79, SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__4_9(NULL);
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->set_U3CU3E1__state_0(L_80);
		}

IL_02e5:
		{
			SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * L_81 = V_8;
			NullCheck(L_81);
			SimpleCoroutineAwaiter_GetResult_mA592B7EA41A7A59FB3490600A4A28B13FB9D589A(L_81, /*hidden argument*/NULL);
		}

IL_02ec:
		{
			// while (!await IsAppRunningAsync(packageName, targetDevice, appInfo))
			String_t* L_82 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_83 = __this->get_targetDevice_4();
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_84 = __this->get_appInfo_2();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_85 = DevicePortal_IsAppRunningAsync_m5A0AD795C76FFE57FB2DE6CC7B1D2D21CC46D2AF(L_82, L_83, L_84, /*hidden argument*/NULL);
			NullCheck(L_85);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_86 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_85, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_86;
			bool L_87 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_87)
			{
				goto IL_0351;
			}
		}

IL_0313:
		{
			int32_t L_88 = 5;
			V_0 = L_88;
			__this->set_U3CU3E1__state_0(L_88);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_89 = V_7;
			__this->set_U3CU3Eu__3_8(L_89);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_90 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_90, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904_m41C1D07418D9B7B12950FA6E029EB9C1AC3C4887_RuntimeMethod_var);
			goto IL_038e;
		}

IL_0334:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_91 = __this->get_U3CU3Eu__3_8();
			V_7 = L_91;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_92 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_92, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->set_U3CU3E1__state_0(L_93);
		}

IL_0351:
		{
			bool L_94 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			if (!L_94)
			{
				goto IL_028a;
			}
		}

IL_035d:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_037a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0361;
		throw e;
	}

CATCH_0361:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_95 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_96 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_95, L_96, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_038e;
	} // end catch (depth: 1)

IL_037a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_97 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_98 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_97, L_98, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_038e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopAppAsyncU3Ed__31_MoveNext_mCD048BF4FD63D2272347D6C87435BDDA56260832_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * _thisAdjusted = reinterpret_cast<U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *>(__this + _offset);
	U3CStopAppAsyncU3Ed__31_MoveNext_mCD048BF4FD63D2272347D6C87435BDDA56260832(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<StopAppAsync>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__31_SetStateMachine_mA1B39769BBBDBFD5C6F18E8E00CADE18B7999161 (U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopAppAsyncU3Ed__31_SetStateMachine_mA1B39769BBBDBFD5C6F18E8E00CADE18B7999161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopAppAsyncU3Ed__31_SetStateMachine_mA1B39769BBBDBFD5C6F18E8E00CADE18B7999161_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 * _thisAdjusted = reinterpret_cast<U3CStopAppAsyncU3Ed__31_tB1B36F6023EEA70320023D6518D1A95503D78904 *>(__this + _offset);
	U3CStopAppAsyncU3Ed__31_SetStateMachine_mA1B39769BBBDBFD5C6F18E8E00CADE18B7999161(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__29_MoveNext_m1ED5CF1349FD12D2DDDA19FCE92B9719107FC6E2 (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUninstallAppAsyncU3Ed__29_MoveNext_m1ED5CF1349FD12D2DDDA19FCE92B9719107FC6E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * V_2 = NULL;
	TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 9);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0068;
				}
				case 1:
				{
					goto IL_0175;
				}
				case 2:
				{
					goto IL_025c;
				}
				case 3:
				{
					goto IL_02cc;
				}
			}
		}

IL_001d:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_0093;
			}
		}

IL_0025:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_4 = __this->get_targetDevice_4();
			Task_1_t58F31FFD21C53B6FF4981A6ECB23A451A56CCBF2 * L_5 = DevicePortal_GetApplicationInfoAsync_m6277752E297BC7E4699683D69A4081AD64840AF3(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_6 = Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301(L_5, /*hidden argument*/Task_1_GetAwaiter_m391FB4D9FA64226C3A5D93F9CFC51BAC3A9E0301_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m78806763DB11D21F376F81869F72BADAAFA8D997_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0084;
			}
		}

IL_0045:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m74D80FFC20BF889C7D01F98FE70CA4A80AA089BD((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_10, (TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m74D80FFC20BF889C7D01F98FE70CA4A80AA089BD_RuntimeMethod_var);
			goto IL_035d;
		}

IL_0068:
		{
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0084:
		{
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_14 = TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F((TaskAwaiter_1_t12E77A1E8FF3BC2B8F190672E8AAB95020D6BBBD *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC3C6E5F3E312C90A7C922EDCC670E7952597EB1F_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_0093:
		{
			// if (appInfo == null)
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00bc;
			}
		}

IL_009b:
		{
			// Debug.LogWarning($"Application '{packageName}' not found");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA014392C3E204B016EA606A05AF5A6A3C6C4463E, L_17, _stringLiteral76A6AB37C34BE2069368C556BD900065D9AE36FC, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_0349;
		}

IL_00bc:
		{
			// Debug.Log($"Attempting to uninstall {packageName} on {targetDevice.ToString()}...");
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, _stringLiteralF896CECFF02F21B16A9C71E87E40E5C903E56CBE);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF896CECFF02F21B16A9C71E87E40E5C903E56CBE);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
			String_t* L_22 = __this->get_packageName_3();
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, L_22);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_21;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_25 = __this->get_targetDevice_4();
			NullCheck(L_25);
			String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, L_26);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_24;
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, _stringLiteral6EAE3A5B062C6D0D79F070C26E6D62486B40CB46);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6EAE3A5B062C6D0D79F070C26E6D62486B40CB46);
			String_t* L_28 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_28, /*hidden argument*/NULL);
			// string query = $"{string.Format(InstallQuery, FinalizeUrl(targetDevice.IP))}?package={UnityWebRequest.EscapeURL(appInfo.PackageFullName)}";
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_29 = __this->get_targetDevice_4();
			NullCheck(L_29);
			String_t* L_30 = L_29->get_IP_2();
			String_t* L_31 = DevicePortal_FinalizeUrl_mF5BBBE876B7F7A72BA9F98FEAA5B87A9944EF87E(L_30, /*hidden argument*/NULL);
			String_t* L_32 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8EABC73A6C6505C4109358A33216B58D3A2C97E0, L_31, /*hidden argument*/NULL);
			ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 * L_33 = __this->get_appInfo_2();
			NullCheck(L_33);
			String_t* L_34 = L_33->get_PackageFullName_2();
			String_t* L_35 = UnityWebRequest_EscapeURL_m95ACCD28C59C1A12E4CAF186002A31C84A7CA13F(L_34, /*hidden argument*/NULL);
			String_t* L_36 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_32, _stringLiteral3B6BEF4AFC5F978BAC9AA67CD3499B1CDFE59341, L_35, /*hidden argument*/NULL);
			// var response = await Rest.DeleteAsync(query, targetDevice.Authorization, readResponseData: true);
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_37 = __this->get_targetDevice_4();
			NullCheck(L_37);
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_38 = DeviceInfo_get_Authorization_mC7627D03B7E4F99F375C2DA9F8C2682BD267E967(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t210DC57292CFAC51B17AF1CC0C122E64CE6B7123_il2cpp_TypeInfo_var);
			Task_1_tB2CC3B1C02406BA097E6F362488BE06085FDC326 * L_39 = Rest_DeleteAsync_mAF3F4760488F7C5B3BA069C8C31917478E23D4E5(L_36, L_38, (-1), (bool)1, /*hidden argument*/NULL);
			NullCheck(L_39);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_40 = Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6(L_39, /*hidden argument*/Task_1_GetAwaiter_m99D8C9A0F30E2B0A1B2ABEE75DEEF3D903C574B6_RuntimeMethod_var);
			V_5 = L_40;
			bool L_41 = TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3203C378C01656F2843FC159F51437282A1A562D_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_0192;
			}
		}

IL_0151:
		{
			int32_t L_42 = 1;
			V_0 = L_42;
			__this->set_U3CU3E1__state_0(L_42);
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_43 = V_5;
			__this->set_U3CU3Eu__2_7(L_43);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_44 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_mD87BD1DB9C9D8B391277791ACFC42EE46B6045C5((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_44, (TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_mD87BD1DB9C9D8B391277791ACFC42EE46B6045C5_RuntimeMethod_var);
			goto IL_035d;
		}

IL_0175:
		{
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3  L_45 = __this->get_U3CU3Eu__2_7();
			V_5 = L_45;
			TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 * L_46 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 ));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
		}

IL_0192:
		{
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_48 = TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E((TaskAwaiter_1_tF997142C75A3CC55E4694AC502A2D8D92BA501E3 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m02CECAE82E23BE01610B66D1FB6639B3237A5E3E_RuntimeMethod_var);
			V_4 = L_48;
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584  L_49 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_49);
			// if (response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_50 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_51 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_50, /*hidden argument*/NULL);
			if (!L_51)
			{
				goto IL_01f4;
			}
		}

IL_01b0:
		{
			// Debug.Log($"Successfully uninstalled {packageName} on {targetDevice.ToString()}.");
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_52 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_53 = L_52;
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, _stringLiteral0DBD69F7278A03A086F884D2F7A027E897AC964A);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0DBD69F7278A03A086F884D2F7A027E897AC964A);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_54 = L_53;
			String_t* L_55 = __this->get_packageName_3();
			NullCheck(L_54);
			ArrayElementTypeCheck (L_54, L_55);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_55);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_56 = L_54;
			NullCheck(L_56);
			ArrayElementTypeCheck (L_56, _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_57 = L_56;
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_58 = __this->get_targetDevice_4();
			NullCheck(L_58);
			String_t* L_59 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
			NullCheck(L_57);
			ArrayElementTypeCheck (L_57, L_59);
			(L_57)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_59);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_60 = L_57;
			NullCheck(L_60);
			ArrayElementTypeCheck (L_60, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
			String_t* L_61 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_60, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_61, /*hidden argument*/NULL);
			// }
			goto IL_032c;
		}

IL_01f4:
		{
			// if (!response.Successful)
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_62 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_63 = Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_62, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_032c;
			}
		}

IL_0204:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_64 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_65 = Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_64, /*hidden argument*/NULL);
			V_6 = (bool)((((int64_t)L_65) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_66 = V_6;
			if (!L_66)
			{
				goto IL_0282;
			}
		}

IL_021d:
		{
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_67 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_68 = DevicePortal_RefreshCsrfTokenAsync_m818938FD4416F0626D61E54C8C283A4B7FCA0C96(L_67, /*hidden argument*/NULL);
			NullCheck(L_68);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_69 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_68, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_69;
			bool L_70 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_0279;
			}
		}

IL_0238:
		{
			int32_t L_71 = 2;
			V_0 = L_71;
			__this->set_U3CU3E1__state_0(L_71);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_72 = V_7;
			__this->set_U3CU3Eu__3_8(L_72);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_73 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_73, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738_RuntimeMethod_var);
			goto IL_035d;
		}

IL_025c:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_74 = __this->get_U3CU3Eu__3_8();
			V_7 = L_74;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_75 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_75, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_76 = (-1);
			V_0 = L_76;
			__this->set_U3CU3E1__state_0(L_76);
		}

IL_0279:
		{
			bool L_77 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_6 = L_77;
		}

IL_0282:
		{
			bool L_78 = V_6;
			if (!L_78)
			{
				goto IL_02f3;
			}
		}

IL_0286:
		{
			// return await UninstallAppAsync(packageName, targetDevice);
			String_t* L_79 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_80 = __this->get_targetDevice_4();
			Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_81 = DevicePortal_UninstallAppAsync_mED2CB89DC895F96BEBBE4D3267E1BF70B99C2DB1(L_79, L_80, (ApplicationInfo_tCD64E213C0E2CB64A35890ECAAECEF875DE918E5 *)NULL, /*hidden argument*/NULL);
			NullCheck(L_81);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_82 = Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E(L_81, /*hidden argument*/Task_1_GetAwaiter_mACFDCEB6FCFDFCFADAD84AB06A6DC16BAE77948E_RuntimeMethod_var);
			V_7 = L_82;
			bool L_83 = TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m7ECE93027AD658270C0DFB01815F5D94FD560A8B_RuntimeMethod_var);
			if (L_83)
			{
				goto IL_02e9;
			}
		}

IL_02a8:
		{
			int32_t L_84 = 3;
			V_0 = L_84;
			__this->set_U3CU3E1__state_0(L_84);
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_85 = V_7;
			__this->set_U3CU3Eu__3_8(L_85);
			AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_86 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_86, (TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090_TisU3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0_m45B7CD51EF4E92EC8F654D4DF70DE121FB613738_RuntimeMethod_var);
			goto IL_035d;
		}

IL_02cc:
		{
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090  L_87 = __this->get_U3CU3Eu__3_8();
			V_7 = L_87;
			TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 * L_88 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_88, sizeof(TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 ));
			int32_t L_89 = (-1);
			V_0 = L_89;
			__this->set_U3CU3E1__state_0(L_89);
		}

IL_02e9:
		{
			bool L_90 = TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8((TaskAwaiter_1_tFD52D9BC245E2C60016F2E6F4CC4A15361418090 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m77546DD82B46E6BAAAA79AB5F1BBCD2567E0F7F8_RuntimeMethod_var);
			V_1 = L_90;
			goto IL_0349;
		}

IL_02f3:
		{
			// Debug.LogError($"Failed to uninstall {packageName} on {targetDevice.ToString()}");
			String_t* L_91 = __this->get_packageName_3();
			DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_92 = __this->get_targetDevice_4();
			NullCheck(L_92);
			String_t* L_93 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
			String_t* L_94 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral46A380659F7AD7F957D8BD60A988076AA967E641, L_91, _stringLiteralBAC8E74F0524D954F9DBC7D9037227D1245A917A, L_93, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_94, /*hidden argument*/NULL);
			// Debug.LogError(response.ResponseBody);
			Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * L_95 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_96 = Response_get_ResponseBody_m3FA84DC28B9E3879772C7B7CFDACE18B118F55CC((Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 *)L_95, /*hidden argument*/NULL);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_96, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_0349;
		}

IL_032c:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0349;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0330;
		throw e;
	}

CATCH_0330:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_97 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_98 = V_8;
		AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_97, L_98, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m21285A09F0A9D6C0F245EB498300064F66DAAF18_RuntimeMethod_var);
		goto IL_035d;
	} // end catch (depth: 1)

IL_0349:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_99 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_100 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_99, L_100, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mCF07BE7A4F16080B49751FF5A4159E2ADDAC723F_RuntimeMethod_var);
	}

IL_035d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUninstallAppAsyncU3Ed__29_MoveNext_m1ED5CF1349FD12D2DDDA19FCE92B9719107FC6E2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * _thisAdjusted = reinterpret_cast<U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *>(__this + _offset);
	U3CUninstallAppAsyncU3Ed__29_MoveNext_m1ED5CF1349FD12D2DDDA19FCE92B9719107FC6E2(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal_<UninstallAppAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__29_SetStateMachine_m7A9913B11A67F6443E783539547DD39265712072 (U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUninstallAppAsyncU3Ed__29_SetStateMachine_m7A9913B11A67F6443E783539547DD39265712072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60((AsyncTaskMethodBuilder_1_t37B8301A93B487253B9622D00C44195BE042E4BE *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6C16FFAECC8CE76F82289A87141A9524F5B09C60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUninstallAppAsyncU3Ed__29_SetStateMachine_m7A9913B11A67F6443E783539547DD39265712072_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 * _thisAdjusted = reinterpret_cast<U3CUninstallAppAsyncU3Ed__29_tAE0E986DE4E03CDBA8AAB22129A98FF5D2128DE0 *>(__this + _offset);
	U3CUninstallAppAsyncU3Ed__29_SetStateMachine_m7A9913B11A67F6443E783539547DD39265712072(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortalConnections::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePortalConnections__ctor_mC8AB6AE674767BB0B508AAE8265B1C6FC7B02CA1 (DevicePortalConnections_tAA4C6923646B9EF95D22BD96A595D1E1A39D7323 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DevicePortalConnections__ctor_mC8AB6AE674767BB0B508AAE8265B1C6FC7B02CA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<DeviceInfo> Connections = new List<DeviceInfo>(0);
		List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * L_0 = (List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 *)il2cpp_codegen_object_new(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258_il2cpp_TypeInfo_var);
		List_1__ctor_m9F1D6F4CD867D8E61EFC52F83376327F862C9FAF(L_0, 0, /*hidden argument*/List_1__ctor_m9F1D6F4CD867D8E61EFC52F83376327F862C9FAF_RuntimeMethod_var);
		__this->set_Connections_0(L_0);
		// public DevicePortalConnections() { }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// public DevicePortalConnections() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortalConnections::.ctor(Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePortalConnections__ctor_m9E0A633B4C62CEF35A5779D07E5A0A90FD9B439D (DevicePortalConnections_tAA4C6923646B9EF95D22BD96A595D1E1A39D7323 * __this, DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * ___deviceInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DevicePortalConnections__ctor_m9E0A633B4C62CEF35A5779D07E5A0A90FD9B439D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<DeviceInfo> Connections = new List<DeviceInfo>(0);
		List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * L_0 = (List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 *)il2cpp_codegen_object_new(List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258_il2cpp_TypeInfo_var);
		List_1__ctor_m9F1D6F4CD867D8E61EFC52F83376327F862C9FAF(L_0, 0, /*hidden argument*/List_1__ctor_m9F1D6F4CD867D8E61EFC52F83376327F862C9FAF_RuntimeMethod_var);
		__this->set_Connections_0(L_0);
		// public DevicePortalConnections(DeviceInfo deviceInfo)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Connections.Add(deviceInfo);
		List_1_tD309F87B155899DCDD49ADD29CD468516B4B6258 * L_1 = __this->get_Connections_0();
		DeviceInfo_t4759E69F7A2FC7EC884C90680D51D67B2CB73CC8 * L_2 = ___deviceInfo0;
		NullCheck(L_1);
		List_1_Add_m75DAE88C71233B38F4AB2144C29EFE60D819995C(L_1, L_2, /*hidden argument*/List_1_Add_m75DAE88C71233B38F4AB2144C29EFE60D819995C_RuntimeMethod_var);
		// }
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
IL2CPP_EXTERN_C void FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshal_pinvoke(const FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4& unmarshaled, FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_pinvoke& marshaled)
{
	marshaled.___CurrentDir_0 = il2cpp_codegen_marshal_string(unmarshaled.get_CurrentDir_0());
	marshaled.___DateCreated_1 = unmarshaled.get_DateCreated_1();
	marshaled.___FileSize_2 = unmarshaled.get_FileSize_2();
	marshaled.___Id_3 = il2cpp_codegen_marshal_string(unmarshaled.get_Id_3());
	marshaled.___Name_4 = il2cpp_codegen_marshal_string(unmarshaled.get_Name_4());
	marshaled.___SubPath_5 = il2cpp_codegen_marshal_string(unmarshaled.get_SubPath_5());
	marshaled.___Type_6 = unmarshaled.get_Type_6();
}
IL2CPP_EXTERN_C void FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshal_pinvoke_back(const FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_pinvoke& marshaled, FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4& unmarshaled)
{
	unmarshaled.set_CurrentDir_0(il2cpp_codegen_marshal_string_result(marshaled.___CurrentDir_0));
	int32_t unmarshaled_DateCreated_temp_1 = 0;
	unmarshaled_DateCreated_temp_1 = marshaled.___DateCreated_1;
	unmarshaled.set_DateCreated_1(unmarshaled_DateCreated_temp_1);
	int32_t unmarshaled_FileSize_temp_2 = 0;
	unmarshaled_FileSize_temp_2 = marshaled.___FileSize_2;
	unmarshaled.set_FileSize_2(unmarshaled_FileSize_temp_2);
	unmarshaled.set_Id_3(il2cpp_codegen_marshal_string_result(marshaled.___Id_3));
	unmarshaled.set_Name_4(il2cpp_codegen_marshal_string_result(marshaled.___Name_4));
	unmarshaled.set_SubPath_5(il2cpp_codegen_marshal_string_result(marshaled.___SubPath_5));
	int32_t unmarshaled_Type_temp_6 = 0;
	unmarshaled_Type_temp_6 = marshaled.___Type_6;
	unmarshaled.set_Type_6(unmarshaled_Type_temp_6);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
IL2CPP_EXTERN_C void FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshal_pinvoke_cleanup(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___CurrentDir_0);
	marshaled.___CurrentDir_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Id_3);
	marshaled.___Id_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Name_4);
	marshaled.___Name_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___SubPath_5);
	marshaled.___SubPath_5 = NULL;
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
IL2CPP_EXTERN_C void FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshal_com(const FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4& unmarshaled, FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_com& marshaled)
{
	marshaled.___CurrentDir_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_CurrentDir_0());
	marshaled.___DateCreated_1 = unmarshaled.get_DateCreated_1();
	marshaled.___FileSize_2 = unmarshaled.get_FileSize_2();
	marshaled.___Id_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Id_3());
	marshaled.___Name_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Name_4());
	marshaled.___SubPath_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_SubPath_5());
	marshaled.___Type_6 = unmarshaled.get_Type_6();
}
IL2CPP_EXTERN_C void FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshal_com_back(const FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_com& marshaled, FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4& unmarshaled)
{
	unmarshaled.set_CurrentDir_0(il2cpp_codegen_marshal_bstring_result(marshaled.___CurrentDir_0));
	int32_t unmarshaled_DateCreated_temp_1 = 0;
	unmarshaled_DateCreated_temp_1 = marshaled.___DateCreated_1;
	unmarshaled.set_DateCreated_1(unmarshaled_DateCreated_temp_1);
	int32_t unmarshaled_FileSize_temp_2 = 0;
	unmarshaled_FileSize_temp_2 = marshaled.___FileSize_2;
	unmarshaled.set_FileSize_2(unmarshaled_FileSize_temp_2);
	unmarshaled.set_Id_3(il2cpp_codegen_marshal_bstring_result(marshaled.___Id_3));
	unmarshaled.set_Name_4(il2cpp_codegen_marshal_bstring_result(marshaled.___Name_4));
	unmarshaled.set_SubPath_5(il2cpp_codegen_marshal_bstring_result(marshaled.___SubPath_5));
	int32_t unmarshaled_Type_temp_6 = 0;
	unmarshaled_Type_temp_6 = marshaled.___Type_6;
	unmarshaled.set_Type_6(unmarshaled_Type_temp_6);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileInfo
IL2CPP_EXTERN_C void FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshal_com_cleanup(FileInfo_t1304A25D10C436E948B28B098DFBAE426782A6F4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___CurrentDir_0);
	marshaled.___CurrentDir_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Id_3);
	marshaled.___Id_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_4);
	marshaled.___Name_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___SubPath_5);
	marshaled.___SubPath_5 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.FileList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileList__ctor_mD42C2E9AD2BCBD6B576D08B52CE70A433210F105 (FileList_t518F366914A5D44DE1B036BAA85CA65F581A3165 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstallStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallStatus__ctor_mF5DA23D3349B10FB775D3D233E2D567257052DA4 (InstallStatus_t49A6F1E0E3A0970EF9D2F0726EBB52D684B559B6 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstalledApps__ctor_m7EDF948DB972F6B34672FBF48A5686519C89AF57 (InstalledApps_tA833026A2B09FF11E02580FD3F6206E082174E15 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InterfaceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceInfo__ctor_mBFEF7206332B5AA5569671B2B01CC970CF115C21 (InterfaceInfo_t0127527B0553BF8597E79C2FE2826C5670EF1864 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpAddressInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IpAddressInfo__ctor_mFE884E7C992776672D7A15229B6C00764BE12D38 (IpAddressInfo_t74B44737FA45169AB3180F437756B4F04EDFBBC5 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IpConfigInfo__ctor_m02A8732015653730A84F6E9FB60881ADECB48028 (IpConfigInfo_tD0976F25291C176FD9C96B956E2FFBCEEC83AFE0 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MachineName__ctor_mC1AFDE1817C5ACAA3656E3DAB4A19894630E50B5 (MachineName_tBA926D8E198BC7994CB9A60D12CCF8C6CCCC341B * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkInterfaces__ctor_m73C7F39E640DE9D5DBC35E44DA2498AD5AB15C3D (NetworkInterfaces_t35B34FBB0AD6B0F82322483FD889275CC4F2C22E * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkProfileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProfileInfo__ctor_mE22611731AFA01C969ED8FB8E1E9B816BDF28976 (NetworkProfileInfo_t4E4CF9305AE7AA174C30AD7477B5BFD2C0CC15B8 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerStateInfo__ctor_m0F1EB81FDE8C029A0389F30009EC83D892B54C0F (PowerStateInfo_tC00E7176BE3F4C3D580FC8437C119E5CEEC189AB * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessInfo__ctor_m16518119F2D408FEC7BE061F8414F1A26AB66925 (ProcessInfo_t4FA6EC270C82AE7FED537A84CE0E9C9DEF850FC7 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ProcessList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessList__ctor_m6F49DD491797CFF3186DEEDE9B4560C58AD6EF85 (ProcessList_t1DA7713E38986C8053CE6AE850A726C04BF81355 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsDevicePortal.WirelessNetworkInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WirelessNetworkInfo__ctor_mB4258F04210F5ED7DAFE8C9822D621279BFF2D5A (WirelessNetworkInfo_tB66DE96B6F78E22D052F9C6F2DECD6AEA2B1783C * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m89AABBB97CE782144DB63A6FFCF47B009C167614 (IsReadOnlyAttribute_tF557E5B102336CF23E33FF09270CB81EAB2E1029 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Response_get_Successful_m00D8F46FFF96846E1F32FF4E3AC0F06912E11D4B_inline (Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * __this, const RuntimeMethod* method)
{
	{
		// public bool Successful { get; }
		bool L_0 = __this->get_U3CSuccessfulU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Response_get_ResponseCode_m27F443988E7ED0F51D8A3F4BD0DE66BEBF94495F_inline (Response_t5BFDEF1F726D39CDF6E01BA9E04089DCCEAB0584 * __this, const RuntimeMethod* method)
{
	{
		// public long ResponseCode { get; }
		int64_t L_0 = __this->get_U3CResponseCodeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m219ED5CB30C4CC801ED9E04339285E92AE3B22EF_inline (SimpleCoroutineAwaiter_tD042BFD96CE212BE46A189E9E9E9ED6A94D7AEA0 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
