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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// agora_gaming_rtc.AgoraCallbackObject
struct AgoraCallbackObject_t0D5D07510A1B3D9E78206DDB3C17D0C9AEE2B580;
// agora_gaming_rtc.AudioEffectManagerImpl
struct AudioEffectManagerImpl_tEEE18FDD7EDF410A1EC9200722B68834E96F2F53;
// agora_gaming_rtc.AudioPlaybackDeviceManager
struct AudioPlaybackDeviceManager_t0CC36B1B5E9F977BABFFDE95C846ED960AF252F8;
// agora_gaming_rtc.AudioRawDataManager
struct AudioRawDataManager_tCB9E121DC1E9E16694307C560A1CD2B108A2E4F5;
// agora_gaming_rtc.AudioRecordingDeviceManager
struct AudioRecordingDeviceManager_t00FF0F998F0416E5BD5F2B988520CFF374D32123;
// agora_gaming_rtc.IRtcEngine
struct IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6;
// agora_gaming_rtc.IRtcEngineNative/EngineEventOnCaptureVideoFrame
struct EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D;
// agora_gaming_rtc.IRtcEngineNative/EngineEventOnRenderVideoFrame
struct EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E;
// agora_gaming_rtc.IVideoDeviceManager
struct IVideoDeviceManager_t1520D38B302B313429518593232E009148831921;
// agora_gaming_rtc.IVideoRawDataManager
struct IVideoRawDataManager_t29B89A66232A0C71D6A86705B833BB2080742038;
// agora_gaming_rtc.IVideoRender
struct IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487;
// agora_gaming_rtc.OnActiveSpeakerHandler
struct OnActiveSpeakerHandler_t68546C642365B222F94618898243F480770C4706;
// agora_gaming_rtc.OnApiExecutedHandler
struct OnApiExecutedHandler_tF4DA06E8EEBB8E5E2B623EE6FC9DF5C7CD8AD101;
// agora_gaming_rtc.OnAudioDeviceStateChangedHandler
struct OnAudioDeviceStateChangedHandler_t2DC8AB589EE49A6F1E7C7947BE34DB1236499A93;
// agora_gaming_rtc.OnAudioDeviceVolumeChangedHandler
struct OnAudioDeviceVolumeChangedHandler_tEE346951A1AC4079FABC982371ADBD152D798F20;
// agora_gaming_rtc.OnAudioEffectFinishedHandler
struct OnAudioEffectFinishedHandler_t9EFA77E7D5C53883A97970E48C91992673718563;
// agora_gaming_rtc.OnAudioMixingFinishedHandler
struct OnAudioMixingFinishedHandler_tBD623F4F6825F3664FB19E662CCF4DCBF57A4681;
// agora_gaming_rtc.OnAudioMixingStateChangedHandler
struct OnAudioMixingStateChangedHandler_t96BAA401FB33827536D15FB1ACB7EEFF44A8A427;
// agora_gaming_rtc.OnAudioQualityHandler
struct OnAudioQualityHandler_t46763914244BC0DA494D9E5003405E4BBE4EE194;
// agora_gaming_rtc.OnAudioRouteChangedHandler
struct OnAudioRouteChangedHandler_t58D793BF381E9BD8DA588FC8F250DA014D459606;
// agora_gaming_rtc.OnCameraExposureAreaChangedHandler
struct OnCameraExposureAreaChangedHandler_tD8392F871DE0231E92537D1790392817D2EBFEF7;
// agora_gaming_rtc.OnCameraFocusAreaChangedHandler
struct OnCameraFocusAreaChangedHandler_t2098D6E61A974B6EA9882DA0F209B927A707304E;
// agora_gaming_rtc.OnCameraReadyHandler
struct OnCameraReadyHandler_tB855A0B49B6D86457FEB8B0679D97F988CCCCEE2;
// agora_gaming_rtc.OnChannelMediaRelayEventHandler
struct OnChannelMediaRelayEventHandler_tA23B17DFEA93DA780FF8FB11A5DDE6B383E6A0B6;
// agora_gaming_rtc.OnChannelMediaRelayStateChangedHandler
struct OnChannelMediaRelayStateChangedHandler_t0006D48B86275805D7B32226E2B6CC7DA0BDBF8D;
// agora_gaming_rtc.OnClientRoleChangedHandler
struct OnClientRoleChangedHandler_tBC27D4F337D3C8673E56B8A7E90D2F8A78CB56C7;
// agora_gaming_rtc.OnConnectionBannedHandler
struct OnConnectionBannedHandler_t1315929B79FAEEEA91969CEA0F644DDB5A5985C5;
// agora_gaming_rtc.OnConnectionInterruptedHandler
struct OnConnectionInterruptedHandler_t1BAD7BC631108C6A438FB827FA20E233BF9ADAD5;
// agora_gaming_rtc.OnConnectionLostHandler
struct OnConnectionLostHandler_tEAB7CD42E16260F8F98D8792330B8375F8C5AA5A;
// agora_gaming_rtc.OnConnectionStateChangedHandler
struct OnConnectionStateChangedHandler_tC8B646ED0B4D85D0F0CDE98C6208D1567514E6B6;
// agora_gaming_rtc.OnFacePositionChangedHandler
struct OnFacePositionChangedHandler_tECDAB5467B5165EAB4D26FB360C0C4A007D2BF1B;
// agora_gaming_rtc.OnFirstLocalAudioFrameHandler
struct OnFirstLocalAudioFrameHandler_t8AD7683F20087584FEEC19083E496F6B1237523F;
// agora_gaming_rtc.OnFirstLocalVideoFrameHandler
struct OnFirstLocalVideoFrameHandler_t746F42D17BB2F175916A8B42D47981C7163400E3;
// agora_gaming_rtc.OnFirstRemoteAudioDecodedHandler
struct OnFirstRemoteAudioDecodedHandler_tE5EF33D27BD0D8CDE019F9A3D4169451CA6A49BB;
// agora_gaming_rtc.OnFirstRemoteAudioFrameHandler
struct OnFirstRemoteAudioFrameHandler_t13A3A271BCCB8FCB62A688938D4E5074DE014FD1;
// agora_gaming_rtc.OnFirstRemoteVideoDecodedHandler
struct OnFirstRemoteVideoDecodedHandler_t42E1C18EAE26EEFB9A3E7E6385A92EDA0F1E887E;
// agora_gaming_rtc.OnFirstRemoteVideoFrameHandler
struct OnFirstRemoteVideoFrameHandler_t638ACAF63C178E642BF11720414D81E90796BE8E;
// agora_gaming_rtc.OnJoinChannelSuccessHandler
struct OnJoinChannelSuccessHandler_t73CD1B13B07C0DF36FE2F9DE608BD63E60FC1753;
// agora_gaming_rtc.OnLastmileProbeResultHandler
struct OnLastmileProbeResultHandler_tE294E782F2B8C5903478E7AC78D6DA4BA6938B55;
// agora_gaming_rtc.OnLastmileQualityHandler
struct OnLastmileQualityHandler_t77257F621AE1839F0D5B271FCD9DF7EEFCD73127;
// agora_gaming_rtc.OnLeaveChannelHandler
struct OnLeaveChannelHandler_t3FD5E27AE016493C6D8D9C6BC72982A06B494B7A;
// agora_gaming_rtc.OnLocalAudioStateChangedHandler
struct OnLocalAudioStateChangedHandler_tBE769275F07052AD8CB8C12FF6175E752D61080F;
// agora_gaming_rtc.OnLocalAudioStatsHandler
struct OnLocalAudioStatsHandler_t00BB8885CC665DA8F44FA0296AE93A5BE93AD061;
// agora_gaming_rtc.OnLocalPublishFallbackToAudioOnlyHandler
struct OnLocalPublishFallbackToAudioOnlyHandler_t758E6955449970234BFEF4D8CDF1E7DBE78BF188;
// agora_gaming_rtc.OnLocalUserRegisteredHandler
struct OnLocalUserRegisteredHandler_tDEC8D6B725F730F1447C11F09772EB9C789F5A64;
// agora_gaming_rtc.OnLocalVideoStateChangedHandler
struct OnLocalVideoStateChangedHandler_t9A37E514FD8C3305CA1F9130B59577DEE5DE7432;
// agora_gaming_rtc.OnLocalVideoStatsHandler
struct OnLocalVideoStatsHandler_t2162B3E9581B98A1D81676E447E8A7F764E57F70;
// agora_gaming_rtc.OnMediaEngineLoadSuccessHandler
struct OnMediaEngineLoadSuccessHandler_tB9E3FE65A30FCCF3A17F9C7CCD98820ECE5EF6DC;
// agora_gaming_rtc.OnMediaEngineStartCallSuccessHandler
struct OnMediaEngineStartCallSuccessHandler_t207D94A03F311B0E97D18668BB6CEA6D3B7EF07C;
// agora_gaming_rtc.OnMicrophoneEnabledHandler
struct OnMicrophoneEnabledHandler_t46A38931501DA1C70609D9770B15285E66705188;
// agora_gaming_rtc.OnNetworkQualityHandler
struct OnNetworkQualityHandler_t096FB39D835EE4A8C94595EDC784C3B3631F5B0E;
// agora_gaming_rtc.OnNetworkTypeChangedHandler
struct OnNetworkTypeChangedHandler_tDF04336650580F79333AF2DF79A13FC299FFBB80;
// agora_gaming_rtc.OnReJoinChannelSuccessHandler
struct OnReJoinChannelSuccessHandler_t5F4F7E73CF8DB6B7016D56DF481B9C214D334455;
// agora_gaming_rtc.OnRemoteAudioMixingBeginHandler
struct OnRemoteAudioMixingBeginHandler_t527208495C8D1910C2289F942A4682D67C0EE6A0;
// agora_gaming_rtc.OnRemoteAudioMixingEndHandler
struct OnRemoteAudioMixingEndHandler_t98C03E049F02C17279B559B8CA046A71ACF0A73A;
// agora_gaming_rtc.OnRemoteAudioStateChangedHandler
struct OnRemoteAudioStateChangedHandler_t83561E5560F82EFD57BBEEA1573F24DD95A0EB9C;
// agora_gaming_rtc.OnRemoteAudioStatsHandler
struct OnRemoteAudioStatsHandler_t9E64F16570DCDEBA6FD892F7901ACDD14F218AAA;
// agora_gaming_rtc.OnRemoteAudioTransportStatsHandler
struct OnRemoteAudioTransportStatsHandler_tCC4062D17FC15A9D061A4CF0FDFF9EC5F28B471C;
// agora_gaming_rtc.OnRemoteSubscribeFallbackToAudioOnlyHandler
struct OnRemoteSubscribeFallbackToAudioOnlyHandler_t10D837C3DFA499D03DB171AC16E973BD583D7708;
// agora_gaming_rtc.OnRemoteVideoStateChangedHandler
struct OnRemoteVideoStateChangedHandler_tB3E19B98A83F112B37279D2C4D29D05A24C6F370;
// agora_gaming_rtc.OnRemoteVideoStatsHandler
struct OnRemoteVideoStatsHandler_tDC13C73486A0A3FC0E604A5095C6CDF269635E7F;
// agora_gaming_rtc.OnRemoteVideoTransportStatsHandler
struct OnRemoteVideoTransportStatsHandler_t9A265EE8ACB968970E50FA99CD3700491BD6B2D8;
// agora_gaming_rtc.OnRequestTokenHandler
struct OnRequestTokenHandler_t540953E3CD08F51CD486CAA5ED56084B9095F9D7;
// agora_gaming_rtc.OnRtcStatsHandler
struct OnRtcStatsHandler_tBE6055EA2A77088214835306D7125F3B3660D31B;
// agora_gaming_rtc.OnRtmpStreamingStateChangedHandler
struct OnRtmpStreamingStateChangedHandler_t3C2A5FB1A3ED864B8990B62B3D0AA2210F9812A5;
// agora_gaming_rtc.OnSDKErrorHandler
struct OnSDKErrorHandler_tD6AD538D93363444EC3BEC56ED8786F74A4DB673;
// agora_gaming_rtc.OnSDKWarningHandler
struct OnSDKWarningHandler_t7657421944756733E43C91352D2E802681CD92A4;
// agora_gaming_rtc.OnStreamInjectedStatusHandler
struct OnStreamInjectedStatusHandler_tE47D8E92DCBE9E474C0F0C4484142FAB24CF1153;
// agora_gaming_rtc.OnStreamMessageErrorHandler
struct OnStreamMessageErrorHandler_tB0945E7DF967CE9DB7D82F8BF30BF53A10D254F6;
// agora_gaming_rtc.OnStreamMessageHandler
struct OnStreamMessageHandler_tF058796C4BDD0B2CEA3EDF6BD52E6843775EEC1C;
// agora_gaming_rtc.OnStreamPublishedHandler
struct OnStreamPublishedHandler_t4B4CD0F6A09DBF4327FD5C237912EE4CAF372B31;
// agora_gaming_rtc.OnStreamUnpublishedHandler
struct OnStreamUnpublishedHandler_t457D7CE70D789065FB51943D61C0F33D5D13334F;
// agora_gaming_rtc.OnTokenPrivilegeWillExpireHandler
struct OnTokenPrivilegeWillExpireHandler_t25E6354B5523D493D2D9085AAA8B2EE39854ABFF;
// agora_gaming_rtc.OnTranscodingUpdatedHandler
struct OnTranscodingUpdatedHandler_tE31A572FB12BDC8CE02F0B3C168CF1C45CDE8958;
// agora_gaming_rtc.OnUserEnableLocalVideoHandler
struct OnUserEnableLocalVideoHandler_t88771F2EE86B70DA07A98537312951637DAA530F;
// agora_gaming_rtc.OnUserEnableVideoHandler
struct OnUserEnableVideoHandler_t0D2C75CA2616214B3BDCCC60C791CC83F32AE80A;
// agora_gaming_rtc.OnUserInfoUpdatedHandler
struct OnUserInfoUpdatedHandler_t8E3243D899ADD660AA8A51B6F93AAFC881361D97;
// agora_gaming_rtc.OnUserJoinedHandler
struct OnUserJoinedHandler_t4473A778B54D4A2D8A3AAD468B6B19D843197A99;
// agora_gaming_rtc.OnUserMuteVideoHandler
struct OnUserMuteVideoHandler_t307E824D89113B976754058CB20B5220FD6354FE;
// agora_gaming_rtc.OnUserMutedAudioHandler
struct OnUserMutedAudioHandler_tCB49B5A94ED995225E140417CE96477FF05A301C;
// agora_gaming_rtc.OnUserOfflineHandler
struct OnUserOfflineHandler_tE7C2A990D7CF5207AD04D00EE2005AF6557FAECB;
// agora_gaming_rtc.OnVideoDeviceStateChangedHandler
struct OnVideoDeviceStateChangedHandler_t560B6E3CDC6F0A01EE7F7C709DF0662904A2C949;
// agora_gaming_rtc.OnVideoSizeChangedHandler
struct OnVideoSizeChangedHandler_t28A6337896AF42D5F59FB58021257417B3BA8394;
// agora_gaming_rtc.OnVideoStoppedHandler
struct OnVideoStoppedHandler_t6303E38108B2AF5B35B599DC54E027075CE38239;
// agora_gaming_rtc.OnVolumeIndicationHandler
struct OnVolumeIndicationHandler_t604294786D48EFFC1D8FCB4537AC2BE1183BFB8B;
// agora_gaming_rtc.VideoDeviceManager
struct VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F;
// agora_gaming_rtc.VideoFrame
struct VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732;
// agora_gaming_rtc.VideoRawDataManager
struct VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8;
// agora_gaming_rtc.VideoRawDataManager/OnCaptureVideoFrameHandler
struct OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887;
// agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler
struct OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887;
// agora_gaming_rtc.VideoRender
struct VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9;
// agora_gaming_rtc.VideoSurface
struct VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057DC44675D60B9CD4EA0D603B60EC9D721B555B;
IL2CPP_EXTERN_C String_t* _stringLiteral1956A1727128710CED91B4BF7F2079B9822F7299;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1E28971821B4847251537B8289EF89BFF05C5F;
IL2CPP_EXTERN_C String_t* _stringLiteral61A475E6D484787DBA53F4FB5609CED49853790D;
IL2CPP_EXTERN_C String_t* _stringLiteral84482913C1CA9BFFF93109C33E6F243912FEB21E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9FEB22632D4A310386085BA1326CE470BDB20C;
IL2CPP_EXTERN_C String_t* _stringLiteralB5F7B77EF041F1E71600419488BA53F3FE8FC71B;
IL2CPP_EXTERN_C String_t* _stringLiteralC30BD690DC5FFC7C8CD9DEE71BC38F4DF0DC64E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD96D4236D23AAA5699A240BADBE0E97108BBB757;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287AssemblyU2DCSharp3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCaptureVideoFrameHandler_BeginInvoke_mEF7EC0B336589944372C22F26ED1FAA306E3EF4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnRenderVideoFrameHandler_BeginInvoke_mB710B6981210D7B69E975295C1E663383A4BD6B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoDeviceManager_GetCurrentVideoDevice_m1ED857016CFD70B027BE671D02086CC9E27FFE66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoDeviceManager_GetInstance_mB48091F5909CF54A90F86BD8DCE82085A1C22DBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoDeviceManager_GetVideoDevice_m59C5167891B83434679552770B43D8A6A0686EB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoDeviceManager_ReleaseInstance_m826DDDF555FB5FAC34D9D29767A9E230CE9A3C16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_GetInstance_m145C0D1E36D156CC4507125831470E58F3C833D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_RegisterVideoRawDataObserver_m225316ADA63DD358B2997E76A8FF9F11590BE8D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_ReleaseInstance_m6BF83C2F8ECCCEAE605F9AD9A5E8E71CBFB3B278_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_SetEngine_m2C076158E5F7315A7BB9E9FA73D9EBB12B0810A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_SetOnCaptureVideoFrameCallback_m4592EB87A146CD588C5ADA7F94C0C3033512EAC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_SetOnRenderVideoFrameCallback_mA2A4CE1335FF204BE16E3CC3F2C0DF207CBDD188_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager_UnRegisterVideoRawDataObserver_m505FECB036DD7178AA57B5E4EB7C9753267E4AAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRawDataManager__ctor_m84AF74CE7DEBAD486A0EDB24A7610FCF16F62044_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRender_GetInstance_m3FE072B7639467FBEB85BC8573B4521426FF4E6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoRender_ReleaseInstance_m35E0D4F7C94D8F86461A448B163E4D9892C3C636_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_GetEngine_m189180578AD3164766DC2EAB7E4908C4B6C226E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_IsBlankTexture_mD2671DAD7F54461E42BCE654EB0528DBF3AE90C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_OnDestroy_mA8253A88D76DDF01E09781508E90E12FE7D7E5AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_SetForMultiChannelUser_m8771DEFA27411CB99CF9A95D94410336D371F5ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_SetForUser_mE04B491A37647B25A99D5062210346BBF7693B33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_Start_m14230F8D3922F150095DD5A722F82C0DD9C065DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_UpdateShader_m75042C254EB66130B8E51161DAF6542623F4E041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface_Update_m3424233C609A797BF82E00E1044449EE685B29A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoSurface__ctor_mC5AAFC7B9F3A3B917527709E0463EFEE58787B5C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732;;
struct VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke;
struct VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke;;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// agora_gaming_rtc.IRtcEngineNative
struct  IRtcEngineNative_tCD84C70A93C9F95C0ADFD30F37D9B4E5D24EFEA2  : public RuntimeObject
{
public:

public:
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// agora_gaming_rtc.IRtcEngine
struct  IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6  : public IRtcEngineNative_tCD84C70A93C9F95C0ADFD30F37D9B4E5D24EFEA2
{
public:
	// agora_gaming_rtc.OnJoinChannelSuccessHandler agora_gaming_rtc.IRtcEngine::OnJoinChannelSuccess
	OnJoinChannelSuccessHandler_t73CD1B13B07C0DF36FE2F9DE608BD63E60FC1753 * ___OnJoinChannelSuccess_1;
	// agora_gaming_rtc.OnReJoinChannelSuccessHandler agora_gaming_rtc.IRtcEngine::OnReJoinChannelSuccess
	OnReJoinChannelSuccessHandler_t5F4F7E73CF8DB6B7016D56DF481B9C214D334455 * ___OnReJoinChannelSuccess_2;
	// agora_gaming_rtc.OnConnectionLostHandler agora_gaming_rtc.IRtcEngine::OnConnectionLost
	OnConnectionLostHandler_tEAB7CD42E16260F8F98D8792330B8375F8C5AA5A * ___OnConnectionLost_3;
	// agora_gaming_rtc.OnConnectionInterruptedHandler agora_gaming_rtc.IRtcEngine::OnConnectionInterrupted
	OnConnectionInterruptedHandler_t1BAD7BC631108C6A438FB827FA20E233BF9ADAD5 * ___OnConnectionInterrupted_4;
	// agora_gaming_rtc.OnRequestTokenHandler agora_gaming_rtc.IRtcEngine::OnRequestToken
	OnRequestTokenHandler_t540953E3CD08F51CD486CAA5ED56084B9095F9D7 * ___OnRequestToken_5;
	// agora_gaming_rtc.OnUserJoinedHandler agora_gaming_rtc.IRtcEngine::OnUserJoined
	OnUserJoinedHandler_t4473A778B54D4A2D8A3AAD468B6B19D843197A99 * ___OnUserJoined_6;
	// agora_gaming_rtc.OnUserOfflineHandler agora_gaming_rtc.IRtcEngine::OnUserOffline
	OnUserOfflineHandler_tE7C2A990D7CF5207AD04D00EE2005AF6557FAECB * ___OnUserOffline_7;
	// agora_gaming_rtc.OnLeaveChannelHandler agora_gaming_rtc.IRtcEngine::OnLeaveChannel
	OnLeaveChannelHandler_t3FD5E27AE016493C6D8D9C6BC72982A06B494B7A * ___OnLeaveChannel_8;
	// agora_gaming_rtc.OnVolumeIndicationHandler agora_gaming_rtc.IRtcEngine::OnVolumeIndication
	OnVolumeIndicationHandler_t604294786D48EFFC1D8FCB4537AC2BE1183BFB8B * ___OnVolumeIndication_9;
	// agora_gaming_rtc.OnUserMutedAudioHandler agora_gaming_rtc.IRtcEngine::OnUserMutedAudio
	OnUserMutedAudioHandler_tCB49B5A94ED995225E140417CE96477FF05A301C * ___OnUserMutedAudio_10;
	// agora_gaming_rtc.OnSDKWarningHandler agora_gaming_rtc.IRtcEngine::OnWarning
	OnSDKWarningHandler_t7657421944756733E43C91352D2E802681CD92A4 * ___OnWarning_11;
	// agora_gaming_rtc.OnSDKErrorHandler agora_gaming_rtc.IRtcEngine::OnError
	OnSDKErrorHandler_tD6AD538D93363444EC3BEC56ED8786F74A4DB673 * ___OnError_12;
	// agora_gaming_rtc.OnRtcStatsHandler agora_gaming_rtc.IRtcEngine::OnRtcStats
	OnRtcStatsHandler_tBE6055EA2A77088214835306D7125F3B3660D31B * ___OnRtcStats_13;
	// agora_gaming_rtc.OnAudioMixingFinishedHandler agora_gaming_rtc.IRtcEngine::OnAudioMixingFinished
	OnAudioMixingFinishedHandler_tBD623F4F6825F3664FB19E662CCF4DCBF57A4681 * ___OnAudioMixingFinished_14;
	// agora_gaming_rtc.OnAudioRouteChangedHandler agora_gaming_rtc.IRtcEngine::OnAudioRouteChanged
	OnAudioRouteChangedHandler_t58D793BF381E9BD8DA588FC8F250DA014D459606 * ___OnAudioRouteChanged_15;
	// agora_gaming_rtc.OnFirstRemoteVideoDecodedHandler agora_gaming_rtc.IRtcEngine::OnFirstRemoteVideoDecoded
	OnFirstRemoteVideoDecodedHandler_t42E1C18EAE26EEFB9A3E7E6385A92EDA0F1E887E * ___OnFirstRemoteVideoDecoded_16;
	// agora_gaming_rtc.OnVideoSizeChangedHandler agora_gaming_rtc.IRtcEngine::OnVideoSizeChanged
	OnVideoSizeChangedHandler_t28A6337896AF42D5F59FB58021257417B3BA8394 * ___OnVideoSizeChanged_17;
	// agora_gaming_rtc.OnClientRoleChangedHandler agora_gaming_rtc.IRtcEngine::OnClientRoleChanged
	OnClientRoleChangedHandler_tBC27D4F337D3C8673E56B8A7E90D2F8A78CB56C7 * ___OnClientRoleChanged_18;
	// agora_gaming_rtc.OnUserMuteVideoHandler agora_gaming_rtc.IRtcEngine::OnUserMuteVideo
	OnUserMuteVideoHandler_t307E824D89113B976754058CB20B5220FD6354FE * ___OnUserMuteVideo_19;
	// agora_gaming_rtc.OnMicrophoneEnabledHandler agora_gaming_rtc.IRtcEngine::OnMicrophoneEnabled
	OnMicrophoneEnabledHandler_t46A38931501DA1C70609D9770B15285E66705188 * ___OnMicrophoneEnabled_20;
	// agora_gaming_rtc.OnFirstRemoteAudioFrameHandler agora_gaming_rtc.IRtcEngine::OnFirstRemoteAudioFrame
	OnFirstRemoteAudioFrameHandler_t13A3A271BCCB8FCB62A688938D4E5074DE014FD1 * ___OnFirstRemoteAudioFrame_21;
	// agora_gaming_rtc.OnFirstLocalAudioFrameHandler agora_gaming_rtc.IRtcEngine::OnFirstLocalAudioFrame
	OnFirstLocalAudioFrameHandler_t8AD7683F20087584FEEC19083E496F6B1237523F * ___OnFirstLocalAudioFrame_22;
	// agora_gaming_rtc.OnApiExecutedHandler agora_gaming_rtc.IRtcEngine::OnApiExecuted
	OnApiExecutedHandler_tF4DA06E8EEBB8E5E2B623EE6FC9DF5C7CD8AD101 * ___OnApiExecuted_23;
	// agora_gaming_rtc.OnLastmileQualityHandler agora_gaming_rtc.IRtcEngine::OnLastmileQuality
	OnLastmileQualityHandler_t77257F621AE1839F0D5B271FCD9DF7EEFCD73127 * ___OnLastmileQuality_24;
	// agora_gaming_rtc.OnAudioQualityHandler agora_gaming_rtc.IRtcEngine::OnAudioQuality
	OnAudioQualityHandler_t46763914244BC0DA494D9E5003405E4BBE4EE194 * ___OnAudioQuality_25;
	// agora_gaming_rtc.OnStreamInjectedStatusHandler agora_gaming_rtc.IRtcEngine::OnStreamInjectedStatus
	OnStreamInjectedStatusHandler_tE47D8E92DCBE9E474C0F0C4484142FAB24CF1153 * ___OnStreamInjectedStatus_26;
	// agora_gaming_rtc.OnStreamUnpublishedHandler agora_gaming_rtc.IRtcEngine::OnStreamUnpublished
	OnStreamUnpublishedHandler_t457D7CE70D789065FB51943D61C0F33D5D13334F * ___OnStreamUnpublished_27;
	// agora_gaming_rtc.OnStreamPublishedHandler agora_gaming_rtc.IRtcEngine::OnStreamPublished
	OnStreamPublishedHandler_t4B4CD0F6A09DBF4327FD5C237912EE4CAF372B31 * ___OnStreamPublished_28;
	// agora_gaming_rtc.OnStreamMessageErrorHandler agora_gaming_rtc.IRtcEngine::OnStreamMessageError
	OnStreamMessageErrorHandler_tB0945E7DF967CE9DB7D82F8BF30BF53A10D254F6 * ___OnStreamMessageError_29;
	// agora_gaming_rtc.OnStreamMessageHandler agora_gaming_rtc.IRtcEngine::OnStreamMessage
	OnStreamMessageHandler_tF058796C4BDD0B2CEA3EDF6BD52E6843775EEC1C * ___OnStreamMessage_30;
	// agora_gaming_rtc.OnConnectionBannedHandler agora_gaming_rtc.IRtcEngine::OnConnectionBanned
	OnConnectionBannedHandler_t1315929B79FAEEEA91969CEA0F644DDB5A5985C5 * ___OnConnectionBanned_31;
	// agora_gaming_rtc.OnConnectionStateChangedHandler agora_gaming_rtc.IRtcEngine::OnConnectionStateChanged
	OnConnectionStateChangedHandler_tC8B646ED0B4D85D0F0CDE98C6208D1567514E6B6 * ___OnConnectionStateChanged_32;
	// agora_gaming_rtc.OnTokenPrivilegeWillExpireHandler agora_gaming_rtc.IRtcEngine::OnTokenPrivilegeWillExpire
	OnTokenPrivilegeWillExpireHandler_t25E6354B5523D493D2D9085AAA8B2EE39854ABFF * ___OnTokenPrivilegeWillExpire_33;
	// agora_gaming_rtc.OnActiveSpeakerHandler agora_gaming_rtc.IRtcEngine::OnActiveSpeaker
	OnActiveSpeakerHandler_t68546C642365B222F94618898243F480770C4706 * ___OnActiveSpeaker_34;
	// agora_gaming_rtc.OnVideoStoppedHandler agora_gaming_rtc.IRtcEngine::OnVideoStopped
	OnVideoStoppedHandler_t6303E38108B2AF5B35B599DC54E027075CE38239 * ___OnVideoStopped_35;
	// agora_gaming_rtc.OnFirstLocalVideoFrameHandler agora_gaming_rtc.IRtcEngine::OnFirstLocalVideoFrame
	OnFirstLocalVideoFrameHandler_t746F42D17BB2F175916A8B42D47981C7163400E3 * ___OnFirstLocalVideoFrame_36;
	// agora_gaming_rtc.OnFirstRemoteVideoFrameHandler agora_gaming_rtc.IRtcEngine::OnFirstRemoteVideoFrame
	OnFirstRemoteVideoFrameHandler_t638ACAF63C178E642BF11720414D81E90796BE8E * ___OnFirstRemoteVideoFrame_37;
	// agora_gaming_rtc.OnUserEnableVideoHandler agora_gaming_rtc.IRtcEngine::OnUserEnableVideo
	OnUserEnableVideoHandler_t0D2C75CA2616214B3BDCCC60C791CC83F32AE80A * ___OnUserEnableVideo_38;
	// agora_gaming_rtc.OnUserEnableLocalVideoHandler agora_gaming_rtc.IRtcEngine::OnUserEnableLocalVideo
	OnUserEnableLocalVideoHandler_t88771F2EE86B70DA07A98537312951637DAA530F * ___OnUserEnableLocalVideo_39;
	// agora_gaming_rtc.OnRemoteVideoStateChangedHandler agora_gaming_rtc.IRtcEngine::OnRemoteVideoStateChanged
	OnRemoteVideoStateChangedHandler_tB3E19B98A83F112B37279D2C4D29D05A24C6F370 * ___OnRemoteVideoStateChanged_40;
	// agora_gaming_rtc.OnLocalPublishFallbackToAudioOnlyHandler agora_gaming_rtc.IRtcEngine::OnLocalPublishFallbackToAudioOnly
	OnLocalPublishFallbackToAudioOnlyHandler_t758E6955449970234BFEF4D8CDF1E7DBE78BF188 * ___OnLocalPublishFallbackToAudioOnly_41;
	// agora_gaming_rtc.OnRemoteSubscribeFallbackToAudioOnlyHandler agora_gaming_rtc.IRtcEngine::OnRemoteSubscribeFallbackToAudioOnly
	OnRemoteSubscribeFallbackToAudioOnlyHandler_t10D837C3DFA499D03DB171AC16E973BD583D7708 * ___OnRemoteSubscribeFallbackToAudioOnly_42;
	// agora_gaming_rtc.OnNetworkQualityHandler agora_gaming_rtc.IRtcEngine::OnNetworkQuality
	OnNetworkQualityHandler_t096FB39D835EE4A8C94595EDC784C3B3631F5B0E * ___OnNetworkQuality_43;
	// agora_gaming_rtc.OnLocalVideoStatsHandler agora_gaming_rtc.IRtcEngine::OnLocalVideoStats
	OnLocalVideoStatsHandler_t2162B3E9581B98A1D81676E447E8A7F764E57F70 * ___OnLocalVideoStats_44;
	// agora_gaming_rtc.OnRemoteVideoStatsHandler agora_gaming_rtc.IRtcEngine::OnRemoteVideoStats
	OnRemoteVideoStatsHandler_tDC13C73486A0A3FC0E604A5095C6CDF269635E7F * ___OnRemoteVideoStats_45;
	// agora_gaming_rtc.OnRemoteAudioStatsHandler agora_gaming_rtc.IRtcEngine::OnRemoteAudioStats
	OnRemoteAudioStatsHandler_t9E64F16570DCDEBA6FD892F7901ACDD14F218AAA * ___OnRemoteAudioStats_46;
	// agora_gaming_rtc.OnAudioDeviceStateChangedHandler agora_gaming_rtc.IRtcEngine::OnAudioDeviceStateChanged
	OnAudioDeviceStateChangedHandler_t2DC8AB589EE49A6F1E7C7947BE34DB1236499A93 * ___OnAudioDeviceStateChanged_47;
	// agora_gaming_rtc.OnCameraReadyHandler agora_gaming_rtc.IRtcEngine::OnCameraReady
	OnCameraReadyHandler_tB855A0B49B6D86457FEB8B0679D97F988CCCCEE2 * ___OnCameraReady_48;
	// agora_gaming_rtc.OnCameraFocusAreaChangedHandler agora_gaming_rtc.IRtcEngine::OnCameraFocusAreaChanged
	OnCameraFocusAreaChangedHandler_t2098D6E61A974B6EA9882DA0F209B927A707304E * ___OnCameraFocusAreaChanged_49;
	// agora_gaming_rtc.OnCameraExposureAreaChangedHandler agora_gaming_rtc.IRtcEngine::OnCameraExposureAreaChanged
	OnCameraExposureAreaChangedHandler_tD8392F871DE0231E92537D1790392817D2EBFEF7 * ___OnCameraExposureAreaChanged_50;
	// agora_gaming_rtc.OnRemoteAudioMixingBeginHandler agora_gaming_rtc.IRtcEngine::OnRemoteAudioMixingBegin
	OnRemoteAudioMixingBeginHandler_t527208495C8D1910C2289F942A4682D67C0EE6A0 * ___OnRemoteAudioMixingBegin_51;
	// agora_gaming_rtc.OnRemoteAudioMixingEndHandler agora_gaming_rtc.IRtcEngine::OnRemoteAudioMixingEnd
	OnRemoteAudioMixingEndHandler_t98C03E049F02C17279B559B8CA046A71ACF0A73A * ___OnRemoteAudioMixingEnd_52;
	// agora_gaming_rtc.OnAudioEffectFinishedHandler agora_gaming_rtc.IRtcEngine::OnAudioEffectFinished
	OnAudioEffectFinishedHandler_t9EFA77E7D5C53883A97970E48C91992673718563 * ___OnAudioEffectFinished_53;
	// agora_gaming_rtc.OnVideoDeviceStateChangedHandler agora_gaming_rtc.IRtcEngine::OnVideoDeviceStateChanged
	OnVideoDeviceStateChangedHandler_t560B6E3CDC6F0A01EE7F7C709DF0662904A2C949 * ___OnVideoDeviceStateChanged_54;
	// agora_gaming_rtc.OnRemoteVideoTransportStatsHandler agora_gaming_rtc.IRtcEngine::OnRemoteVideoTransportStats
	OnRemoteVideoTransportStatsHandler_t9A265EE8ACB968970E50FA99CD3700491BD6B2D8 * ___OnRemoteVideoTransportStats_55;
	// agora_gaming_rtc.OnRemoteAudioTransportStatsHandler agora_gaming_rtc.IRtcEngine::OnRemoteAudioTransportStats
	OnRemoteAudioTransportStatsHandler_tCC4062D17FC15A9D061A4CF0FDFF9EC5F28B471C * ___OnRemoteAudioTransportStats_56;
	// agora_gaming_rtc.OnTranscodingUpdatedHandler agora_gaming_rtc.IRtcEngine::OnTranscodingUpdated
	OnTranscodingUpdatedHandler_tE31A572FB12BDC8CE02F0B3C168CF1C45CDE8958 * ___OnTranscodingUpdated_57;
	// agora_gaming_rtc.OnAudioDeviceVolumeChangedHandler agora_gaming_rtc.IRtcEngine::OnAudioDeviceVolumeChanged
	OnAudioDeviceVolumeChangedHandler_tEE346951A1AC4079FABC982371ADBD152D798F20 * ___OnAudioDeviceVolumeChanged_58;
	// agora_gaming_rtc.OnMediaEngineStartCallSuccessHandler agora_gaming_rtc.IRtcEngine::OnMediaEngineStartCallSuccess
	OnMediaEngineStartCallSuccessHandler_t207D94A03F311B0E97D18668BB6CEA6D3B7EF07C * ___OnMediaEngineStartCallSuccess_59;
	// agora_gaming_rtc.OnMediaEngineLoadSuccessHandler agora_gaming_rtc.IRtcEngine::OnMediaEngineLoadSuccess
	OnMediaEngineLoadSuccessHandler_tB9E3FE65A30FCCF3A17F9C7CCD98820ECE5EF6DC * ___OnMediaEngineLoadSuccess_60;
	// agora_gaming_rtc.OnAudioMixingStateChangedHandler agora_gaming_rtc.IRtcEngine::OnAudioMixingStateChanged
	OnAudioMixingStateChangedHandler_t96BAA401FB33827536D15FB1ACB7EEFF44A8A427 * ___OnAudioMixingStateChanged_61;
	// agora_gaming_rtc.OnFirstRemoteAudioDecodedHandler agora_gaming_rtc.IRtcEngine::OnFirstRemoteAudioDecoded
	OnFirstRemoteAudioDecodedHandler_tE5EF33D27BD0D8CDE019F9A3D4169451CA6A49BB * ___OnFirstRemoteAudioDecoded_62;
	// agora_gaming_rtc.OnLocalVideoStateChangedHandler agora_gaming_rtc.IRtcEngine::OnLocalVideoStateChanged
	OnLocalVideoStateChangedHandler_t9A37E514FD8C3305CA1F9130B59577DEE5DE7432 * ___OnLocalVideoStateChanged_63;
	// agora_gaming_rtc.OnRtmpStreamingStateChangedHandler agora_gaming_rtc.IRtcEngine::OnRtmpStreamingStateChanged
	OnRtmpStreamingStateChangedHandler_t3C2A5FB1A3ED864B8990B62B3D0AA2210F9812A5 * ___OnRtmpStreamingStateChanged_64;
	// agora_gaming_rtc.OnNetworkTypeChangedHandler agora_gaming_rtc.IRtcEngine::OnNetworkTypeChanged
	OnNetworkTypeChangedHandler_tDF04336650580F79333AF2DF79A13FC299FFBB80 * ___OnNetworkTypeChanged_65;
	// agora_gaming_rtc.OnLastmileProbeResultHandler agora_gaming_rtc.IRtcEngine::OnLastmileProbeResult
	OnLastmileProbeResultHandler_tE294E782F2B8C5903478E7AC78D6DA4BA6938B55 * ___OnLastmileProbeResult_66;
	// agora_gaming_rtc.OnLocalUserRegisteredHandler agora_gaming_rtc.IRtcEngine::OnLocalUserRegistered
	OnLocalUserRegisteredHandler_tDEC8D6B725F730F1447C11F09772EB9C789F5A64 * ___OnLocalUserRegistered_67;
	// agora_gaming_rtc.OnUserInfoUpdatedHandler agora_gaming_rtc.IRtcEngine::OnUserInfoUpdated
	OnUserInfoUpdatedHandler_t8E3243D899ADD660AA8A51B6F93AAFC881361D97 * ___OnUserInfoUpdated_68;
	// agora_gaming_rtc.OnLocalAudioStateChangedHandler agora_gaming_rtc.IRtcEngine::OnLocalAudioStateChanged
	OnLocalAudioStateChangedHandler_tBE769275F07052AD8CB8C12FF6175E752D61080F * ___OnLocalAudioStateChanged_69;
	// agora_gaming_rtc.OnRemoteAudioStateChangedHandler agora_gaming_rtc.IRtcEngine::OnRemoteAudioStateChanged
	OnRemoteAudioStateChangedHandler_t83561E5560F82EFD57BBEEA1573F24DD95A0EB9C * ___OnRemoteAudioStateChanged_70;
	// agora_gaming_rtc.OnLocalAudioStatsHandler agora_gaming_rtc.IRtcEngine::OnLocalAudioStats
	OnLocalAudioStatsHandler_t00BB8885CC665DA8F44FA0296AE93A5BE93AD061 * ___OnLocalAudioStats_71;
	// agora_gaming_rtc.OnChannelMediaRelayEventHandler agora_gaming_rtc.IRtcEngine::OnChannelMediaRelayEvent
	OnChannelMediaRelayEventHandler_tA23B17DFEA93DA780FF8FB11A5DDE6B383E6A0B6 * ___OnChannelMediaRelayEvent_72;
	// agora_gaming_rtc.OnChannelMediaRelayStateChangedHandler agora_gaming_rtc.IRtcEngine::OnChannelMediaRelayStateChanged
	OnChannelMediaRelayStateChangedHandler_t0006D48B86275805D7B32226E2B6CC7DA0BDBF8D * ___OnChannelMediaRelayStateChanged_73;
	// agora_gaming_rtc.OnFacePositionChangedHandler agora_gaming_rtc.IRtcEngine::OnFacePositionChanged
	OnFacePositionChangedHandler_tECDAB5467B5165EAB4D26FB360C0C4A007D2BF1B * ___OnFacePositionChanged_74;
	// agora_gaming_rtc.AudioEffectManagerImpl agora_gaming_rtc.IRtcEngine::mAudioEffectM
	AudioEffectManagerImpl_tEEE18FDD7EDF410A1EC9200722B68834E96F2F53 * ___mAudioEffectM_75;
	// agora_gaming_rtc.AudioRecordingDeviceManager agora_gaming_rtc.IRtcEngine::audioRecordingDeviceManager
	AudioRecordingDeviceManager_t00FF0F998F0416E5BD5F2B988520CFF374D32123 * ___audioRecordingDeviceManager_76;
	// agora_gaming_rtc.AudioPlaybackDeviceManager agora_gaming_rtc.IRtcEngine::audioPlaybackDeviceManager
	AudioPlaybackDeviceManager_t0CC36B1B5E9F977BABFFDE95C846ED960AF252F8 * ___audioPlaybackDeviceManager_77;
	// agora_gaming_rtc.VideoDeviceManager agora_gaming_rtc.IRtcEngine::videoDeviceManager
	VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * ___videoDeviceManager_78;
	// agora_gaming_rtc.AudioRawDataManager agora_gaming_rtc.IRtcEngine::audioRawDataManager
	AudioRawDataManager_tCB9E121DC1E9E16694307C560A1CD2B108A2E4F5 * ___audioRawDataManager_79;
	// agora_gaming_rtc.VideoRawDataManager agora_gaming_rtc.IRtcEngine::videoRawDataManager
	VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * ___videoRawDataManager_80;
	// agora_gaming_rtc.VideoRender agora_gaming_rtc.IRtcEngine::videoRender
	VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * ___videoRender_81;
	// agora_gaming_rtc.AgoraCallbackObject agora_gaming_rtc.IRtcEngine::_AgoraCallbackObject
	AgoraCallbackObject_t0D5D07510A1B3D9E78206DDB3C17D0C9AEE2B580 * ____AgoraCallbackObject_83;

public:
	inline static int32_t get_offset_of_OnJoinChannelSuccess_1() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnJoinChannelSuccess_1)); }
	inline OnJoinChannelSuccessHandler_t73CD1B13B07C0DF36FE2F9DE608BD63E60FC1753 * get_OnJoinChannelSuccess_1() const { return ___OnJoinChannelSuccess_1; }
	inline OnJoinChannelSuccessHandler_t73CD1B13B07C0DF36FE2F9DE608BD63E60FC1753 ** get_address_of_OnJoinChannelSuccess_1() { return &___OnJoinChannelSuccess_1; }
	inline void set_OnJoinChannelSuccess_1(OnJoinChannelSuccessHandler_t73CD1B13B07C0DF36FE2F9DE608BD63E60FC1753 * value)
	{
		___OnJoinChannelSuccess_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnJoinChannelSuccess_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnReJoinChannelSuccess_2() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnReJoinChannelSuccess_2)); }
	inline OnReJoinChannelSuccessHandler_t5F4F7E73CF8DB6B7016D56DF481B9C214D334455 * get_OnReJoinChannelSuccess_2() const { return ___OnReJoinChannelSuccess_2; }
	inline OnReJoinChannelSuccessHandler_t5F4F7E73CF8DB6B7016D56DF481B9C214D334455 ** get_address_of_OnReJoinChannelSuccess_2() { return &___OnReJoinChannelSuccess_2; }
	inline void set_OnReJoinChannelSuccess_2(OnReJoinChannelSuccessHandler_t5F4F7E73CF8DB6B7016D56DF481B9C214D334455 * value)
	{
		___OnReJoinChannelSuccess_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReJoinChannelSuccess_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnectionLost_3() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnConnectionLost_3)); }
	inline OnConnectionLostHandler_tEAB7CD42E16260F8F98D8792330B8375F8C5AA5A * get_OnConnectionLost_3() const { return ___OnConnectionLost_3; }
	inline OnConnectionLostHandler_tEAB7CD42E16260F8F98D8792330B8375F8C5AA5A ** get_address_of_OnConnectionLost_3() { return &___OnConnectionLost_3; }
	inline void set_OnConnectionLost_3(OnConnectionLostHandler_tEAB7CD42E16260F8F98D8792330B8375F8C5AA5A * value)
	{
		___OnConnectionLost_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectionLost_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnectionInterrupted_4() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnConnectionInterrupted_4)); }
	inline OnConnectionInterruptedHandler_t1BAD7BC631108C6A438FB827FA20E233BF9ADAD5 * get_OnConnectionInterrupted_4() const { return ___OnConnectionInterrupted_4; }
	inline OnConnectionInterruptedHandler_t1BAD7BC631108C6A438FB827FA20E233BF9ADAD5 ** get_address_of_OnConnectionInterrupted_4() { return &___OnConnectionInterrupted_4; }
	inline void set_OnConnectionInterrupted_4(OnConnectionInterruptedHandler_t1BAD7BC631108C6A438FB827FA20E233BF9ADAD5 * value)
	{
		___OnConnectionInterrupted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectionInterrupted_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestToken_5() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRequestToken_5)); }
	inline OnRequestTokenHandler_t540953E3CD08F51CD486CAA5ED56084B9095F9D7 * get_OnRequestToken_5() const { return ___OnRequestToken_5; }
	inline OnRequestTokenHandler_t540953E3CD08F51CD486CAA5ED56084B9095F9D7 ** get_address_of_OnRequestToken_5() { return &___OnRequestToken_5; }
	inline void set_OnRequestToken_5(OnRequestTokenHandler_t540953E3CD08F51CD486CAA5ED56084B9095F9D7 * value)
	{
		___OnRequestToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestToken_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserJoined_6() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserJoined_6)); }
	inline OnUserJoinedHandler_t4473A778B54D4A2D8A3AAD468B6B19D843197A99 * get_OnUserJoined_6() const { return ___OnUserJoined_6; }
	inline OnUserJoinedHandler_t4473A778B54D4A2D8A3AAD468B6B19D843197A99 ** get_address_of_OnUserJoined_6() { return &___OnUserJoined_6; }
	inline void set_OnUserJoined_6(OnUserJoinedHandler_t4473A778B54D4A2D8A3AAD468B6B19D843197A99 * value)
	{
		___OnUserJoined_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserJoined_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserOffline_7() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserOffline_7)); }
	inline OnUserOfflineHandler_tE7C2A990D7CF5207AD04D00EE2005AF6557FAECB * get_OnUserOffline_7() const { return ___OnUserOffline_7; }
	inline OnUserOfflineHandler_tE7C2A990D7CF5207AD04D00EE2005AF6557FAECB ** get_address_of_OnUserOffline_7() { return &___OnUserOffline_7; }
	inline void set_OnUserOffline_7(OnUserOfflineHandler_tE7C2A990D7CF5207AD04D00EE2005AF6557FAECB * value)
	{
		___OnUserOffline_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserOffline_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnLeaveChannel_8() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLeaveChannel_8)); }
	inline OnLeaveChannelHandler_t3FD5E27AE016493C6D8D9C6BC72982A06B494B7A * get_OnLeaveChannel_8() const { return ___OnLeaveChannel_8; }
	inline OnLeaveChannelHandler_t3FD5E27AE016493C6D8D9C6BC72982A06B494B7A ** get_address_of_OnLeaveChannel_8() { return &___OnLeaveChannel_8; }
	inline void set_OnLeaveChannel_8(OnLeaveChannelHandler_t3FD5E27AE016493C6D8D9C6BC72982A06B494B7A * value)
	{
		___OnLeaveChannel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLeaveChannel_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnVolumeIndication_9() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnVolumeIndication_9)); }
	inline OnVolumeIndicationHandler_t604294786D48EFFC1D8FCB4537AC2BE1183BFB8B * get_OnVolumeIndication_9() const { return ___OnVolumeIndication_9; }
	inline OnVolumeIndicationHandler_t604294786D48EFFC1D8FCB4537AC2BE1183BFB8B ** get_address_of_OnVolumeIndication_9() { return &___OnVolumeIndication_9; }
	inline void set_OnVolumeIndication_9(OnVolumeIndicationHandler_t604294786D48EFFC1D8FCB4537AC2BE1183BFB8B * value)
	{
		___OnVolumeIndication_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVolumeIndication_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserMutedAudio_10() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserMutedAudio_10)); }
	inline OnUserMutedAudioHandler_tCB49B5A94ED995225E140417CE96477FF05A301C * get_OnUserMutedAudio_10() const { return ___OnUserMutedAudio_10; }
	inline OnUserMutedAudioHandler_tCB49B5A94ED995225E140417CE96477FF05A301C ** get_address_of_OnUserMutedAudio_10() { return &___OnUserMutedAudio_10; }
	inline void set_OnUserMutedAudio_10(OnUserMutedAudioHandler_tCB49B5A94ED995225E140417CE96477FF05A301C * value)
	{
		___OnUserMutedAudio_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserMutedAudio_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnWarning_11() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnWarning_11)); }
	inline OnSDKWarningHandler_t7657421944756733E43C91352D2E802681CD92A4 * get_OnWarning_11() const { return ___OnWarning_11; }
	inline OnSDKWarningHandler_t7657421944756733E43C91352D2E802681CD92A4 ** get_address_of_OnWarning_11() { return &___OnWarning_11; }
	inline void set_OnWarning_11(OnSDKWarningHandler_t7657421944756733E43C91352D2E802681CD92A4 * value)
	{
		___OnWarning_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnWarning_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_12() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnError_12)); }
	inline OnSDKErrorHandler_tD6AD538D93363444EC3BEC56ED8786F74A4DB673 * get_OnError_12() const { return ___OnError_12; }
	inline OnSDKErrorHandler_tD6AD538D93363444EC3BEC56ED8786F74A4DB673 ** get_address_of_OnError_12() { return &___OnError_12; }
	inline void set_OnError_12(OnSDKErrorHandler_tD6AD538D93363444EC3BEC56ED8786F74A4DB673 * value)
	{
		___OnError_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnRtcStats_13() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRtcStats_13)); }
	inline OnRtcStatsHandler_tBE6055EA2A77088214835306D7125F3B3660D31B * get_OnRtcStats_13() const { return ___OnRtcStats_13; }
	inline OnRtcStatsHandler_tBE6055EA2A77088214835306D7125F3B3660D31B ** get_address_of_OnRtcStats_13() { return &___OnRtcStats_13; }
	inline void set_OnRtcStats_13(OnRtcStatsHandler_tBE6055EA2A77088214835306D7125F3B3660D31B * value)
	{
		___OnRtcStats_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRtcStats_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioMixingFinished_14() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioMixingFinished_14)); }
	inline OnAudioMixingFinishedHandler_tBD623F4F6825F3664FB19E662CCF4DCBF57A4681 * get_OnAudioMixingFinished_14() const { return ___OnAudioMixingFinished_14; }
	inline OnAudioMixingFinishedHandler_tBD623F4F6825F3664FB19E662CCF4DCBF57A4681 ** get_address_of_OnAudioMixingFinished_14() { return &___OnAudioMixingFinished_14; }
	inline void set_OnAudioMixingFinished_14(OnAudioMixingFinishedHandler_tBD623F4F6825F3664FB19E662CCF4DCBF57A4681 * value)
	{
		___OnAudioMixingFinished_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioMixingFinished_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioRouteChanged_15() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioRouteChanged_15)); }
	inline OnAudioRouteChangedHandler_t58D793BF381E9BD8DA588FC8F250DA014D459606 * get_OnAudioRouteChanged_15() const { return ___OnAudioRouteChanged_15; }
	inline OnAudioRouteChangedHandler_t58D793BF381E9BD8DA588FC8F250DA014D459606 ** get_address_of_OnAudioRouteChanged_15() { return &___OnAudioRouteChanged_15; }
	inline void set_OnAudioRouteChanged_15(OnAudioRouteChangedHandler_t58D793BF381E9BD8DA588FC8F250DA014D459606 * value)
	{
		___OnAudioRouteChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioRouteChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnFirstRemoteVideoDecoded_16() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFirstRemoteVideoDecoded_16)); }
	inline OnFirstRemoteVideoDecodedHandler_t42E1C18EAE26EEFB9A3E7E6385A92EDA0F1E887E * get_OnFirstRemoteVideoDecoded_16() const { return ___OnFirstRemoteVideoDecoded_16; }
	inline OnFirstRemoteVideoDecodedHandler_t42E1C18EAE26EEFB9A3E7E6385A92EDA0F1E887E ** get_address_of_OnFirstRemoteVideoDecoded_16() { return &___OnFirstRemoteVideoDecoded_16; }
	inline void set_OnFirstRemoteVideoDecoded_16(OnFirstRemoteVideoDecodedHandler_t42E1C18EAE26EEFB9A3E7E6385A92EDA0F1E887E * value)
	{
		___OnFirstRemoteVideoDecoded_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFirstRemoteVideoDecoded_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnVideoSizeChanged_17() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnVideoSizeChanged_17)); }
	inline OnVideoSizeChangedHandler_t28A6337896AF42D5F59FB58021257417B3BA8394 * get_OnVideoSizeChanged_17() const { return ___OnVideoSizeChanged_17; }
	inline OnVideoSizeChangedHandler_t28A6337896AF42D5F59FB58021257417B3BA8394 ** get_address_of_OnVideoSizeChanged_17() { return &___OnVideoSizeChanged_17; }
	inline void set_OnVideoSizeChanged_17(OnVideoSizeChangedHandler_t28A6337896AF42D5F59FB58021257417B3BA8394 * value)
	{
		___OnVideoSizeChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVideoSizeChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientRoleChanged_18() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnClientRoleChanged_18)); }
	inline OnClientRoleChangedHandler_tBC27D4F337D3C8673E56B8A7E90D2F8A78CB56C7 * get_OnClientRoleChanged_18() const { return ___OnClientRoleChanged_18; }
	inline OnClientRoleChangedHandler_tBC27D4F337D3C8673E56B8A7E90D2F8A78CB56C7 ** get_address_of_OnClientRoleChanged_18() { return &___OnClientRoleChanged_18; }
	inline void set_OnClientRoleChanged_18(OnClientRoleChangedHandler_tBC27D4F337D3C8673E56B8A7E90D2F8A78CB56C7 * value)
	{
		___OnClientRoleChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientRoleChanged_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserMuteVideo_19() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserMuteVideo_19)); }
	inline OnUserMuteVideoHandler_t307E824D89113B976754058CB20B5220FD6354FE * get_OnUserMuteVideo_19() const { return ___OnUserMuteVideo_19; }
	inline OnUserMuteVideoHandler_t307E824D89113B976754058CB20B5220FD6354FE ** get_address_of_OnUserMuteVideo_19() { return &___OnUserMuteVideo_19; }
	inline void set_OnUserMuteVideo_19(OnUserMuteVideoHandler_t307E824D89113B976754058CB20B5220FD6354FE * value)
	{
		___OnUserMuteVideo_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserMuteVideo_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicrophoneEnabled_20() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnMicrophoneEnabled_20)); }
	inline OnMicrophoneEnabledHandler_t46A38931501DA1C70609D9770B15285E66705188 * get_OnMicrophoneEnabled_20() const { return ___OnMicrophoneEnabled_20; }
	inline OnMicrophoneEnabledHandler_t46A38931501DA1C70609D9770B15285E66705188 ** get_address_of_OnMicrophoneEnabled_20() { return &___OnMicrophoneEnabled_20; }
	inline void set_OnMicrophoneEnabled_20(OnMicrophoneEnabledHandler_t46A38931501DA1C70609D9770B15285E66705188 * value)
	{
		___OnMicrophoneEnabled_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicrophoneEnabled_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnFirstRemoteAudioFrame_21() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFirstRemoteAudioFrame_21)); }
	inline OnFirstRemoteAudioFrameHandler_t13A3A271BCCB8FCB62A688938D4E5074DE014FD1 * get_OnFirstRemoteAudioFrame_21() const { return ___OnFirstRemoteAudioFrame_21; }
	inline OnFirstRemoteAudioFrameHandler_t13A3A271BCCB8FCB62A688938D4E5074DE014FD1 ** get_address_of_OnFirstRemoteAudioFrame_21() { return &___OnFirstRemoteAudioFrame_21; }
	inline void set_OnFirstRemoteAudioFrame_21(OnFirstRemoteAudioFrameHandler_t13A3A271BCCB8FCB62A688938D4E5074DE014FD1 * value)
	{
		___OnFirstRemoteAudioFrame_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFirstRemoteAudioFrame_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnFirstLocalAudioFrame_22() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFirstLocalAudioFrame_22)); }
	inline OnFirstLocalAudioFrameHandler_t8AD7683F20087584FEEC19083E496F6B1237523F * get_OnFirstLocalAudioFrame_22() const { return ___OnFirstLocalAudioFrame_22; }
	inline OnFirstLocalAudioFrameHandler_t8AD7683F20087584FEEC19083E496F6B1237523F ** get_address_of_OnFirstLocalAudioFrame_22() { return &___OnFirstLocalAudioFrame_22; }
	inline void set_OnFirstLocalAudioFrame_22(OnFirstLocalAudioFrameHandler_t8AD7683F20087584FEEC19083E496F6B1237523F * value)
	{
		___OnFirstLocalAudioFrame_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFirstLocalAudioFrame_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnApiExecuted_23() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnApiExecuted_23)); }
	inline OnApiExecutedHandler_tF4DA06E8EEBB8E5E2B623EE6FC9DF5C7CD8AD101 * get_OnApiExecuted_23() const { return ___OnApiExecuted_23; }
	inline OnApiExecutedHandler_tF4DA06E8EEBB8E5E2B623EE6FC9DF5C7CD8AD101 ** get_address_of_OnApiExecuted_23() { return &___OnApiExecuted_23; }
	inline void set_OnApiExecuted_23(OnApiExecutedHandler_tF4DA06E8EEBB8E5E2B623EE6FC9DF5C7CD8AD101 * value)
	{
		___OnApiExecuted_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnApiExecuted_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnLastmileQuality_24() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLastmileQuality_24)); }
	inline OnLastmileQualityHandler_t77257F621AE1839F0D5B271FCD9DF7EEFCD73127 * get_OnLastmileQuality_24() const { return ___OnLastmileQuality_24; }
	inline OnLastmileQualityHandler_t77257F621AE1839F0D5B271FCD9DF7EEFCD73127 ** get_address_of_OnLastmileQuality_24() { return &___OnLastmileQuality_24; }
	inline void set_OnLastmileQuality_24(OnLastmileQualityHandler_t77257F621AE1839F0D5B271FCD9DF7EEFCD73127 * value)
	{
		___OnLastmileQuality_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLastmileQuality_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioQuality_25() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioQuality_25)); }
	inline OnAudioQualityHandler_t46763914244BC0DA494D9E5003405E4BBE4EE194 * get_OnAudioQuality_25() const { return ___OnAudioQuality_25; }
	inline OnAudioQualityHandler_t46763914244BC0DA494D9E5003405E4BBE4EE194 ** get_address_of_OnAudioQuality_25() { return &___OnAudioQuality_25; }
	inline void set_OnAudioQuality_25(OnAudioQualityHandler_t46763914244BC0DA494D9E5003405E4BBE4EE194 * value)
	{
		___OnAudioQuality_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioQuality_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnStreamInjectedStatus_26() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnStreamInjectedStatus_26)); }
	inline OnStreamInjectedStatusHandler_tE47D8E92DCBE9E474C0F0C4484142FAB24CF1153 * get_OnStreamInjectedStatus_26() const { return ___OnStreamInjectedStatus_26; }
	inline OnStreamInjectedStatusHandler_tE47D8E92DCBE9E474C0F0C4484142FAB24CF1153 ** get_address_of_OnStreamInjectedStatus_26() { return &___OnStreamInjectedStatus_26; }
	inline void set_OnStreamInjectedStatus_26(OnStreamInjectedStatusHandler_tE47D8E92DCBE9E474C0F0C4484142FAB24CF1153 * value)
	{
		___OnStreamInjectedStatus_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStreamInjectedStatus_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnStreamUnpublished_27() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnStreamUnpublished_27)); }
	inline OnStreamUnpublishedHandler_t457D7CE70D789065FB51943D61C0F33D5D13334F * get_OnStreamUnpublished_27() const { return ___OnStreamUnpublished_27; }
	inline OnStreamUnpublishedHandler_t457D7CE70D789065FB51943D61C0F33D5D13334F ** get_address_of_OnStreamUnpublished_27() { return &___OnStreamUnpublished_27; }
	inline void set_OnStreamUnpublished_27(OnStreamUnpublishedHandler_t457D7CE70D789065FB51943D61C0F33D5D13334F * value)
	{
		___OnStreamUnpublished_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStreamUnpublished_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnStreamPublished_28() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnStreamPublished_28)); }
	inline OnStreamPublishedHandler_t4B4CD0F6A09DBF4327FD5C237912EE4CAF372B31 * get_OnStreamPublished_28() const { return ___OnStreamPublished_28; }
	inline OnStreamPublishedHandler_t4B4CD0F6A09DBF4327FD5C237912EE4CAF372B31 ** get_address_of_OnStreamPublished_28() { return &___OnStreamPublished_28; }
	inline void set_OnStreamPublished_28(OnStreamPublishedHandler_t4B4CD0F6A09DBF4327FD5C237912EE4CAF372B31 * value)
	{
		___OnStreamPublished_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStreamPublished_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnStreamMessageError_29() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnStreamMessageError_29)); }
	inline OnStreamMessageErrorHandler_tB0945E7DF967CE9DB7D82F8BF30BF53A10D254F6 * get_OnStreamMessageError_29() const { return ___OnStreamMessageError_29; }
	inline OnStreamMessageErrorHandler_tB0945E7DF967CE9DB7D82F8BF30BF53A10D254F6 ** get_address_of_OnStreamMessageError_29() { return &___OnStreamMessageError_29; }
	inline void set_OnStreamMessageError_29(OnStreamMessageErrorHandler_tB0945E7DF967CE9DB7D82F8BF30BF53A10D254F6 * value)
	{
		___OnStreamMessageError_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStreamMessageError_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnStreamMessage_30() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnStreamMessage_30)); }
	inline OnStreamMessageHandler_tF058796C4BDD0B2CEA3EDF6BD52E6843775EEC1C * get_OnStreamMessage_30() const { return ___OnStreamMessage_30; }
	inline OnStreamMessageHandler_tF058796C4BDD0B2CEA3EDF6BD52E6843775EEC1C ** get_address_of_OnStreamMessage_30() { return &___OnStreamMessage_30; }
	inline void set_OnStreamMessage_30(OnStreamMessageHandler_tF058796C4BDD0B2CEA3EDF6BD52E6843775EEC1C * value)
	{
		___OnStreamMessage_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStreamMessage_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnectionBanned_31() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnConnectionBanned_31)); }
	inline OnConnectionBannedHandler_t1315929B79FAEEEA91969CEA0F644DDB5A5985C5 * get_OnConnectionBanned_31() const { return ___OnConnectionBanned_31; }
	inline OnConnectionBannedHandler_t1315929B79FAEEEA91969CEA0F644DDB5A5985C5 ** get_address_of_OnConnectionBanned_31() { return &___OnConnectionBanned_31; }
	inline void set_OnConnectionBanned_31(OnConnectionBannedHandler_t1315929B79FAEEEA91969CEA0F644DDB5A5985C5 * value)
	{
		___OnConnectionBanned_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectionBanned_31), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnectionStateChanged_32() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnConnectionStateChanged_32)); }
	inline OnConnectionStateChangedHandler_tC8B646ED0B4D85D0F0CDE98C6208D1567514E6B6 * get_OnConnectionStateChanged_32() const { return ___OnConnectionStateChanged_32; }
	inline OnConnectionStateChangedHandler_tC8B646ED0B4D85D0F0CDE98C6208D1567514E6B6 ** get_address_of_OnConnectionStateChanged_32() { return &___OnConnectionStateChanged_32; }
	inline void set_OnConnectionStateChanged_32(OnConnectionStateChangedHandler_tC8B646ED0B4D85D0F0CDE98C6208D1567514E6B6 * value)
	{
		___OnConnectionStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectionStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnTokenPrivilegeWillExpire_33() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnTokenPrivilegeWillExpire_33)); }
	inline OnTokenPrivilegeWillExpireHandler_t25E6354B5523D493D2D9085AAA8B2EE39854ABFF * get_OnTokenPrivilegeWillExpire_33() const { return ___OnTokenPrivilegeWillExpire_33; }
	inline OnTokenPrivilegeWillExpireHandler_t25E6354B5523D493D2D9085AAA8B2EE39854ABFF ** get_address_of_OnTokenPrivilegeWillExpire_33() { return &___OnTokenPrivilegeWillExpire_33; }
	inline void set_OnTokenPrivilegeWillExpire_33(OnTokenPrivilegeWillExpireHandler_t25E6354B5523D493D2D9085AAA8B2EE39854ABFF * value)
	{
		___OnTokenPrivilegeWillExpire_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTokenPrivilegeWillExpire_33), (void*)value);
	}

	inline static int32_t get_offset_of_OnActiveSpeaker_34() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnActiveSpeaker_34)); }
	inline OnActiveSpeakerHandler_t68546C642365B222F94618898243F480770C4706 * get_OnActiveSpeaker_34() const { return ___OnActiveSpeaker_34; }
	inline OnActiveSpeakerHandler_t68546C642365B222F94618898243F480770C4706 ** get_address_of_OnActiveSpeaker_34() { return &___OnActiveSpeaker_34; }
	inline void set_OnActiveSpeaker_34(OnActiveSpeakerHandler_t68546C642365B222F94618898243F480770C4706 * value)
	{
		___OnActiveSpeaker_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnActiveSpeaker_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnVideoStopped_35() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnVideoStopped_35)); }
	inline OnVideoStoppedHandler_t6303E38108B2AF5B35B599DC54E027075CE38239 * get_OnVideoStopped_35() const { return ___OnVideoStopped_35; }
	inline OnVideoStoppedHandler_t6303E38108B2AF5B35B599DC54E027075CE38239 ** get_address_of_OnVideoStopped_35() { return &___OnVideoStopped_35; }
	inline void set_OnVideoStopped_35(OnVideoStoppedHandler_t6303E38108B2AF5B35B599DC54E027075CE38239 * value)
	{
		___OnVideoStopped_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVideoStopped_35), (void*)value);
	}

	inline static int32_t get_offset_of_OnFirstLocalVideoFrame_36() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFirstLocalVideoFrame_36)); }
	inline OnFirstLocalVideoFrameHandler_t746F42D17BB2F175916A8B42D47981C7163400E3 * get_OnFirstLocalVideoFrame_36() const { return ___OnFirstLocalVideoFrame_36; }
	inline OnFirstLocalVideoFrameHandler_t746F42D17BB2F175916A8B42D47981C7163400E3 ** get_address_of_OnFirstLocalVideoFrame_36() { return &___OnFirstLocalVideoFrame_36; }
	inline void set_OnFirstLocalVideoFrame_36(OnFirstLocalVideoFrameHandler_t746F42D17BB2F175916A8B42D47981C7163400E3 * value)
	{
		___OnFirstLocalVideoFrame_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFirstLocalVideoFrame_36), (void*)value);
	}

	inline static int32_t get_offset_of_OnFirstRemoteVideoFrame_37() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFirstRemoteVideoFrame_37)); }
	inline OnFirstRemoteVideoFrameHandler_t638ACAF63C178E642BF11720414D81E90796BE8E * get_OnFirstRemoteVideoFrame_37() const { return ___OnFirstRemoteVideoFrame_37; }
	inline OnFirstRemoteVideoFrameHandler_t638ACAF63C178E642BF11720414D81E90796BE8E ** get_address_of_OnFirstRemoteVideoFrame_37() { return &___OnFirstRemoteVideoFrame_37; }
	inline void set_OnFirstRemoteVideoFrame_37(OnFirstRemoteVideoFrameHandler_t638ACAF63C178E642BF11720414D81E90796BE8E * value)
	{
		___OnFirstRemoteVideoFrame_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFirstRemoteVideoFrame_37), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserEnableVideo_38() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserEnableVideo_38)); }
	inline OnUserEnableVideoHandler_t0D2C75CA2616214B3BDCCC60C791CC83F32AE80A * get_OnUserEnableVideo_38() const { return ___OnUserEnableVideo_38; }
	inline OnUserEnableVideoHandler_t0D2C75CA2616214B3BDCCC60C791CC83F32AE80A ** get_address_of_OnUserEnableVideo_38() { return &___OnUserEnableVideo_38; }
	inline void set_OnUserEnableVideo_38(OnUserEnableVideoHandler_t0D2C75CA2616214B3BDCCC60C791CC83F32AE80A * value)
	{
		___OnUserEnableVideo_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserEnableVideo_38), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserEnableLocalVideo_39() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserEnableLocalVideo_39)); }
	inline OnUserEnableLocalVideoHandler_t88771F2EE86B70DA07A98537312951637DAA530F * get_OnUserEnableLocalVideo_39() const { return ___OnUserEnableLocalVideo_39; }
	inline OnUserEnableLocalVideoHandler_t88771F2EE86B70DA07A98537312951637DAA530F ** get_address_of_OnUserEnableLocalVideo_39() { return &___OnUserEnableLocalVideo_39; }
	inline void set_OnUserEnableLocalVideo_39(OnUserEnableLocalVideoHandler_t88771F2EE86B70DA07A98537312951637DAA530F * value)
	{
		___OnUserEnableLocalVideo_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserEnableLocalVideo_39), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteVideoStateChanged_40() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteVideoStateChanged_40)); }
	inline OnRemoteVideoStateChangedHandler_tB3E19B98A83F112B37279D2C4D29D05A24C6F370 * get_OnRemoteVideoStateChanged_40() const { return ___OnRemoteVideoStateChanged_40; }
	inline OnRemoteVideoStateChangedHandler_tB3E19B98A83F112B37279D2C4D29D05A24C6F370 ** get_address_of_OnRemoteVideoStateChanged_40() { return &___OnRemoteVideoStateChanged_40; }
	inline void set_OnRemoteVideoStateChanged_40(OnRemoteVideoStateChangedHandler_tB3E19B98A83F112B37279D2C4D29D05A24C6F370 * value)
	{
		___OnRemoteVideoStateChanged_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteVideoStateChanged_40), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocalPublishFallbackToAudioOnly_41() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLocalPublishFallbackToAudioOnly_41)); }
	inline OnLocalPublishFallbackToAudioOnlyHandler_t758E6955449970234BFEF4D8CDF1E7DBE78BF188 * get_OnLocalPublishFallbackToAudioOnly_41() const { return ___OnLocalPublishFallbackToAudioOnly_41; }
	inline OnLocalPublishFallbackToAudioOnlyHandler_t758E6955449970234BFEF4D8CDF1E7DBE78BF188 ** get_address_of_OnLocalPublishFallbackToAudioOnly_41() { return &___OnLocalPublishFallbackToAudioOnly_41; }
	inline void set_OnLocalPublishFallbackToAudioOnly_41(OnLocalPublishFallbackToAudioOnlyHandler_t758E6955449970234BFEF4D8CDF1E7DBE78BF188 * value)
	{
		___OnLocalPublishFallbackToAudioOnly_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocalPublishFallbackToAudioOnly_41), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteSubscribeFallbackToAudioOnly_42() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteSubscribeFallbackToAudioOnly_42)); }
	inline OnRemoteSubscribeFallbackToAudioOnlyHandler_t10D837C3DFA499D03DB171AC16E973BD583D7708 * get_OnRemoteSubscribeFallbackToAudioOnly_42() const { return ___OnRemoteSubscribeFallbackToAudioOnly_42; }
	inline OnRemoteSubscribeFallbackToAudioOnlyHandler_t10D837C3DFA499D03DB171AC16E973BD583D7708 ** get_address_of_OnRemoteSubscribeFallbackToAudioOnly_42() { return &___OnRemoteSubscribeFallbackToAudioOnly_42; }
	inline void set_OnRemoteSubscribeFallbackToAudioOnly_42(OnRemoteSubscribeFallbackToAudioOnlyHandler_t10D837C3DFA499D03DB171AC16E973BD583D7708 * value)
	{
		___OnRemoteSubscribeFallbackToAudioOnly_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteSubscribeFallbackToAudioOnly_42), (void*)value);
	}

	inline static int32_t get_offset_of_OnNetworkQuality_43() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnNetworkQuality_43)); }
	inline OnNetworkQualityHandler_t096FB39D835EE4A8C94595EDC784C3B3631F5B0E * get_OnNetworkQuality_43() const { return ___OnNetworkQuality_43; }
	inline OnNetworkQualityHandler_t096FB39D835EE4A8C94595EDC784C3B3631F5B0E ** get_address_of_OnNetworkQuality_43() { return &___OnNetworkQuality_43; }
	inline void set_OnNetworkQuality_43(OnNetworkQualityHandler_t096FB39D835EE4A8C94595EDC784C3B3631F5B0E * value)
	{
		___OnNetworkQuality_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNetworkQuality_43), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocalVideoStats_44() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLocalVideoStats_44)); }
	inline OnLocalVideoStatsHandler_t2162B3E9581B98A1D81676E447E8A7F764E57F70 * get_OnLocalVideoStats_44() const { return ___OnLocalVideoStats_44; }
	inline OnLocalVideoStatsHandler_t2162B3E9581B98A1D81676E447E8A7F764E57F70 ** get_address_of_OnLocalVideoStats_44() { return &___OnLocalVideoStats_44; }
	inline void set_OnLocalVideoStats_44(OnLocalVideoStatsHandler_t2162B3E9581B98A1D81676E447E8A7F764E57F70 * value)
	{
		___OnLocalVideoStats_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocalVideoStats_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteVideoStats_45() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteVideoStats_45)); }
	inline OnRemoteVideoStatsHandler_tDC13C73486A0A3FC0E604A5095C6CDF269635E7F * get_OnRemoteVideoStats_45() const { return ___OnRemoteVideoStats_45; }
	inline OnRemoteVideoStatsHandler_tDC13C73486A0A3FC0E604A5095C6CDF269635E7F ** get_address_of_OnRemoteVideoStats_45() { return &___OnRemoteVideoStats_45; }
	inline void set_OnRemoteVideoStats_45(OnRemoteVideoStatsHandler_tDC13C73486A0A3FC0E604A5095C6CDF269635E7F * value)
	{
		___OnRemoteVideoStats_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteVideoStats_45), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteAudioStats_46() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteAudioStats_46)); }
	inline OnRemoteAudioStatsHandler_t9E64F16570DCDEBA6FD892F7901ACDD14F218AAA * get_OnRemoteAudioStats_46() const { return ___OnRemoteAudioStats_46; }
	inline OnRemoteAudioStatsHandler_t9E64F16570DCDEBA6FD892F7901ACDD14F218AAA ** get_address_of_OnRemoteAudioStats_46() { return &___OnRemoteAudioStats_46; }
	inline void set_OnRemoteAudioStats_46(OnRemoteAudioStatsHandler_t9E64F16570DCDEBA6FD892F7901ACDD14F218AAA * value)
	{
		___OnRemoteAudioStats_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteAudioStats_46), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioDeviceStateChanged_47() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioDeviceStateChanged_47)); }
	inline OnAudioDeviceStateChangedHandler_t2DC8AB589EE49A6F1E7C7947BE34DB1236499A93 * get_OnAudioDeviceStateChanged_47() const { return ___OnAudioDeviceStateChanged_47; }
	inline OnAudioDeviceStateChangedHandler_t2DC8AB589EE49A6F1E7C7947BE34DB1236499A93 ** get_address_of_OnAudioDeviceStateChanged_47() { return &___OnAudioDeviceStateChanged_47; }
	inline void set_OnAudioDeviceStateChanged_47(OnAudioDeviceStateChangedHandler_t2DC8AB589EE49A6F1E7C7947BE34DB1236499A93 * value)
	{
		___OnAudioDeviceStateChanged_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioDeviceStateChanged_47), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraReady_48() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnCameraReady_48)); }
	inline OnCameraReadyHandler_tB855A0B49B6D86457FEB8B0679D97F988CCCCEE2 * get_OnCameraReady_48() const { return ___OnCameraReady_48; }
	inline OnCameraReadyHandler_tB855A0B49B6D86457FEB8B0679D97F988CCCCEE2 ** get_address_of_OnCameraReady_48() { return &___OnCameraReady_48; }
	inline void set_OnCameraReady_48(OnCameraReadyHandler_tB855A0B49B6D86457FEB8B0679D97F988CCCCEE2 * value)
	{
		___OnCameraReady_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraReady_48), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraFocusAreaChanged_49() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnCameraFocusAreaChanged_49)); }
	inline OnCameraFocusAreaChangedHandler_t2098D6E61A974B6EA9882DA0F209B927A707304E * get_OnCameraFocusAreaChanged_49() const { return ___OnCameraFocusAreaChanged_49; }
	inline OnCameraFocusAreaChangedHandler_t2098D6E61A974B6EA9882DA0F209B927A707304E ** get_address_of_OnCameraFocusAreaChanged_49() { return &___OnCameraFocusAreaChanged_49; }
	inline void set_OnCameraFocusAreaChanged_49(OnCameraFocusAreaChangedHandler_t2098D6E61A974B6EA9882DA0F209B927A707304E * value)
	{
		___OnCameraFocusAreaChanged_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraFocusAreaChanged_49), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraExposureAreaChanged_50() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnCameraExposureAreaChanged_50)); }
	inline OnCameraExposureAreaChangedHandler_tD8392F871DE0231E92537D1790392817D2EBFEF7 * get_OnCameraExposureAreaChanged_50() const { return ___OnCameraExposureAreaChanged_50; }
	inline OnCameraExposureAreaChangedHandler_tD8392F871DE0231E92537D1790392817D2EBFEF7 ** get_address_of_OnCameraExposureAreaChanged_50() { return &___OnCameraExposureAreaChanged_50; }
	inline void set_OnCameraExposureAreaChanged_50(OnCameraExposureAreaChangedHandler_tD8392F871DE0231E92537D1790392817D2EBFEF7 * value)
	{
		___OnCameraExposureAreaChanged_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraExposureAreaChanged_50), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteAudioMixingBegin_51() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteAudioMixingBegin_51)); }
	inline OnRemoteAudioMixingBeginHandler_t527208495C8D1910C2289F942A4682D67C0EE6A0 * get_OnRemoteAudioMixingBegin_51() const { return ___OnRemoteAudioMixingBegin_51; }
	inline OnRemoteAudioMixingBeginHandler_t527208495C8D1910C2289F942A4682D67C0EE6A0 ** get_address_of_OnRemoteAudioMixingBegin_51() { return &___OnRemoteAudioMixingBegin_51; }
	inline void set_OnRemoteAudioMixingBegin_51(OnRemoteAudioMixingBeginHandler_t527208495C8D1910C2289F942A4682D67C0EE6A0 * value)
	{
		___OnRemoteAudioMixingBegin_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteAudioMixingBegin_51), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteAudioMixingEnd_52() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteAudioMixingEnd_52)); }
	inline OnRemoteAudioMixingEndHandler_t98C03E049F02C17279B559B8CA046A71ACF0A73A * get_OnRemoteAudioMixingEnd_52() const { return ___OnRemoteAudioMixingEnd_52; }
	inline OnRemoteAudioMixingEndHandler_t98C03E049F02C17279B559B8CA046A71ACF0A73A ** get_address_of_OnRemoteAudioMixingEnd_52() { return &___OnRemoteAudioMixingEnd_52; }
	inline void set_OnRemoteAudioMixingEnd_52(OnRemoteAudioMixingEndHandler_t98C03E049F02C17279B559B8CA046A71ACF0A73A * value)
	{
		___OnRemoteAudioMixingEnd_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteAudioMixingEnd_52), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioEffectFinished_53() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioEffectFinished_53)); }
	inline OnAudioEffectFinishedHandler_t9EFA77E7D5C53883A97970E48C91992673718563 * get_OnAudioEffectFinished_53() const { return ___OnAudioEffectFinished_53; }
	inline OnAudioEffectFinishedHandler_t9EFA77E7D5C53883A97970E48C91992673718563 ** get_address_of_OnAudioEffectFinished_53() { return &___OnAudioEffectFinished_53; }
	inline void set_OnAudioEffectFinished_53(OnAudioEffectFinishedHandler_t9EFA77E7D5C53883A97970E48C91992673718563 * value)
	{
		___OnAudioEffectFinished_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioEffectFinished_53), (void*)value);
	}

	inline static int32_t get_offset_of_OnVideoDeviceStateChanged_54() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnVideoDeviceStateChanged_54)); }
	inline OnVideoDeviceStateChangedHandler_t560B6E3CDC6F0A01EE7F7C709DF0662904A2C949 * get_OnVideoDeviceStateChanged_54() const { return ___OnVideoDeviceStateChanged_54; }
	inline OnVideoDeviceStateChangedHandler_t560B6E3CDC6F0A01EE7F7C709DF0662904A2C949 ** get_address_of_OnVideoDeviceStateChanged_54() { return &___OnVideoDeviceStateChanged_54; }
	inline void set_OnVideoDeviceStateChanged_54(OnVideoDeviceStateChangedHandler_t560B6E3CDC6F0A01EE7F7C709DF0662904A2C949 * value)
	{
		___OnVideoDeviceStateChanged_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVideoDeviceStateChanged_54), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteVideoTransportStats_55() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteVideoTransportStats_55)); }
	inline OnRemoteVideoTransportStatsHandler_t9A265EE8ACB968970E50FA99CD3700491BD6B2D8 * get_OnRemoteVideoTransportStats_55() const { return ___OnRemoteVideoTransportStats_55; }
	inline OnRemoteVideoTransportStatsHandler_t9A265EE8ACB968970E50FA99CD3700491BD6B2D8 ** get_address_of_OnRemoteVideoTransportStats_55() { return &___OnRemoteVideoTransportStats_55; }
	inline void set_OnRemoteVideoTransportStats_55(OnRemoteVideoTransportStatsHandler_t9A265EE8ACB968970E50FA99CD3700491BD6B2D8 * value)
	{
		___OnRemoteVideoTransportStats_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteVideoTransportStats_55), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteAudioTransportStats_56() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteAudioTransportStats_56)); }
	inline OnRemoteAudioTransportStatsHandler_tCC4062D17FC15A9D061A4CF0FDFF9EC5F28B471C * get_OnRemoteAudioTransportStats_56() const { return ___OnRemoteAudioTransportStats_56; }
	inline OnRemoteAudioTransportStatsHandler_tCC4062D17FC15A9D061A4CF0FDFF9EC5F28B471C ** get_address_of_OnRemoteAudioTransportStats_56() { return &___OnRemoteAudioTransportStats_56; }
	inline void set_OnRemoteAudioTransportStats_56(OnRemoteAudioTransportStatsHandler_tCC4062D17FC15A9D061A4CF0FDFF9EC5F28B471C * value)
	{
		___OnRemoteAudioTransportStats_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteAudioTransportStats_56), (void*)value);
	}

	inline static int32_t get_offset_of_OnTranscodingUpdated_57() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnTranscodingUpdated_57)); }
	inline OnTranscodingUpdatedHandler_tE31A572FB12BDC8CE02F0B3C168CF1C45CDE8958 * get_OnTranscodingUpdated_57() const { return ___OnTranscodingUpdated_57; }
	inline OnTranscodingUpdatedHandler_tE31A572FB12BDC8CE02F0B3C168CF1C45CDE8958 ** get_address_of_OnTranscodingUpdated_57() { return &___OnTranscodingUpdated_57; }
	inline void set_OnTranscodingUpdated_57(OnTranscodingUpdatedHandler_tE31A572FB12BDC8CE02F0B3C168CF1C45CDE8958 * value)
	{
		___OnTranscodingUpdated_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTranscodingUpdated_57), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioDeviceVolumeChanged_58() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioDeviceVolumeChanged_58)); }
	inline OnAudioDeviceVolumeChangedHandler_tEE346951A1AC4079FABC982371ADBD152D798F20 * get_OnAudioDeviceVolumeChanged_58() const { return ___OnAudioDeviceVolumeChanged_58; }
	inline OnAudioDeviceVolumeChangedHandler_tEE346951A1AC4079FABC982371ADBD152D798F20 ** get_address_of_OnAudioDeviceVolumeChanged_58() { return &___OnAudioDeviceVolumeChanged_58; }
	inline void set_OnAudioDeviceVolumeChanged_58(OnAudioDeviceVolumeChangedHandler_tEE346951A1AC4079FABC982371ADBD152D798F20 * value)
	{
		___OnAudioDeviceVolumeChanged_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioDeviceVolumeChanged_58), (void*)value);
	}

	inline static int32_t get_offset_of_OnMediaEngineStartCallSuccess_59() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnMediaEngineStartCallSuccess_59)); }
	inline OnMediaEngineStartCallSuccessHandler_t207D94A03F311B0E97D18668BB6CEA6D3B7EF07C * get_OnMediaEngineStartCallSuccess_59() const { return ___OnMediaEngineStartCallSuccess_59; }
	inline OnMediaEngineStartCallSuccessHandler_t207D94A03F311B0E97D18668BB6CEA6D3B7EF07C ** get_address_of_OnMediaEngineStartCallSuccess_59() { return &___OnMediaEngineStartCallSuccess_59; }
	inline void set_OnMediaEngineStartCallSuccess_59(OnMediaEngineStartCallSuccessHandler_t207D94A03F311B0E97D18668BB6CEA6D3B7EF07C * value)
	{
		___OnMediaEngineStartCallSuccess_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMediaEngineStartCallSuccess_59), (void*)value);
	}

	inline static int32_t get_offset_of_OnMediaEngineLoadSuccess_60() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnMediaEngineLoadSuccess_60)); }
	inline OnMediaEngineLoadSuccessHandler_tB9E3FE65A30FCCF3A17F9C7CCD98820ECE5EF6DC * get_OnMediaEngineLoadSuccess_60() const { return ___OnMediaEngineLoadSuccess_60; }
	inline OnMediaEngineLoadSuccessHandler_tB9E3FE65A30FCCF3A17F9C7CCD98820ECE5EF6DC ** get_address_of_OnMediaEngineLoadSuccess_60() { return &___OnMediaEngineLoadSuccess_60; }
	inline void set_OnMediaEngineLoadSuccess_60(OnMediaEngineLoadSuccessHandler_tB9E3FE65A30FCCF3A17F9C7CCD98820ECE5EF6DC * value)
	{
		___OnMediaEngineLoadSuccess_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMediaEngineLoadSuccess_60), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioMixingStateChanged_61() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnAudioMixingStateChanged_61)); }
	inline OnAudioMixingStateChangedHandler_t96BAA401FB33827536D15FB1ACB7EEFF44A8A427 * get_OnAudioMixingStateChanged_61() const { return ___OnAudioMixingStateChanged_61; }
	inline OnAudioMixingStateChangedHandler_t96BAA401FB33827536D15FB1ACB7EEFF44A8A427 ** get_address_of_OnAudioMixingStateChanged_61() { return &___OnAudioMixingStateChanged_61; }
	inline void set_OnAudioMixingStateChanged_61(OnAudioMixingStateChangedHandler_t96BAA401FB33827536D15FB1ACB7EEFF44A8A427 * value)
	{
		___OnAudioMixingStateChanged_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioMixingStateChanged_61), (void*)value);
	}

	inline static int32_t get_offset_of_OnFirstRemoteAudioDecoded_62() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFirstRemoteAudioDecoded_62)); }
	inline OnFirstRemoteAudioDecodedHandler_tE5EF33D27BD0D8CDE019F9A3D4169451CA6A49BB * get_OnFirstRemoteAudioDecoded_62() const { return ___OnFirstRemoteAudioDecoded_62; }
	inline OnFirstRemoteAudioDecodedHandler_tE5EF33D27BD0D8CDE019F9A3D4169451CA6A49BB ** get_address_of_OnFirstRemoteAudioDecoded_62() { return &___OnFirstRemoteAudioDecoded_62; }
	inline void set_OnFirstRemoteAudioDecoded_62(OnFirstRemoteAudioDecodedHandler_tE5EF33D27BD0D8CDE019F9A3D4169451CA6A49BB * value)
	{
		___OnFirstRemoteAudioDecoded_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFirstRemoteAudioDecoded_62), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocalVideoStateChanged_63() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLocalVideoStateChanged_63)); }
	inline OnLocalVideoStateChangedHandler_t9A37E514FD8C3305CA1F9130B59577DEE5DE7432 * get_OnLocalVideoStateChanged_63() const { return ___OnLocalVideoStateChanged_63; }
	inline OnLocalVideoStateChangedHandler_t9A37E514FD8C3305CA1F9130B59577DEE5DE7432 ** get_address_of_OnLocalVideoStateChanged_63() { return &___OnLocalVideoStateChanged_63; }
	inline void set_OnLocalVideoStateChanged_63(OnLocalVideoStateChangedHandler_t9A37E514FD8C3305CA1F9130B59577DEE5DE7432 * value)
	{
		___OnLocalVideoStateChanged_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocalVideoStateChanged_63), (void*)value);
	}

	inline static int32_t get_offset_of_OnRtmpStreamingStateChanged_64() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRtmpStreamingStateChanged_64)); }
	inline OnRtmpStreamingStateChangedHandler_t3C2A5FB1A3ED864B8990B62B3D0AA2210F9812A5 * get_OnRtmpStreamingStateChanged_64() const { return ___OnRtmpStreamingStateChanged_64; }
	inline OnRtmpStreamingStateChangedHandler_t3C2A5FB1A3ED864B8990B62B3D0AA2210F9812A5 ** get_address_of_OnRtmpStreamingStateChanged_64() { return &___OnRtmpStreamingStateChanged_64; }
	inline void set_OnRtmpStreamingStateChanged_64(OnRtmpStreamingStateChangedHandler_t3C2A5FB1A3ED864B8990B62B3D0AA2210F9812A5 * value)
	{
		___OnRtmpStreamingStateChanged_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRtmpStreamingStateChanged_64), (void*)value);
	}

	inline static int32_t get_offset_of_OnNetworkTypeChanged_65() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnNetworkTypeChanged_65)); }
	inline OnNetworkTypeChangedHandler_tDF04336650580F79333AF2DF79A13FC299FFBB80 * get_OnNetworkTypeChanged_65() const { return ___OnNetworkTypeChanged_65; }
	inline OnNetworkTypeChangedHandler_tDF04336650580F79333AF2DF79A13FC299FFBB80 ** get_address_of_OnNetworkTypeChanged_65() { return &___OnNetworkTypeChanged_65; }
	inline void set_OnNetworkTypeChanged_65(OnNetworkTypeChangedHandler_tDF04336650580F79333AF2DF79A13FC299FFBB80 * value)
	{
		___OnNetworkTypeChanged_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNetworkTypeChanged_65), (void*)value);
	}

	inline static int32_t get_offset_of_OnLastmileProbeResult_66() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLastmileProbeResult_66)); }
	inline OnLastmileProbeResultHandler_tE294E782F2B8C5903478E7AC78D6DA4BA6938B55 * get_OnLastmileProbeResult_66() const { return ___OnLastmileProbeResult_66; }
	inline OnLastmileProbeResultHandler_tE294E782F2B8C5903478E7AC78D6DA4BA6938B55 ** get_address_of_OnLastmileProbeResult_66() { return &___OnLastmileProbeResult_66; }
	inline void set_OnLastmileProbeResult_66(OnLastmileProbeResultHandler_tE294E782F2B8C5903478E7AC78D6DA4BA6938B55 * value)
	{
		___OnLastmileProbeResult_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLastmileProbeResult_66), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocalUserRegistered_67() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLocalUserRegistered_67)); }
	inline OnLocalUserRegisteredHandler_tDEC8D6B725F730F1447C11F09772EB9C789F5A64 * get_OnLocalUserRegistered_67() const { return ___OnLocalUserRegistered_67; }
	inline OnLocalUserRegisteredHandler_tDEC8D6B725F730F1447C11F09772EB9C789F5A64 ** get_address_of_OnLocalUserRegistered_67() { return &___OnLocalUserRegistered_67; }
	inline void set_OnLocalUserRegistered_67(OnLocalUserRegisteredHandler_tDEC8D6B725F730F1447C11F09772EB9C789F5A64 * value)
	{
		___OnLocalUserRegistered_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocalUserRegistered_67), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserInfoUpdated_68() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnUserInfoUpdated_68)); }
	inline OnUserInfoUpdatedHandler_t8E3243D899ADD660AA8A51B6F93AAFC881361D97 * get_OnUserInfoUpdated_68() const { return ___OnUserInfoUpdated_68; }
	inline OnUserInfoUpdatedHandler_t8E3243D899ADD660AA8A51B6F93AAFC881361D97 ** get_address_of_OnUserInfoUpdated_68() { return &___OnUserInfoUpdated_68; }
	inline void set_OnUserInfoUpdated_68(OnUserInfoUpdatedHandler_t8E3243D899ADD660AA8A51B6F93AAFC881361D97 * value)
	{
		___OnUserInfoUpdated_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserInfoUpdated_68), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocalAudioStateChanged_69() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLocalAudioStateChanged_69)); }
	inline OnLocalAudioStateChangedHandler_tBE769275F07052AD8CB8C12FF6175E752D61080F * get_OnLocalAudioStateChanged_69() const { return ___OnLocalAudioStateChanged_69; }
	inline OnLocalAudioStateChangedHandler_tBE769275F07052AD8CB8C12FF6175E752D61080F ** get_address_of_OnLocalAudioStateChanged_69() { return &___OnLocalAudioStateChanged_69; }
	inline void set_OnLocalAudioStateChanged_69(OnLocalAudioStateChangedHandler_tBE769275F07052AD8CB8C12FF6175E752D61080F * value)
	{
		___OnLocalAudioStateChanged_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocalAudioStateChanged_69), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoteAudioStateChanged_70() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnRemoteAudioStateChanged_70)); }
	inline OnRemoteAudioStateChangedHandler_t83561E5560F82EFD57BBEEA1573F24DD95A0EB9C * get_OnRemoteAudioStateChanged_70() const { return ___OnRemoteAudioStateChanged_70; }
	inline OnRemoteAudioStateChangedHandler_t83561E5560F82EFD57BBEEA1573F24DD95A0EB9C ** get_address_of_OnRemoteAudioStateChanged_70() { return &___OnRemoteAudioStateChanged_70; }
	inline void set_OnRemoteAudioStateChanged_70(OnRemoteAudioStateChangedHandler_t83561E5560F82EFD57BBEEA1573F24DD95A0EB9C * value)
	{
		___OnRemoteAudioStateChanged_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteAudioStateChanged_70), (void*)value);
	}

	inline static int32_t get_offset_of_OnLocalAudioStats_71() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnLocalAudioStats_71)); }
	inline OnLocalAudioStatsHandler_t00BB8885CC665DA8F44FA0296AE93A5BE93AD061 * get_OnLocalAudioStats_71() const { return ___OnLocalAudioStats_71; }
	inline OnLocalAudioStatsHandler_t00BB8885CC665DA8F44FA0296AE93A5BE93AD061 ** get_address_of_OnLocalAudioStats_71() { return &___OnLocalAudioStats_71; }
	inline void set_OnLocalAudioStats_71(OnLocalAudioStatsHandler_t00BB8885CC665DA8F44FA0296AE93A5BE93AD061 * value)
	{
		___OnLocalAudioStats_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLocalAudioStats_71), (void*)value);
	}

	inline static int32_t get_offset_of_OnChannelMediaRelayEvent_72() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnChannelMediaRelayEvent_72)); }
	inline OnChannelMediaRelayEventHandler_tA23B17DFEA93DA780FF8FB11A5DDE6B383E6A0B6 * get_OnChannelMediaRelayEvent_72() const { return ___OnChannelMediaRelayEvent_72; }
	inline OnChannelMediaRelayEventHandler_tA23B17DFEA93DA780FF8FB11A5DDE6B383E6A0B6 ** get_address_of_OnChannelMediaRelayEvent_72() { return &___OnChannelMediaRelayEvent_72; }
	inline void set_OnChannelMediaRelayEvent_72(OnChannelMediaRelayEventHandler_tA23B17DFEA93DA780FF8FB11A5DDE6B383E6A0B6 * value)
	{
		___OnChannelMediaRelayEvent_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChannelMediaRelayEvent_72), (void*)value);
	}

	inline static int32_t get_offset_of_OnChannelMediaRelayStateChanged_73() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnChannelMediaRelayStateChanged_73)); }
	inline OnChannelMediaRelayStateChangedHandler_t0006D48B86275805D7B32226E2B6CC7DA0BDBF8D * get_OnChannelMediaRelayStateChanged_73() const { return ___OnChannelMediaRelayStateChanged_73; }
	inline OnChannelMediaRelayStateChangedHandler_t0006D48B86275805D7B32226E2B6CC7DA0BDBF8D ** get_address_of_OnChannelMediaRelayStateChanged_73() { return &___OnChannelMediaRelayStateChanged_73; }
	inline void set_OnChannelMediaRelayStateChanged_73(OnChannelMediaRelayStateChangedHandler_t0006D48B86275805D7B32226E2B6CC7DA0BDBF8D * value)
	{
		___OnChannelMediaRelayStateChanged_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChannelMediaRelayStateChanged_73), (void*)value);
	}

	inline static int32_t get_offset_of_OnFacePositionChanged_74() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___OnFacePositionChanged_74)); }
	inline OnFacePositionChangedHandler_tECDAB5467B5165EAB4D26FB360C0C4A007D2BF1B * get_OnFacePositionChanged_74() const { return ___OnFacePositionChanged_74; }
	inline OnFacePositionChangedHandler_tECDAB5467B5165EAB4D26FB360C0C4A007D2BF1B ** get_address_of_OnFacePositionChanged_74() { return &___OnFacePositionChanged_74; }
	inline void set_OnFacePositionChanged_74(OnFacePositionChangedHandler_tECDAB5467B5165EAB4D26FB360C0C4A007D2BF1B * value)
	{
		___OnFacePositionChanged_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFacePositionChanged_74), (void*)value);
	}

	inline static int32_t get_offset_of_mAudioEffectM_75() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___mAudioEffectM_75)); }
	inline AudioEffectManagerImpl_tEEE18FDD7EDF410A1EC9200722B68834E96F2F53 * get_mAudioEffectM_75() const { return ___mAudioEffectM_75; }
	inline AudioEffectManagerImpl_tEEE18FDD7EDF410A1EC9200722B68834E96F2F53 ** get_address_of_mAudioEffectM_75() { return &___mAudioEffectM_75; }
	inline void set_mAudioEffectM_75(AudioEffectManagerImpl_tEEE18FDD7EDF410A1EC9200722B68834E96F2F53 * value)
	{
		___mAudioEffectM_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAudioEffectM_75), (void*)value);
	}

	inline static int32_t get_offset_of_audioRecordingDeviceManager_76() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___audioRecordingDeviceManager_76)); }
	inline AudioRecordingDeviceManager_t00FF0F998F0416E5BD5F2B988520CFF374D32123 * get_audioRecordingDeviceManager_76() const { return ___audioRecordingDeviceManager_76; }
	inline AudioRecordingDeviceManager_t00FF0F998F0416E5BD5F2B988520CFF374D32123 ** get_address_of_audioRecordingDeviceManager_76() { return &___audioRecordingDeviceManager_76; }
	inline void set_audioRecordingDeviceManager_76(AudioRecordingDeviceManager_t00FF0F998F0416E5BD5F2B988520CFF374D32123 * value)
	{
		___audioRecordingDeviceManager_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioRecordingDeviceManager_76), (void*)value);
	}

	inline static int32_t get_offset_of_audioPlaybackDeviceManager_77() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___audioPlaybackDeviceManager_77)); }
	inline AudioPlaybackDeviceManager_t0CC36B1B5E9F977BABFFDE95C846ED960AF252F8 * get_audioPlaybackDeviceManager_77() const { return ___audioPlaybackDeviceManager_77; }
	inline AudioPlaybackDeviceManager_t0CC36B1B5E9F977BABFFDE95C846ED960AF252F8 ** get_address_of_audioPlaybackDeviceManager_77() { return &___audioPlaybackDeviceManager_77; }
	inline void set_audioPlaybackDeviceManager_77(AudioPlaybackDeviceManager_t0CC36B1B5E9F977BABFFDE95C846ED960AF252F8 * value)
	{
		___audioPlaybackDeviceManager_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioPlaybackDeviceManager_77), (void*)value);
	}

	inline static int32_t get_offset_of_videoDeviceManager_78() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___videoDeviceManager_78)); }
	inline VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * get_videoDeviceManager_78() const { return ___videoDeviceManager_78; }
	inline VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F ** get_address_of_videoDeviceManager_78() { return &___videoDeviceManager_78; }
	inline void set_videoDeviceManager_78(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * value)
	{
		___videoDeviceManager_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoDeviceManager_78), (void*)value);
	}

	inline static int32_t get_offset_of_audioRawDataManager_79() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___audioRawDataManager_79)); }
	inline AudioRawDataManager_tCB9E121DC1E9E16694307C560A1CD2B108A2E4F5 * get_audioRawDataManager_79() const { return ___audioRawDataManager_79; }
	inline AudioRawDataManager_tCB9E121DC1E9E16694307C560A1CD2B108A2E4F5 ** get_address_of_audioRawDataManager_79() { return &___audioRawDataManager_79; }
	inline void set_audioRawDataManager_79(AudioRawDataManager_tCB9E121DC1E9E16694307C560A1CD2B108A2E4F5 * value)
	{
		___audioRawDataManager_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioRawDataManager_79), (void*)value);
	}

	inline static int32_t get_offset_of_videoRawDataManager_80() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___videoRawDataManager_80)); }
	inline VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * get_videoRawDataManager_80() const { return ___videoRawDataManager_80; }
	inline VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 ** get_address_of_videoRawDataManager_80() { return &___videoRawDataManager_80; }
	inline void set_videoRawDataManager_80(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * value)
	{
		___videoRawDataManager_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoRawDataManager_80), (void*)value);
	}

	inline static int32_t get_offset_of_videoRender_81() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ___videoRender_81)); }
	inline VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * get_videoRender_81() const { return ___videoRender_81; }
	inline VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 ** get_address_of_videoRender_81() { return &___videoRender_81; }
	inline void set_videoRender_81(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * value)
	{
		___videoRender_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoRender_81), (void*)value);
	}

	inline static int32_t get_offset_of__AgoraCallbackObject_83() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6, ____AgoraCallbackObject_83)); }
	inline AgoraCallbackObject_t0D5D07510A1B3D9E78206DDB3C17D0C9AEE2B580 * get__AgoraCallbackObject_83() const { return ____AgoraCallbackObject_83; }
	inline AgoraCallbackObject_t0D5D07510A1B3D9E78206DDB3C17D0C9AEE2B580 ** get_address_of__AgoraCallbackObject_83() { return &____AgoraCallbackObject_83; }
	inline void set__AgoraCallbackObject_83(AgoraCallbackObject_t0D5D07510A1B3D9E78206DDB3C17D0C9AEE2B580 * value)
	{
		____AgoraCallbackObject_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AgoraCallbackObject_83), (void*)value);
	}
};

struct IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_StaticFields
{
public:
	// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.IRtcEngine::instance
	IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___instance_84;

public:
	inline static int32_t get_offset_of_instance_84() { return static_cast<int32_t>(offsetof(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_StaticFields, ___instance_84)); }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * get_instance_84() const { return ___instance_84; }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 ** get_address_of_instance_84() { return &___instance_84; }
	inline void set_instance_84(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * value)
	{
		___instance_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_84), (void*)value);
	}
};


// agora_gaming_rtc.IVideoDeviceManager
struct  IVideoDeviceManager_t1520D38B302B313429518593232E009148831921  : public IRtcEngineNative_tCD84C70A93C9F95C0ADFD30F37D9B4E5D24EFEA2
{
public:

public:
};


// agora_gaming_rtc.IVideoRawDataManager
struct  IVideoRawDataManager_t29B89A66232A0C71D6A86705B833BB2080742038  : public IRtcEngineNative_tCD84C70A93C9F95C0ADFD30F37D9B4E5D24EFEA2
{
public:

public:
};


// agora_gaming_rtc.IVideoRender
struct  IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487  : public IRtcEngineNative_tCD84C70A93C9F95C0ADFD30F37D9B4E5D24EFEA2
{
public:

public:
};


// agora_gaming_rtc.Rectangle
struct  Rectangle_t0408113939463A09E85160D861E98923467A0B41 
{
public:
	// System.Int32 agora_gaming_rtc.Rectangle::x
	int32_t ___x_0;
	// System.Int32 agora_gaming_rtc.Rectangle::y
	int32_t ___y_1;
	// System.Int32 agora_gaming_rtc.Rectangle::width
	int32_t ___width_2;
	// System.Int32 agora_gaming_rtc.Rectangle::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Rectangle_t0408113939463A09E85160D861E98923467A0B41, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Rectangle_t0408113939463A09E85160D861E98923467A0B41, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(Rectangle_t0408113939463A09E85160D861E98923467A0B41, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(Rectangle_t0408113939463A09E85160D861E98923467A0B41, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};


// agora_gaming_rtc.RemoteAudioStats
struct  RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40 
{
public:
	// System.UInt32 agora_gaming_rtc.RemoteAudioStats::uid
	uint32_t ___uid_0;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::quality
	int32_t ___quality_1;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::networkTransportDelay
	int32_t ___networkTransportDelay_2;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::jitterBufferDelay
	int32_t ___jitterBufferDelay_3;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::audioLossRate
	int32_t ___audioLossRate_4;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::numChannels
	int32_t ___numChannels_5;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::receivedSampleRate
	int32_t ___receivedSampleRate_6;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::receivedBitrate
	int32_t ___receivedBitrate_7;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::totalFrozenTime
	int32_t ___totalFrozenTime_8;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::frozenRate
	int32_t ___frozenRate_9;
	// System.Int32 agora_gaming_rtc.RemoteAudioStats::totalActiveTime
	int32_t ___totalActiveTime_10;

public:
	inline static int32_t get_offset_of_uid_0() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___uid_0)); }
	inline uint32_t get_uid_0() const { return ___uid_0; }
	inline uint32_t* get_address_of_uid_0() { return &___uid_0; }
	inline void set_uid_0(uint32_t value)
	{
		___uid_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___quality_1)); }
	inline int32_t get_quality_1() const { return ___quality_1; }
	inline int32_t* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(int32_t value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_networkTransportDelay_2() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___networkTransportDelay_2)); }
	inline int32_t get_networkTransportDelay_2() const { return ___networkTransportDelay_2; }
	inline int32_t* get_address_of_networkTransportDelay_2() { return &___networkTransportDelay_2; }
	inline void set_networkTransportDelay_2(int32_t value)
	{
		___networkTransportDelay_2 = value;
	}

	inline static int32_t get_offset_of_jitterBufferDelay_3() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___jitterBufferDelay_3)); }
	inline int32_t get_jitterBufferDelay_3() const { return ___jitterBufferDelay_3; }
	inline int32_t* get_address_of_jitterBufferDelay_3() { return &___jitterBufferDelay_3; }
	inline void set_jitterBufferDelay_3(int32_t value)
	{
		___jitterBufferDelay_3 = value;
	}

	inline static int32_t get_offset_of_audioLossRate_4() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___audioLossRate_4)); }
	inline int32_t get_audioLossRate_4() const { return ___audioLossRate_4; }
	inline int32_t* get_address_of_audioLossRate_4() { return &___audioLossRate_4; }
	inline void set_audioLossRate_4(int32_t value)
	{
		___audioLossRate_4 = value;
	}

	inline static int32_t get_offset_of_numChannels_5() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___numChannels_5)); }
	inline int32_t get_numChannels_5() const { return ___numChannels_5; }
	inline int32_t* get_address_of_numChannels_5() { return &___numChannels_5; }
	inline void set_numChannels_5(int32_t value)
	{
		___numChannels_5 = value;
	}

	inline static int32_t get_offset_of_receivedSampleRate_6() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___receivedSampleRate_6)); }
	inline int32_t get_receivedSampleRate_6() const { return ___receivedSampleRate_6; }
	inline int32_t* get_address_of_receivedSampleRate_6() { return &___receivedSampleRate_6; }
	inline void set_receivedSampleRate_6(int32_t value)
	{
		___receivedSampleRate_6 = value;
	}

	inline static int32_t get_offset_of_receivedBitrate_7() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___receivedBitrate_7)); }
	inline int32_t get_receivedBitrate_7() const { return ___receivedBitrate_7; }
	inline int32_t* get_address_of_receivedBitrate_7() { return &___receivedBitrate_7; }
	inline void set_receivedBitrate_7(int32_t value)
	{
		___receivedBitrate_7 = value;
	}

	inline static int32_t get_offset_of_totalFrozenTime_8() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___totalFrozenTime_8)); }
	inline int32_t get_totalFrozenTime_8() const { return ___totalFrozenTime_8; }
	inline int32_t* get_address_of_totalFrozenTime_8() { return &___totalFrozenTime_8; }
	inline void set_totalFrozenTime_8(int32_t value)
	{
		___totalFrozenTime_8 = value;
	}

	inline static int32_t get_offset_of_frozenRate_9() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___frozenRate_9)); }
	inline int32_t get_frozenRate_9() const { return ___frozenRate_9; }
	inline int32_t* get_address_of_frozenRate_9() { return &___frozenRate_9; }
	inline void set_frozenRate_9(int32_t value)
	{
		___frozenRate_9 = value;
	}

	inline static int32_t get_offset_of_totalActiveTime_10() { return static_cast<int32_t>(offsetof(RemoteAudioStats_tCA6728D1A76501E73EB0BE2898C4E5707ACDEB40, ___totalActiveTime_10)); }
	inline int32_t get_totalActiveTime_10() const { return ___totalActiveTime_10; }
	inline int32_t* get_address_of_totalActiveTime_10() { return &___totalActiveTime_10; }
	inline void set_totalActiveTime_10(int32_t value)
	{
		___totalActiveTime_10 = value;
	}
};


// agora_gaming_rtc.RtcImage
struct  RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424 
{
public:
	// System.String agora_gaming_rtc.RtcImage::url
	String_t* ___url_0;
	// System.Int32 agora_gaming_rtc.RtcImage::x
	int32_t ___x_1;
	// System.Int32 agora_gaming_rtc.RtcImage::y
	int32_t ___y_2;
	// System.Int32 agora_gaming_rtc.RtcImage::width
	int32_t ___width_3;
	// System.Int32 agora_gaming_rtc.RtcImage::height
	int32_t ___height_4;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424, ___x_1)); }
	inline int32_t get_x_1() const { return ___x_1; }
	inline int32_t* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(int32_t value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424, ___y_2)); }
	inline int32_t get_y_2() const { return ___y_2; }
	inline int32_t* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(int32_t value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424, ___height_4)); }
	inline int32_t get_height_4() const { return ___height_4; }
	inline int32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(int32_t value)
	{
		___height_4 = value;
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.RtcImage
struct RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_pinvoke
{
	char* ___url_0;
	int32_t ___x_1;
	int32_t ___y_2;
	int32_t ___width_3;
	int32_t ___height_4;
};
// Native definition for COM marshalling of agora_gaming_rtc.RtcImage
struct RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_com
{
	Il2CppChar* ___url_0;
	int32_t ___x_1;
	int32_t ___y_2;
	int32_t ___width_3;
	int32_t ___height_4;
};

// agora_gaming_rtc.RtcStats
struct  RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C 
{
public:
	// System.UInt32 agora_gaming_rtc.RtcStats::duration
	uint32_t ___duration_0;
	// System.UInt32 agora_gaming_rtc.RtcStats::txBytes
	uint32_t ___txBytes_1;
	// System.UInt32 agora_gaming_rtc.RtcStats::rxBytes
	uint32_t ___rxBytes_2;
	// System.UInt32 agora_gaming_rtc.RtcStats::txAudioBytes
	uint32_t ___txAudioBytes_3;
	// System.UInt32 agora_gaming_rtc.RtcStats::txVideoBytes
	uint32_t ___txVideoBytes_4;
	// System.UInt32 agora_gaming_rtc.RtcStats::rxAudioBytes
	uint32_t ___rxAudioBytes_5;
	// System.UInt32 agora_gaming_rtc.RtcStats::rxVideoBytes
	uint32_t ___rxVideoBytes_6;
	// System.UInt32 agora_gaming_rtc.RtcStats::txKBitRate
	uint32_t ___txKBitRate_7;
	// System.UInt32 agora_gaming_rtc.RtcStats::rxKBitRate
	uint32_t ___rxKBitRate_8;
	// System.UInt32 agora_gaming_rtc.RtcStats::rxAudioKBitRate
	uint32_t ___rxAudioKBitRate_9;
	// System.UInt32 agora_gaming_rtc.RtcStats::txAudioKBitRate
	uint32_t ___txAudioKBitRate_10;
	// System.UInt32 agora_gaming_rtc.RtcStats::rxVideoKBitRate
	uint32_t ___rxVideoKBitRate_11;
	// System.UInt32 agora_gaming_rtc.RtcStats::txVideoKBitRate
	uint32_t ___txVideoKBitRate_12;
	// System.UInt16 agora_gaming_rtc.RtcStats::lastmileDelay
	uint16_t ___lastmileDelay_13;
	// System.UInt16 agora_gaming_rtc.RtcStats::txPacketLossRate
	uint16_t ___txPacketLossRate_14;
	// System.UInt16 agora_gaming_rtc.RtcStats::rxPacketLossRate
	uint16_t ___rxPacketLossRate_15;
	// System.UInt32 agora_gaming_rtc.RtcStats::userCount
	uint32_t ___userCount_16;
	// System.Double agora_gaming_rtc.RtcStats::cpuAppUsage
	double ___cpuAppUsage_17;
	// System.Double agora_gaming_rtc.RtcStats::cpuTotalUsage
	double ___cpuTotalUsage_18;
	// System.Int32 agora_gaming_rtc.RtcStats::gatewayRtt
	int32_t ___gatewayRtt_19;
	// System.Double agora_gaming_rtc.RtcStats::memoryAppUsageRatio
	double ___memoryAppUsageRatio_20;
	// System.Double agora_gaming_rtc.RtcStats::memoryTotalUsageRatio
	double ___memoryTotalUsageRatio_21;
	// System.Int32 agora_gaming_rtc.RtcStats::memoryAppUsageInKbytes
	int32_t ___memoryAppUsageInKbytes_22;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___duration_0)); }
	inline uint32_t get_duration_0() const { return ___duration_0; }
	inline uint32_t* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(uint32_t value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_txBytes_1() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txBytes_1)); }
	inline uint32_t get_txBytes_1() const { return ___txBytes_1; }
	inline uint32_t* get_address_of_txBytes_1() { return &___txBytes_1; }
	inline void set_txBytes_1(uint32_t value)
	{
		___txBytes_1 = value;
	}

	inline static int32_t get_offset_of_rxBytes_2() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxBytes_2)); }
	inline uint32_t get_rxBytes_2() const { return ___rxBytes_2; }
	inline uint32_t* get_address_of_rxBytes_2() { return &___rxBytes_2; }
	inline void set_rxBytes_2(uint32_t value)
	{
		___rxBytes_2 = value;
	}

	inline static int32_t get_offset_of_txAudioBytes_3() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txAudioBytes_3)); }
	inline uint32_t get_txAudioBytes_3() const { return ___txAudioBytes_3; }
	inline uint32_t* get_address_of_txAudioBytes_3() { return &___txAudioBytes_3; }
	inline void set_txAudioBytes_3(uint32_t value)
	{
		___txAudioBytes_3 = value;
	}

	inline static int32_t get_offset_of_txVideoBytes_4() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txVideoBytes_4)); }
	inline uint32_t get_txVideoBytes_4() const { return ___txVideoBytes_4; }
	inline uint32_t* get_address_of_txVideoBytes_4() { return &___txVideoBytes_4; }
	inline void set_txVideoBytes_4(uint32_t value)
	{
		___txVideoBytes_4 = value;
	}

	inline static int32_t get_offset_of_rxAudioBytes_5() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxAudioBytes_5)); }
	inline uint32_t get_rxAudioBytes_5() const { return ___rxAudioBytes_5; }
	inline uint32_t* get_address_of_rxAudioBytes_5() { return &___rxAudioBytes_5; }
	inline void set_rxAudioBytes_5(uint32_t value)
	{
		___rxAudioBytes_5 = value;
	}

	inline static int32_t get_offset_of_rxVideoBytes_6() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxVideoBytes_6)); }
	inline uint32_t get_rxVideoBytes_6() const { return ___rxVideoBytes_6; }
	inline uint32_t* get_address_of_rxVideoBytes_6() { return &___rxVideoBytes_6; }
	inline void set_rxVideoBytes_6(uint32_t value)
	{
		___rxVideoBytes_6 = value;
	}

	inline static int32_t get_offset_of_txKBitRate_7() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txKBitRate_7)); }
	inline uint32_t get_txKBitRate_7() const { return ___txKBitRate_7; }
	inline uint32_t* get_address_of_txKBitRate_7() { return &___txKBitRate_7; }
	inline void set_txKBitRate_7(uint32_t value)
	{
		___txKBitRate_7 = value;
	}

	inline static int32_t get_offset_of_rxKBitRate_8() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxKBitRate_8)); }
	inline uint32_t get_rxKBitRate_8() const { return ___rxKBitRate_8; }
	inline uint32_t* get_address_of_rxKBitRate_8() { return &___rxKBitRate_8; }
	inline void set_rxKBitRate_8(uint32_t value)
	{
		___rxKBitRate_8 = value;
	}

	inline static int32_t get_offset_of_rxAudioKBitRate_9() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxAudioKBitRate_9)); }
	inline uint32_t get_rxAudioKBitRate_9() const { return ___rxAudioKBitRate_9; }
	inline uint32_t* get_address_of_rxAudioKBitRate_9() { return &___rxAudioKBitRate_9; }
	inline void set_rxAudioKBitRate_9(uint32_t value)
	{
		___rxAudioKBitRate_9 = value;
	}

	inline static int32_t get_offset_of_txAudioKBitRate_10() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txAudioKBitRate_10)); }
	inline uint32_t get_txAudioKBitRate_10() const { return ___txAudioKBitRate_10; }
	inline uint32_t* get_address_of_txAudioKBitRate_10() { return &___txAudioKBitRate_10; }
	inline void set_txAudioKBitRate_10(uint32_t value)
	{
		___txAudioKBitRate_10 = value;
	}

	inline static int32_t get_offset_of_rxVideoKBitRate_11() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxVideoKBitRate_11)); }
	inline uint32_t get_rxVideoKBitRate_11() const { return ___rxVideoKBitRate_11; }
	inline uint32_t* get_address_of_rxVideoKBitRate_11() { return &___rxVideoKBitRate_11; }
	inline void set_rxVideoKBitRate_11(uint32_t value)
	{
		___rxVideoKBitRate_11 = value;
	}

	inline static int32_t get_offset_of_txVideoKBitRate_12() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txVideoKBitRate_12)); }
	inline uint32_t get_txVideoKBitRate_12() const { return ___txVideoKBitRate_12; }
	inline uint32_t* get_address_of_txVideoKBitRate_12() { return &___txVideoKBitRate_12; }
	inline void set_txVideoKBitRate_12(uint32_t value)
	{
		___txVideoKBitRate_12 = value;
	}

	inline static int32_t get_offset_of_lastmileDelay_13() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___lastmileDelay_13)); }
	inline uint16_t get_lastmileDelay_13() const { return ___lastmileDelay_13; }
	inline uint16_t* get_address_of_lastmileDelay_13() { return &___lastmileDelay_13; }
	inline void set_lastmileDelay_13(uint16_t value)
	{
		___lastmileDelay_13 = value;
	}

	inline static int32_t get_offset_of_txPacketLossRate_14() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___txPacketLossRate_14)); }
	inline uint16_t get_txPacketLossRate_14() const { return ___txPacketLossRate_14; }
	inline uint16_t* get_address_of_txPacketLossRate_14() { return &___txPacketLossRate_14; }
	inline void set_txPacketLossRate_14(uint16_t value)
	{
		___txPacketLossRate_14 = value;
	}

	inline static int32_t get_offset_of_rxPacketLossRate_15() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___rxPacketLossRate_15)); }
	inline uint16_t get_rxPacketLossRate_15() const { return ___rxPacketLossRate_15; }
	inline uint16_t* get_address_of_rxPacketLossRate_15() { return &___rxPacketLossRate_15; }
	inline void set_rxPacketLossRate_15(uint16_t value)
	{
		___rxPacketLossRate_15 = value;
	}

	inline static int32_t get_offset_of_userCount_16() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___userCount_16)); }
	inline uint32_t get_userCount_16() const { return ___userCount_16; }
	inline uint32_t* get_address_of_userCount_16() { return &___userCount_16; }
	inline void set_userCount_16(uint32_t value)
	{
		___userCount_16 = value;
	}

	inline static int32_t get_offset_of_cpuAppUsage_17() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___cpuAppUsage_17)); }
	inline double get_cpuAppUsage_17() const { return ___cpuAppUsage_17; }
	inline double* get_address_of_cpuAppUsage_17() { return &___cpuAppUsage_17; }
	inline void set_cpuAppUsage_17(double value)
	{
		___cpuAppUsage_17 = value;
	}

	inline static int32_t get_offset_of_cpuTotalUsage_18() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___cpuTotalUsage_18)); }
	inline double get_cpuTotalUsage_18() const { return ___cpuTotalUsage_18; }
	inline double* get_address_of_cpuTotalUsage_18() { return &___cpuTotalUsage_18; }
	inline void set_cpuTotalUsage_18(double value)
	{
		___cpuTotalUsage_18 = value;
	}

	inline static int32_t get_offset_of_gatewayRtt_19() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___gatewayRtt_19)); }
	inline int32_t get_gatewayRtt_19() const { return ___gatewayRtt_19; }
	inline int32_t* get_address_of_gatewayRtt_19() { return &___gatewayRtt_19; }
	inline void set_gatewayRtt_19(int32_t value)
	{
		___gatewayRtt_19 = value;
	}

	inline static int32_t get_offset_of_memoryAppUsageRatio_20() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___memoryAppUsageRatio_20)); }
	inline double get_memoryAppUsageRatio_20() const { return ___memoryAppUsageRatio_20; }
	inline double* get_address_of_memoryAppUsageRatio_20() { return &___memoryAppUsageRatio_20; }
	inline void set_memoryAppUsageRatio_20(double value)
	{
		___memoryAppUsageRatio_20 = value;
	}

	inline static int32_t get_offset_of_memoryTotalUsageRatio_21() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___memoryTotalUsageRatio_21)); }
	inline double get_memoryTotalUsageRatio_21() const { return ___memoryTotalUsageRatio_21; }
	inline double* get_address_of_memoryTotalUsageRatio_21() { return &___memoryTotalUsageRatio_21; }
	inline void set_memoryTotalUsageRatio_21(double value)
	{
		___memoryTotalUsageRatio_21 = value;
	}

	inline static int32_t get_offset_of_memoryAppUsageInKbytes_22() { return static_cast<int32_t>(offsetof(RtcStats_t8C518C4FC1733EEFAB6443364801B52E69244C3C, ___memoryAppUsageInKbytes_22)); }
	inline int32_t get_memoryAppUsageInKbytes_22() const { return ___memoryAppUsageInKbytes_22; }
	inline int32_t* get_address_of_memoryAppUsageInKbytes_22() { return &___memoryAppUsageInKbytes_22; }
	inline void set_memoryAppUsageInKbytes_22(int32_t value)
	{
		___memoryAppUsageInKbytes_22 = value;
	}
};


// agora_gaming_rtc.TranscodingUser
struct  TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD 
{
public:
	// System.UInt32 agora_gaming_rtc.TranscodingUser::uid
	uint32_t ___uid_0;
	// System.Int32 agora_gaming_rtc.TranscodingUser::x
	int32_t ___x_1;
	// System.Int32 agora_gaming_rtc.TranscodingUser::y
	int32_t ___y_2;
	// System.Int32 agora_gaming_rtc.TranscodingUser::width
	int32_t ___width_3;
	// System.Int32 agora_gaming_rtc.TranscodingUser::height
	int32_t ___height_4;
	// System.Int32 agora_gaming_rtc.TranscodingUser::zOrder
	int32_t ___zOrder_5;
	// System.Double agora_gaming_rtc.TranscodingUser::alpha
	double ___alpha_6;
	// System.Int32 agora_gaming_rtc.TranscodingUser::audioChannel
	int32_t ___audioChannel_7;

public:
	inline static int32_t get_offset_of_uid_0() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___uid_0)); }
	inline uint32_t get_uid_0() const { return ___uid_0; }
	inline uint32_t* get_address_of_uid_0() { return &___uid_0; }
	inline void set_uid_0(uint32_t value)
	{
		___uid_0 = value;
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___x_1)); }
	inline int32_t get_x_1() const { return ___x_1; }
	inline int32_t* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(int32_t value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___y_2)); }
	inline int32_t get_y_2() const { return ___y_2; }
	inline int32_t* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(int32_t value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___height_4)); }
	inline int32_t get_height_4() const { return ___height_4; }
	inline int32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(int32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_zOrder_5() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___zOrder_5)); }
	inline int32_t get_zOrder_5() const { return ___zOrder_5; }
	inline int32_t* get_address_of_zOrder_5() { return &___zOrder_5; }
	inline void set_zOrder_5(int32_t value)
	{
		___zOrder_5 = value;
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___alpha_6)); }
	inline double get_alpha_6() const { return ___alpha_6; }
	inline double* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(double value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_audioChannel_7() { return static_cast<int32_t>(offsetof(TranscodingUser_tA806CDE7663D7698F12792C900B905C7BD8BDDFD, ___audioChannel_7)); }
	inline int32_t get_audioChannel_7() const { return ___audioChannel_7; }
	inline int32_t* get_address_of_audioChannel_7() { return &___audioChannel_7; }
	inline void set_audioChannel_7(int32_t value)
	{
		___audioChannel_7 = value;
	}
};


// agora_gaming_rtc.UserInfo
struct  UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60 
{
public:
	// System.UInt32 agora_gaming_rtc.UserInfo::uid
	uint32_t ___uid_0;
	// System.String agora_gaming_rtc.UserInfo::userAccount
	String_t* ___userAccount_1;

public:
	inline static int32_t get_offset_of_uid_0() { return static_cast<int32_t>(offsetof(UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60, ___uid_0)); }
	inline uint32_t get_uid_0() const { return ___uid_0; }
	inline uint32_t* get_address_of_uid_0() { return &___uid_0; }
	inline void set_uid_0(uint32_t value)
	{
		___uid_0 = value;
	}

	inline static int32_t get_offset_of_userAccount_1() { return static_cast<int32_t>(offsetof(UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60, ___userAccount_1)); }
	inline String_t* get_userAccount_1() const { return ___userAccount_1; }
	inline String_t** get_address_of_userAccount_1() { return &___userAccount_1; }
	inline void set_userAccount_1(String_t* value)
	{
		___userAccount_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAccount_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.UserInfo
struct UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_pinvoke
{
	uint32_t ___uid_0;
	char* ___userAccount_1;
};
// Native definition for COM marshalling of agora_gaming_rtc.UserInfo
struct UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_com
{
	uint32_t ___uid_0;
	Il2CppChar* ___userAccount_1;
};

// agora_gaming_rtc.VideoDimensions
struct  VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1 
{
public:
	// System.Int32 agora_gaming_rtc.VideoDimensions::width
	int32_t ___width_0;
	// System.Int32 agora_gaming_rtc.VideoDimensions::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.AREA_CODE
struct  AREA_CODE_t85B354AF0B655430FC19910C562F68E1A760E90B 
{
public:
	// System.UInt32 agora_gaming_rtc.AREA_CODE::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AREA_CODE_t85B354AF0B655430FC19910C562F68E1A760E90B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.AgoraVideoSurfaceType
struct  AgoraVideoSurfaceType_t6159F4D7A10F083045AC0EAB53C828956186109A 
{
public:
	// System.Int32 agora_gaming_rtc.AgoraVideoSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AgoraVideoSurfaceType_t6159F4D7A10F083045AC0EAB53C828956186109A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.DEGRADATION_PREFERENCE
struct  DEGRADATION_PREFERENCE_tC8B7BDC8A4FDF2679941E6545E00E49B7BD786EB 
{
public:
	// System.Int32 agora_gaming_rtc.DEGRADATION_PREFERENCE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DEGRADATION_PREFERENCE_tC8B7BDC8A4FDF2679941E6545E00E49B7BD786EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.FRAME_RATE
struct  FRAME_RATE_t9D5EEC9AA6D89A12BC156854320ED4ABFC5FFB3A 
{
public:
	// System.Int32 agora_gaming_rtc.FRAME_RATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FRAME_RATE_t9D5EEC9AA6D89A12BC156854320ED4ABFC5FFB3A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.ORIENTATION_MODE
struct  ORIENTATION_MODE_t32E69BF4E5BA102C5163804C0455B68EF87483F6 
{
public:
	// System.Int32 agora_gaming_rtc.ORIENTATION_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ORIENTATION_MODE_t32E69BF4E5BA102C5163804C0455B68EF87483F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.REMOTE_VIDEO_STREAM_TYPE
struct  REMOTE_VIDEO_STREAM_TYPE_t538F17D068C1466B5C99252F680B1B9890C5BB98 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_VIDEO_STREAM_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_VIDEO_STREAM_TYPE_t538F17D068C1466B5C99252F680B1B9890C5BB98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.RENDER_MODE_TYPE
struct  RENDER_MODE_TYPE_t287C37C8C4937A9DE90FF8CD19337376E4D17E80 
{
public:
	// System.Int32 agora_gaming_rtc.RENDER_MODE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RENDER_MODE_TYPE_t287C37C8C4937A9DE90FF8CD19337376E4D17E80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.RTMP_STREAM_PUBLISH_STATE
struct  RTMP_STREAM_PUBLISH_STATE_tACC06E1539F698C9187DBA6B3EDA4F2970049DCF 
{
public:
	// System.Int32 agora_gaming_rtc.RTMP_STREAM_PUBLISH_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RTMP_STREAM_PUBLISH_STATE_tACC06E1539F698C9187DBA6B3EDA4F2970049DCF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.STREAM_FALLBACK_OPTIONS
struct  STREAM_FALLBACK_OPTIONS_t580B0E3443B04F87389AFFFEA23ABCED1A8124F4 
{
public:
	// System.Int32 agora_gaming_rtc.STREAM_FALLBACK_OPTIONS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(STREAM_FALLBACK_OPTIONS_t580B0E3443B04F87389AFFFEA23ABCED1A8124F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.ScreenCaptureParameters
struct  ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB 
{
public:
	// agora_gaming_rtc.VideoDimensions agora_gaming_rtc.ScreenCaptureParameters::dimensions
	VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  ___dimensions_0;
	// System.Int32 agora_gaming_rtc.ScreenCaptureParameters::frameRate
	int32_t ___frameRate_1;
	// System.Int32 agora_gaming_rtc.ScreenCaptureParameters::bitrate
	int32_t ___bitrate_2;
	// System.Boolean agora_gaming_rtc.ScreenCaptureParameters::captureMouseCursor
	bool ___captureMouseCursor_3;

public:
	inline static int32_t get_offset_of_dimensions_0() { return static_cast<int32_t>(offsetof(ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB, ___dimensions_0)); }
	inline VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  get_dimensions_0() const { return ___dimensions_0; }
	inline VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1 * get_address_of_dimensions_0() { return &___dimensions_0; }
	inline void set_dimensions_0(VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  value)
	{
		___dimensions_0 = value;
	}

	inline static int32_t get_offset_of_frameRate_1() { return static_cast<int32_t>(offsetof(ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB, ___frameRate_1)); }
	inline int32_t get_frameRate_1() const { return ___frameRate_1; }
	inline int32_t* get_address_of_frameRate_1() { return &___frameRate_1; }
	inline void set_frameRate_1(int32_t value)
	{
		___frameRate_1 = value;
	}

	inline static int32_t get_offset_of_bitrate_2() { return static_cast<int32_t>(offsetof(ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB, ___bitrate_2)); }
	inline int32_t get_bitrate_2() const { return ___bitrate_2; }
	inline int32_t* get_address_of_bitrate_2() { return &___bitrate_2; }
	inline void set_bitrate_2(int32_t value)
	{
		___bitrate_2 = value;
	}

	inline static int32_t get_offset_of_captureMouseCursor_3() { return static_cast<int32_t>(offsetof(ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB, ___captureMouseCursor_3)); }
	inline bool get_captureMouseCursor_3() const { return ___captureMouseCursor_3; }
	inline bool* get_address_of_captureMouseCursor_3() { return &___captureMouseCursor_3; }
	inline void set_captureMouseCursor_3(bool value)
	{
		___captureMouseCursor_3 = value;
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.ScreenCaptureParameters
struct ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_pinvoke
{
	VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  ___dimensions_0;
	int32_t ___frameRate_1;
	int32_t ___bitrate_2;
	int32_t ___captureMouseCursor_3;
};
// Native definition for COM marshalling of agora_gaming_rtc.ScreenCaptureParameters
struct ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_com
{
	VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  ___dimensions_0;
	int32_t ___frameRate_1;
	int32_t ___bitrate_2;
	int32_t ___captureMouseCursor_3;
};

// agora_gaming_rtc.USER_OFFLINE_REASON
struct  USER_OFFLINE_REASON_tAF20BBA0FDF644543A1335E5338D3F806F157E40 
{
public:
	// System.Int32 agora_gaming_rtc.USER_OFFLINE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(USER_OFFLINE_REASON_tAF20BBA0FDF644543A1335E5338D3F806F157E40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIDEO_CODEC_PROFILE_TYPE
struct  VIDEO_CODEC_PROFILE_TYPE_tFEAAA6DD3EA057582A3AEB09F598918A4097596B 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_CODEC_PROFILE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_CODEC_PROFILE_TYPE_tFEAAA6DD3EA057582A3AEB09F598918A4097596B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIDEO_CODEC_TYPE
struct  VIDEO_CODEC_TYPE_tD0C483CE9238586AF2FC15C9A22DAF26CDF20E7B 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_CODEC_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_CODEC_TYPE_tD0C483CE9238586AF2FC15C9A22DAF26CDF20E7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIDEO_FRAME_TYPE
struct  VIDEO_FRAME_TYPE_t88AE7BE4026BEE2FDD28C7A993AB6E289067656E 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_FRAME_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_FRAME_TYPE_t88AE7BE4026BEE2FDD28C7A993AB6E289067656E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIDEO_MIRROR_MODE_TYPE
struct  VIDEO_MIRROR_MODE_TYPE_tD7992CC8D94642C6A6029BEAFB7F570BC5304DA0 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_MIRROR_MODE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_MIRROR_MODE_TYPE_tD7992CC8D94642C6A6029BEAFB7F570BC5304DA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIDEO_PROFILE_TYPE
struct  VIDEO_PROFILE_TYPE_t3C6E24DB6EDE71E4E280F9D9861E6A838A0400D0 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_PROFILE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_PROFILE_TYPE_t3C6E24DB6EDE71E4E280F9D9861E6A838A0400D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIDEO_RENDER_MODE
struct  VIDEO_RENDER_MODE_tB1F7E150336ADF7A009DA1A1279C584D6CFBEFD2 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_RENDER_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_RENDER_MODE_tB1F7E150336ADF7A009DA1A1279C584D6CFBEFD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VOICE_CHANGER_PRESET
struct  VOICE_CHANGER_PRESET_t3164AADC9B6E63CFC416CF0ACF0B37D0B2F91830 
{
public:
	// System.Int32 agora_gaming_rtc.VOICE_CHANGER_PRESET::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VOICE_CHANGER_PRESET_t3164AADC9B6E63CFC416CF0ACF0B37D0B2F91830, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VideoContentHint
struct  VideoContentHint_t186EEB8BACA7A7A5861618DF5B48761481A30767 
{
public:
	// System.Int32 agora_gaming_rtc.VideoContentHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoContentHint_t186EEB8BACA7A7A5861618DF5B48761481A30767, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VideoDeviceManager
struct  VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F  : public IVideoDeviceManager_t1520D38B302B313429518593232E009148831921
{
public:
	// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.VideoDeviceManager::_mEngine
	IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ____mEngine_1;

public:
	inline static int32_t get_offset_of__mEngine_1() { return static_cast<int32_t>(offsetof(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F, ____mEngine_1)); }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * get__mEngine_1() const { return ____mEngine_1; }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 ** get_address_of__mEngine_1() { return &____mEngine_1; }
	inline void set__mEngine_1(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * value)
	{
		____mEngine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mEngine_1), (void*)value);
	}
};

struct VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_StaticFields
{
public:
	// agora_gaming_rtc.VideoDeviceManager agora_gaming_rtc.VideoDeviceManager::_videoDeviceManagerInstance
	VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * ____videoDeviceManagerInstance_2;

public:
	inline static int32_t get_offset_of__videoDeviceManagerInstance_2() { return static_cast<int32_t>(offsetof(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_StaticFields, ____videoDeviceManagerInstance_2)); }
	inline VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * get__videoDeviceManagerInstance_2() const { return ____videoDeviceManagerInstance_2; }
	inline VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F ** get_address_of__videoDeviceManagerInstance_2() { return &____videoDeviceManagerInstance_2; }
	inline void set__videoDeviceManagerInstance_2(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * value)
	{
		____videoDeviceManagerInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoDeviceManagerInstance_2), (void*)value);
	}
};


// agora_gaming_rtc.VideoRawDataManager
struct  VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8  : public IVideoRawDataManager_t29B89A66232A0C71D6A86705B833BB2080742038
{
public:
	// agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler agora_gaming_rtc.VideoRawDataManager::OnCaptureVideoFrame
	OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * ___OnCaptureVideoFrame_3;
	// agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler agora_gaming_rtc.VideoRawDataManager::OnRenderVideoFrame
	OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * ___OnRenderVideoFrame_4;

public:
	inline static int32_t get_offset_of_OnCaptureVideoFrame_3() { return static_cast<int32_t>(offsetof(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8, ___OnCaptureVideoFrame_3)); }
	inline OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * get_OnCaptureVideoFrame_3() const { return ___OnCaptureVideoFrame_3; }
	inline OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 ** get_address_of_OnCaptureVideoFrame_3() { return &___OnCaptureVideoFrame_3; }
	inline void set_OnCaptureVideoFrame_3(OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * value)
	{
		___OnCaptureVideoFrame_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCaptureVideoFrame_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnRenderVideoFrame_4() { return static_cast<int32_t>(offsetof(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8, ___OnRenderVideoFrame_4)); }
	inline OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * get_OnRenderVideoFrame_4() const { return ___OnRenderVideoFrame_4; }
	inline OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 ** get_address_of_OnRenderVideoFrame_4() { return &___OnRenderVideoFrame_4; }
	inline void set_OnRenderVideoFrame_4(OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * value)
	{
		___OnRenderVideoFrame_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRenderVideoFrame_4), (void*)value);
	}
};

struct VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields
{
public:
	// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.VideoRawDataManager::_irtcEngine
	IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ____irtcEngine_1;
	// agora_gaming_rtc.VideoRawDataManager agora_gaming_rtc.VideoRawDataManager::_videoRawDataManagerInstance
	VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * ____videoRawDataManagerInstance_2;

public:
	inline static int32_t get_offset_of__irtcEngine_1() { return static_cast<int32_t>(offsetof(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields, ____irtcEngine_1)); }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * get__irtcEngine_1() const { return ____irtcEngine_1; }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 ** get_address_of__irtcEngine_1() { return &____irtcEngine_1; }
	inline void set__irtcEngine_1(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * value)
	{
		____irtcEngine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____irtcEngine_1), (void*)value);
	}

	inline static int32_t get_offset_of__videoRawDataManagerInstance_2() { return static_cast<int32_t>(offsetof(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields, ____videoRawDataManagerInstance_2)); }
	inline VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * get__videoRawDataManagerInstance_2() const { return ____videoRawDataManagerInstance_2; }
	inline VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 ** get_address_of__videoRawDataManagerInstance_2() { return &____videoRawDataManagerInstance_2; }
	inline void set__videoRawDataManagerInstance_2(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * value)
	{
		____videoRawDataManagerInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoRawDataManagerInstance_2), (void*)value);
	}
};


// agora_gaming_rtc.VideoRender
struct  VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9  : public IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487
{
public:
	// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.VideoRender::_rtcEngine
	IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ____rtcEngine_2;

public:
	inline static int32_t get_offset_of__rtcEngine_2() { return static_cast<int32_t>(offsetof(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9, ____rtcEngine_2)); }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * get__rtcEngine_2() const { return ____rtcEngine_2; }
	inline IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 ** get_address_of__rtcEngine_2() { return &____rtcEngine_2; }
	inline void set__rtcEngine_2(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * value)
	{
		____rtcEngine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rtcEngine_2), (void*)value);
	}
};

struct VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_StaticFields
{
public:
	// agora_gaming_rtc.VideoRender agora_gaming_rtc.VideoRender::_videoRenderInstance
	VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * ____videoRenderInstance_1;

public:
	inline static int32_t get_offset_of__videoRenderInstance_1() { return static_cast<int32_t>(offsetof(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_StaticFields, ____videoRenderInstance_1)); }
	inline VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * get__videoRenderInstance_1() const { return ____videoRenderInstance_1; }
	inline VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 ** get_address_of__videoRenderInstance_1() { return &____videoRenderInstance_1; }
	inline void set__videoRenderInstance_1(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * value)
	{
		____videoRenderInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoRenderInstance_1), (void*)value);
	}
};


// agora_gaming_rtc.WatermarkOptions
struct  WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9 
{
public:
	// System.Boolean agora_gaming_rtc.WatermarkOptions::visibleInPreview
	bool ___visibleInPreview_0;
	// agora_gaming_rtc.Rectangle agora_gaming_rtc.WatermarkOptions::positionInLandscapeMode
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  ___positionInLandscapeMode_1;
	// agora_gaming_rtc.Rectangle agora_gaming_rtc.WatermarkOptions::positionInPortraitMode
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  ___positionInPortraitMode_2;

public:
	inline static int32_t get_offset_of_visibleInPreview_0() { return static_cast<int32_t>(offsetof(WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9, ___visibleInPreview_0)); }
	inline bool get_visibleInPreview_0() const { return ___visibleInPreview_0; }
	inline bool* get_address_of_visibleInPreview_0() { return &___visibleInPreview_0; }
	inline void set_visibleInPreview_0(bool value)
	{
		___visibleInPreview_0 = value;
	}

	inline static int32_t get_offset_of_positionInLandscapeMode_1() { return static_cast<int32_t>(offsetof(WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9, ___positionInLandscapeMode_1)); }
	inline Rectangle_t0408113939463A09E85160D861E98923467A0B41  get_positionInLandscapeMode_1() const { return ___positionInLandscapeMode_1; }
	inline Rectangle_t0408113939463A09E85160D861E98923467A0B41 * get_address_of_positionInLandscapeMode_1() { return &___positionInLandscapeMode_1; }
	inline void set_positionInLandscapeMode_1(Rectangle_t0408113939463A09E85160D861E98923467A0B41  value)
	{
		___positionInLandscapeMode_1 = value;
	}

	inline static int32_t get_offset_of_positionInPortraitMode_2() { return static_cast<int32_t>(offsetof(WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9, ___positionInPortraitMode_2)); }
	inline Rectangle_t0408113939463A09E85160D861E98923467A0B41  get_positionInPortraitMode_2() const { return ___positionInPortraitMode_2; }
	inline Rectangle_t0408113939463A09E85160D861E98923467A0B41 * get_address_of_positionInPortraitMode_2() { return &___positionInPortraitMode_2; }
	inline void set_positionInPortraitMode_2(Rectangle_t0408113939463A09E85160D861E98923467A0B41  value)
	{
		___positionInPortraitMode_2 = value;
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.WatermarkOptions
struct WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_pinvoke
{
	int32_t ___visibleInPreview_0;
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  ___positionInLandscapeMode_1;
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  ___positionInPortraitMode_2;
};
// Native definition for COM marshalling of agora_gaming_rtc.WatermarkOptions
struct WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_com
{
	int32_t ___visibleInPreview_0;
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  ___positionInLandscapeMode_1;
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  ___positionInPortraitMode_2;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// agora_gaming_rtc.RemoteVideoStats
struct  RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0 
{
public:
	// System.UInt32 agora_gaming_rtc.RemoteVideoStats::uid
	uint32_t ___uid_0;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::delay
	int32_t ___delay_1;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::width
	int32_t ___width_2;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::height
	int32_t ___height_3;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::receivedBitrate
	int32_t ___receivedBitrate_4;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::decoderOutputFrameRate
	int32_t ___decoderOutputFrameRate_5;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::rendererOutputFrameRate
	int32_t ___rendererOutputFrameRate_6;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::packetLossRate
	int32_t ___packetLossRate_7;
	// agora_gaming_rtc.REMOTE_VIDEO_STREAM_TYPE agora_gaming_rtc.RemoteVideoStats::rxStreamType
	int32_t ___rxStreamType_8;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::totalFrozenTime
	int32_t ___totalFrozenTime_9;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::frozenRate
	int32_t ___frozenRate_10;
	// System.Int32 agora_gaming_rtc.RemoteVideoStats::totalActiveTime
	int32_t ___totalActiveTime_11;

public:
	inline static int32_t get_offset_of_uid_0() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___uid_0)); }
	inline uint32_t get_uid_0() const { return ___uid_0; }
	inline uint32_t* get_address_of_uid_0() { return &___uid_0; }
	inline void set_uid_0(uint32_t value)
	{
		___uid_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___delay_1)); }
	inline int32_t get_delay_1() const { return ___delay_1; }
	inline int32_t* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(int32_t value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_receivedBitrate_4() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___receivedBitrate_4)); }
	inline int32_t get_receivedBitrate_4() const { return ___receivedBitrate_4; }
	inline int32_t* get_address_of_receivedBitrate_4() { return &___receivedBitrate_4; }
	inline void set_receivedBitrate_4(int32_t value)
	{
		___receivedBitrate_4 = value;
	}

	inline static int32_t get_offset_of_decoderOutputFrameRate_5() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___decoderOutputFrameRate_5)); }
	inline int32_t get_decoderOutputFrameRate_5() const { return ___decoderOutputFrameRate_5; }
	inline int32_t* get_address_of_decoderOutputFrameRate_5() { return &___decoderOutputFrameRate_5; }
	inline void set_decoderOutputFrameRate_5(int32_t value)
	{
		___decoderOutputFrameRate_5 = value;
	}

	inline static int32_t get_offset_of_rendererOutputFrameRate_6() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___rendererOutputFrameRate_6)); }
	inline int32_t get_rendererOutputFrameRate_6() const { return ___rendererOutputFrameRate_6; }
	inline int32_t* get_address_of_rendererOutputFrameRate_6() { return &___rendererOutputFrameRate_6; }
	inline void set_rendererOutputFrameRate_6(int32_t value)
	{
		___rendererOutputFrameRate_6 = value;
	}

	inline static int32_t get_offset_of_packetLossRate_7() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___packetLossRate_7)); }
	inline int32_t get_packetLossRate_7() const { return ___packetLossRate_7; }
	inline int32_t* get_address_of_packetLossRate_7() { return &___packetLossRate_7; }
	inline void set_packetLossRate_7(int32_t value)
	{
		___packetLossRate_7 = value;
	}

	inline static int32_t get_offset_of_rxStreamType_8() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___rxStreamType_8)); }
	inline int32_t get_rxStreamType_8() const { return ___rxStreamType_8; }
	inline int32_t* get_address_of_rxStreamType_8() { return &___rxStreamType_8; }
	inline void set_rxStreamType_8(int32_t value)
	{
		___rxStreamType_8 = value;
	}

	inline static int32_t get_offset_of_totalFrozenTime_9() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___totalFrozenTime_9)); }
	inline int32_t get_totalFrozenTime_9() const { return ___totalFrozenTime_9; }
	inline int32_t* get_address_of_totalFrozenTime_9() { return &___totalFrozenTime_9; }
	inline void set_totalFrozenTime_9(int32_t value)
	{
		___totalFrozenTime_9 = value;
	}

	inline static int32_t get_offset_of_frozenRate_10() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___frozenRate_10)); }
	inline int32_t get_frozenRate_10() const { return ___frozenRate_10; }
	inline int32_t* get_address_of_frozenRate_10() { return &___frozenRate_10; }
	inline void set_frozenRate_10(int32_t value)
	{
		___frozenRate_10 = value;
	}

	inline static int32_t get_offset_of_totalActiveTime_11() { return static_cast<int32_t>(offsetof(RemoteVideoStats_t877AD5090CBE430D4035D89C31D5B9E017CA88B0, ___totalActiveTime_11)); }
	inline int32_t get_totalActiveTime_11() const { return ___totalActiveTime_11; }
	inline int32_t* get_address_of_totalActiveTime_11() { return &___totalActiveTime_11; }
	inline void set_totalActiveTime_11(int32_t value)
	{
		___totalActiveTime_11 = value;
	}
};


// agora_gaming_rtc.RtcEngineConfig
struct  RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D 
{
public:
	// System.String agora_gaming_rtc.RtcEngineConfig::<appId>k__BackingField
	String_t* ___U3CappIdU3Ek__BackingField_0;
	// agora_gaming_rtc.AREA_CODE agora_gaming_rtc.RtcEngineConfig::<areaCode>k__BackingField
	uint32_t ___U3CareaCodeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CappIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D, ___U3CappIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CappIdU3Ek__BackingField_0() const { return ___U3CappIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CappIdU3Ek__BackingField_0() { return &___U3CappIdU3Ek__BackingField_0; }
	inline void set_U3CappIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CappIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CareaCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D, ___U3CareaCodeU3Ek__BackingField_1)); }
	inline uint32_t get_U3CareaCodeU3Ek__BackingField_1() const { return ___U3CareaCodeU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CareaCodeU3Ek__BackingField_1() { return &___U3CareaCodeU3Ek__BackingField_1; }
	inline void set_U3CareaCodeU3Ek__BackingField_1(uint32_t value)
	{
		___U3CareaCodeU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.RtcEngineConfig
struct RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_pinvoke
{
	char* ___U3CappIdU3Ek__BackingField_0;
	uint32_t ___U3CareaCodeU3Ek__BackingField_1;
};
// Native definition for COM marshalling of agora_gaming_rtc.RtcEngineConfig
struct RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_com
{
	Il2CppChar* ___U3CappIdU3Ek__BackingField_0;
	uint32_t ___U3CareaCodeU3Ek__BackingField_1;
};

// agora_gaming_rtc.VideoCanvas
struct  VideoCanvas_t0F41DE36BD55189A4FDD2C9901323F7FDAB74955 
{
public:
	// System.Int32 agora_gaming_rtc.VideoCanvas::hwnd
	int32_t ___hwnd_0;
	// agora_gaming_rtc.RENDER_MODE_TYPE agora_gaming_rtc.VideoCanvas::renderMode
	int32_t ___renderMode_1;
	// System.UInt32 agora_gaming_rtc.VideoCanvas::uid
	uint32_t ___uid_2;
	// System.IntPtr agora_gaming_rtc.VideoCanvas::priv
	intptr_t ___priv_3;

public:
	inline static int32_t get_offset_of_hwnd_0() { return static_cast<int32_t>(offsetof(VideoCanvas_t0F41DE36BD55189A4FDD2C9901323F7FDAB74955, ___hwnd_0)); }
	inline int32_t get_hwnd_0() const { return ___hwnd_0; }
	inline int32_t* get_address_of_hwnd_0() { return &___hwnd_0; }
	inline void set_hwnd_0(int32_t value)
	{
		___hwnd_0 = value;
	}

	inline static int32_t get_offset_of_renderMode_1() { return static_cast<int32_t>(offsetof(VideoCanvas_t0F41DE36BD55189A4FDD2C9901323F7FDAB74955, ___renderMode_1)); }
	inline int32_t get_renderMode_1() const { return ___renderMode_1; }
	inline int32_t* get_address_of_renderMode_1() { return &___renderMode_1; }
	inline void set_renderMode_1(int32_t value)
	{
		___renderMode_1 = value;
	}

	inline static int32_t get_offset_of_uid_2() { return static_cast<int32_t>(offsetof(VideoCanvas_t0F41DE36BD55189A4FDD2C9901323F7FDAB74955, ___uid_2)); }
	inline uint32_t get_uid_2() const { return ___uid_2; }
	inline uint32_t* get_address_of_uid_2() { return &___uid_2; }
	inline void set_uid_2(uint32_t value)
	{
		___uid_2 = value;
	}

	inline static int32_t get_offset_of_priv_3() { return static_cast<int32_t>(offsetof(VideoCanvas_t0F41DE36BD55189A4FDD2C9901323F7FDAB74955, ___priv_3)); }
	inline intptr_t get_priv_3() const { return ___priv_3; }
	inline intptr_t* get_address_of_priv_3() { return &___priv_3; }
	inline void set_priv_3(intptr_t value)
	{
		___priv_3 = value;
	}
};


// agora_gaming_rtc.VideoEncoderConfiguration
struct  VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD 
{
public:
	// agora_gaming_rtc.VideoDimensions agora_gaming_rtc.VideoEncoderConfiguration::dimensions
	VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  ___dimensions_0;
	// agora_gaming_rtc.FRAME_RATE agora_gaming_rtc.VideoEncoderConfiguration::frameRate
	int32_t ___frameRate_1;
	// System.Int32 agora_gaming_rtc.VideoEncoderConfiguration::minFrameRate
	int32_t ___minFrameRate_2;
	// System.Int32 agora_gaming_rtc.VideoEncoderConfiguration::bitrate
	int32_t ___bitrate_3;
	// System.Int32 agora_gaming_rtc.VideoEncoderConfiguration::minBitrate
	int32_t ___minBitrate_4;
	// agora_gaming_rtc.ORIENTATION_MODE agora_gaming_rtc.VideoEncoderConfiguration::orientationMode
	int32_t ___orientationMode_5;
	// agora_gaming_rtc.DEGRADATION_PREFERENCE agora_gaming_rtc.VideoEncoderConfiguration::degradationPreference
	int32_t ___degradationPreference_6;
	// agora_gaming_rtc.VIDEO_MIRROR_MODE_TYPE agora_gaming_rtc.VideoEncoderConfiguration::mirrorMode
	int32_t ___mirrorMode_7;

public:
	inline static int32_t get_offset_of_dimensions_0() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___dimensions_0)); }
	inline VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  get_dimensions_0() const { return ___dimensions_0; }
	inline VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1 * get_address_of_dimensions_0() { return &___dimensions_0; }
	inline void set_dimensions_0(VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  value)
	{
		___dimensions_0 = value;
	}

	inline static int32_t get_offset_of_frameRate_1() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___frameRate_1)); }
	inline int32_t get_frameRate_1() const { return ___frameRate_1; }
	inline int32_t* get_address_of_frameRate_1() { return &___frameRate_1; }
	inline void set_frameRate_1(int32_t value)
	{
		___frameRate_1 = value;
	}

	inline static int32_t get_offset_of_minFrameRate_2() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___minFrameRate_2)); }
	inline int32_t get_minFrameRate_2() const { return ___minFrameRate_2; }
	inline int32_t* get_address_of_minFrameRate_2() { return &___minFrameRate_2; }
	inline void set_minFrameRate_2(int32_t value)
	{
		___minFrameRate_2 = value;
	}

	inline static int32_t get_offset_of_bitrate_3() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___bitrate_3)); }
	inline int32_t get_bitrate_3() const { return ___bitrate_3; }
	inline int32_t* get_address_of_bitrate_3() { return &___bitrate_3; }
	inline void set_bitrate_3(int32_t value)
	{
		___bitrate_3 = value;
	}

	inline static int32_t get_offset_of_minBitrate_4() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___minBitrate_4)); }
	inline int32_t get_minBitrate_4() const { return ___minBitrate_4; }
	inline int32_t* get_address_of_minBitrate_4() { return &___minBitrate_4; }
	inline void set_minBitrate_4(int32_t value)
	{
		___minBitrate_4 = value;
	}

	inline static int32_t get_offset_of_orientationMode_5() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___orientationMode_5)); }
	inline int32_t get_orientationMode_5() const { return ___orientationMode_5; }
	inline int32_t* get_address_of_orientationMode_5() { return &___orientationMode_5; }
	inline void set_orientationMode_5(int32_t value)
	{
		___orientationMode_5 = value;
	}

	inline static int32_t get_offset_of_degradationPreference_6() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___degradationPreference_6)); }
	inline int32_t get_degradationPreference_6() const { return ___degradationPreference_6; }
	inline int32_t* get_address_of_degradationPreference_6() { return &___degradationPreference_6; }
	inline void set_degradationPreference_6(int32_t value)
	{
		___degradationPreference_6 = value;
	}

	inline static int32_t get_offset_of_mirrorMode_7() { return static_cast<int32_t>(offsetof(VideoEncoderConfiguration_tC5E7B6E856C5964822213276794AA61928063DBD, ___mirrorMode_7)); }
	inline int32_t get_mirrorMode_7() const { return ___mirrorMode_7; }
	inline int32_t* get_address_of_mirrorMode_7() { return &___mirrorMode_7; }
	inline void set_mirrorMode_7(int32_t value)
	{
		___mirrorMode_7 = value;
	}
};


// agora_gaming_rtc.VideoFrame
struct  VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 
{
public:
	// agora_gaming_rtc.VIDEO_FRAME_TYPE agora_gaming_rtc.VideoFrame::type
	int32_t ___type_0;
	// System.Int32 agora_gaming_rtc.VideoFrame::width
	int32_t ___width_1;
	// System.Int32 agora_gaming_rtc.VideoFrame::height
	int32_t ___height_2;
	// System.Int32 agora_gaming_rtc.VideoFrame::yStride
	int32_t ___yStride_3;
	// System.Byte[] agora_gaming_rtc.VideoFrame::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_4;
	// System.Int32 agora_gaming_rtc.VideoFrame::rotation
	int32_t ___rotation_5;
	// System.Int64 agora_gaming_rtc.VideoFrame::renderTimeMs
	int64_t ___renderTimeMs_6;
	// System.Int32 agora_gaming_rtc.VideoFrame::avsync_type
	int32_t ___avsync_type_7;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_yStride_3() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___yStride_3)); }
	inline int32_t get_yStride_3() const { return ___yStride_3; }
	inline int32_t* get_address_of_yStride_3() { return &___yStride_3; }
	inline void set_yStride_3(int32_t value)
	{
		___yStride_3 = value;
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___buffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_4() const { return ___buffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___rotation_5)); }
	inline int32_t get_rotation_5() const { return ___rotation_5; }
	inline int32_t* get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(int32_t value)
	{
		___rotation_5 = value;
	}

	inline static int32_t get_offset_of_renderTimeMs_6() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___renderTimeMs_6)); }
	inline int64_t get_renderTimeMs_6() const { return ___renderTimeMs_6; }
	inline int64_t* get_address_of_renderTimeMs_6() { return &___renderTimeMs_6; }
	inline void set_renderTimeMs_6(int64_t value)
	{
		___renderTimeMs_6 = value;
	}

	inline static int32_t get_offset_of_avsync_type_7() { return static_cast<int32_t>(offsetof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732, ___avsync_type_7)); }
	inline int32_t get_avsync_type_7() const { return ___avsync_type_7; }
	inline int32_t* get_address_of_avsync_type_7() { return &___avsync_type_7; }
	inline void set_avsync_type_7(int32_t value)
	{
		___avsync_type_7 = value;
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.VideoFrame
struct VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___yStride_3;
	Il2CppSafeArray/*NONE*/* ___buffer_4;
	int32_t ___rotation_5;
	int64_t ___renderTimeMs_6;
	int32_t ___avsync_type_7;
};
// Native definition for COM marshalling of agora_gaming_rtc.VideoFrame
struct VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_com
{
	int32_t ___type_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___yStride_3;
	Il2CppSafeArray/*NONE*/* ___buffer_4;
	int32_t ___rotation_5;
	int64_t ___renderTimeMs_6;
	int32_t ___avsync_type_7;
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
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


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
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


// agora_gaming_rtc.IRtcEngineNative_EngineEventOnCaptureVideoFrame
struct  EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D  : public MulticastDelegate_t
{
public:

public:
};


// agora_gaming_rtc.IRtcEngineNative_EngineEventOnRenderVideoFrame
struct  EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E  : public MulticastDelegate_t
{
public:

public:
};


// agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler
struct  OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887  : public MulticastDelegate_t
{
public:

public:
};


// agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler
struct  OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
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


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// agora_gaming_rtc.VideoSurface
struct  VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.IntPtr agora_gaming_rtc.VideoSurface::data
	intptr_t ___data_4;
	// System.Int32 agora_gaming_rtc.VideoSurface::defWidth
	int32_t ___defWidth_5;
	// System.Int32 agora_gaming_rtc.VideoSurface::defHeight
	int32_t ___defHeight_6;
	// UnityEngine.Texture2D agora_gaming_rtc.VideoSurface::nativeTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___nativeTexture_7;
	// System.Boolean agora_gaming_rtc.VideoSurface::initRenderMode
	bool ___initRenderMode_8;
	// agora_gaming_rtc.VideoRender agora_gaming_rtc.VideoSurface::videoRender
	VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * ___videoRender_9;
	// System.UInt32 agora_gaming_rtc.VideoSurface::videoFilter
	uint32_t ___videoFilter_10;
	// System.UInt32 agora_gaming_rtc.VideoSurface::updateVideoFrameCount
	uint32_t ___updateVideoFrameCount_11;
	// System.Boolean agora_gaming_rtc.VideoSurface::isMultiChannelWant
	bool ___isMultiChannelWant_12;
	// UnityEngine.Renderer agora_gaming_rtc.VideoSurface::mRenderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___mRenderer_13;
	// UnityEngine.UI.RawImage agora_gaming_rtc.VideoSurface::mRawImage
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___mRawImage_14;
	// System.Boolean agora_gaming_rtc.VideoSurface::_initialized
	bool ____initialized_15;
	// System.Boolean agora_gaming_rtc.VideoSurface::_enableFlipHorizontal
	bool ____enableFlipHorizontal_16;
	// System.Boolean agora_gaming_rtc.VideoSurface::_enableFlipVertical
	bool ____enableFlipVertical_17;
	// System.UInt32 agora_gaming_rtc.VideoSurface::videoFps
	uint32_t ___videoFps_18;
	// agora_gaming_rtc.AgoraVideoSurfaceType agora_gaming_rtc.VideoSurface::VideoSurfaceType
	int32_t ___VideoSurfaceType_19;
	// System.UInt32 agora_gaming_rtc.VideoSurface::mUid
	uint32_t ___mUid_20;
	// System.String agora_gaming_rtc.VideoSurface::mChannelId
	String_t* ___mChannelId_21;
	// System.Boolean agora_gaming_rtc.VideoSurface::mEnable
	bool ___mEnable_22;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___data_4)); }
	inline intptr_t get_data_4() const { return ___data_4; }
	inline intptr_t* get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(intptr_t value)
	{
		___data_4 = value;
	}

	inline static int32_t get_offset_of_defWidth_5() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___defWidth_5)); }
	inline int32_t get_defWidth_5() const { return ___defWidth_5; }
	inline int32_t* get_address_of_defWidth_5() { return &___defWidth_5; }
	inline void set_defWidth_5(int32_t value)
	{
		___defWidth_5 = value;
	}

	inline static int32_t get_offset_of_defHeight_6() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___defHeight_6)); }
	inline int32_t get_defHeight_6() const { return ___defHeight_6; }
	inline int32_t* get_address_of_defHeight_6() { return &___defHeight_6; }
	inline void set_defHeight_6(int32_t value)
	{
		___defHeight_6 = value;
	}

	inline static int32_t get_offset_of_nativeTexture_7() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___nativeTexture_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_nativeTexture_7() const { return ___nativeTexture_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_nativeTexture_7() { return &___nativeTexture_7; }
	inline void set_nativeTexture_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___nativeTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_initRenderMode_8() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___initRenderMode_8)); }
	inline bool get_initRenderMode_8() const { return ___initRenderMode_8; }
	inline bool* get_address_of_initRenderMode_8() { return &___initRenderMode_8; }
	inline void set_initRenderMode_8(bool value)
	{
		___initRenderMode_8 = value;
	}

	inline static int32_t get_offset_of_videoRender_9() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___videoRender_9)); }
	inline VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * get_videoRender_9() const { return ___videoRender_9; }
	inline VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 ** get_address_of_videoRender_9() { return &___videoRender_9; }
	inline void set_videoRender_9(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * value)
	{
		___videoRender_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoRender_9), (void*)value);
	}

	inline static int32_t get_offset_of_videoFilter_10() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___videoFilter_10)); }
	inline uint32_t get_videoFilter_10() const { return ___videoFilter_10; }
	inline uint32_t* get_address_of_videoFilter_10() { return &___videoFilter_10; }
	inline void set_videoFilter_10(uint32_t value)
	{
		___videoFilter_10 = value;
	}

	inline static int32_t get_offset_of_updateVideoFrameCount_11() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___updateVideoFrameCount_11)); }
	inline uint32_t get_updateVideoFrameCount_11() const { return ___updateVideoFrameCount_11; }
	inline uint32_t* get_address_of_updateVideoFrameCount_11() { return &___updateVideoFrameCount_11; }
	inline void set_updateVideoFrameCount_11(uint32_t value)
	{
		___updateVideoFrameCount_11 = value;
	}

	inline static int32_t get_offset_of_isMultiChannelWant_12() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___isMultiChannelWant_12)); }
	inline bool get_isMultiChannelWant_12() const { return ___isMultiChannelWant_12; }
	inline bool* get_address_of_isMultiChannelWant_12() { return &___isMultiChannelWant_12; }
	inline void set_isMultiChannelWant_12(bool value)
	{
		___isMultiChannelWant_12 = value;
	}

	inline static int32_t get_offset_of_mRenderer_13() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___mRenderer_13)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_mRenderer_13() const { return ___mRenderer_13; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_mRenderer_13() { return &___mRenderer_13; }
	inline void set_mRenderer_13(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___mRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_mRawImage_14() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___mRawImage_14)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_mRawImage_14() const { return ___mRawImage_14; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_mRawImage_14() { return &___mRawImage_14; }
	inline void set_mRawImage_14(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___mRawImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRawImage_14), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_15() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ____initialized_15)); }
	inline bool get__initialized_15() const { return ____initialized_15; }
	inline bool* get_address_of__initialized_15() { return &____initialized_15; }
	inline void set__initialized_15(bool value)
	{
		____initialized_15 = value;
	}

	inline static int32_t get_offset_of__enableFlipHorizontal_16() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ____enableFlipHorizontal_16)); }
	inline bool get__enableFlipHorizontal_16() const { return ____enableFlipHorizontal_16; }
	inline bool* get_address_of__enableFlipHorizontal_16() { return &____enableFlipHorizontal_16; }
	inline void set__enableFlipHorizontal_16(bool value)
	{
		____enableFlipHorizontal_16 = value;
	}

	inline static int32_t get_offset_of__enableFlipVertical_17() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ____enableFlipVertical_17)); }
	inline bool get__enableFlipVertical_17() const { return ____enableFlipVertical_17; }
	inline bool* get_address_of__enableFlipVertical_17() { return &____enableFlipVertical_17; }
	inline void set__enableFlipVertical_17(bool value)
	{
		____enableFlipVertical_17 = value;
	}

	inline static int32_t get_offset_of_videoFps_18() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___videoFps_18)); }
	inline uint32_t get_videoFps_18() const { return ___videoFps_18; }
	inline uint32_t* get_address_of_videoFps_18() { return &___videoFps_18; }
	inline void set_videoFps_18(uint32_t value)
	{
		___videoFps_18 = value;
	}

	inline static int32_t get_offset_of_VideoSurfaceType_19() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___VideoSurfaceType_19)); }
	inline int32_t get_VideoSurfaceType_19() const { return ___VideoSurfaceType_19; }
	inline int32_t* get_address_of_VideoSurfaceType_19() { return &___VideoSurfaceType_19; }
	inline void set_VideoSurfaceType_19(int32_t value)
	{
		___VideoSurfaceType_19 = value;
	}

	inline static int32_t get_offset_of_mUid_20() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___mUid_20)); }
	inline uint32_t get_mUid_20() const { return ___mUid_20; }
	inline uint32_t* get_address_of_mUid_20() { return &___mUid_20; }
	inline void set_mUid_20(uint32_t value)
	{
		___mUid_20 = value;
	}

	inline static int32_t get_offset_of_mChannelId_21() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___mChannelId_21)); }
	inline String_t* get_mChannelId_21() const { return ___mChannelId_21; }
	inline String_t** get_address_of_mChannelId_21() { return &___mChannelId_21; }
	inline void set_mChannelId_21(String_t* value)
	{
		___mChannelId_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mChannelId_21), (void*)value);
	}

	inline static int32_t get_offset_of_mEnable_22() { return static_cast<int32_t>(offsetof(VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1, ___mEnable_22)); }
	inline bool get_mEnable_22() const { return ___mEnable_22; }
	inline bool* get_address_of_mEnable_22() { return &___mEnable_22; }
	inline void set_mEnable_22(bool value)
	{
		___mEnable_22 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.RawImage
struct  RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Texture_35;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_UVRect_36;

public:
	inline static int32_t get_offset_of_m_Texture_35() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_Texture_35)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Texture_35() const { return ___m_Texture_35; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Texture_35() { return &___m_Texture_35; }
	inline void set_m_Texture_35(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Texture_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_36() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_UVRect_36)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_UVRect_36() const { return ___m_UVRect_36; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_UVRect_36() { return &___m_UVRect_36; }
	inline void set_m_UVRect_36(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_UVRect_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke(const VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732& unmarshaled, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke_back(const VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke& marshaled, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732& unmarshaled);
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke_cleanup(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke& marshaled);

// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.String agora_gaming_rtc.RtcEngineConfig::get_appId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RtcEngineConfig_get_appId_mD39071DBD8F02A01A313CCE153B2802E9149132B_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.RtcEngineConfig::set_appId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RtcEngineConfig_set_appId_m5C7C5E5D91884B59F62C3C7283222332F89A4799_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, String_t* ___value0, const RuntimeMethod* method);
// agora_gaming_rtc.AREA_CODE agora_gaming_rtc.RtcEngineConfig::get_areaCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t RtcEngineConfig_get_areaCode_m825F00436435DBBD8DA1E1A88B998433B45740CF_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.RtcEngineConfig::set_areaCode(agora_gaming_rtc.AREA_CODE)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RtcEngineConfig_set_areaCode_m73BBFC5B194F90A14C206835B38E21E73185AB21_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.RtcEngineConfig::.ctor(System.String,agora_gaming_rtc.AREA_CODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcEngineConfig__ctor_mAFF0D32F079B8DF0D60E136B9EB5ACFCB9A73D7F (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, String_t* ___mAppId0, uint32_t ___mAreaCode1, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IVideoDeviceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVideoDeviceManager__ctor_m079EAC18F8A1BDC85F90A28A8AE3011093B90774 (IVideoDeviceManager_t1520D38B302B313429518593232E009148831921 * __this, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoDeviceManager::.ctor(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDeviceManager__ctor_mBA46035695ACF76A8D17DC93A13314F7C3833D92 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method);
// System.Boolean agora_gaming_rtc.IRtcEngineNative::createAVideoDeviceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IRtcEngineNative_createAVideoDeviceManager_m56CDA2FE1198C1DB4A3F50ED0F578B6B7708935D (const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::releaseAVideoDeviceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_releaseAVideoDeviceManager_mAA800A123084EE3FB6C5F9A6E3E4AD53721F6F41 (const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::startVideoDeviceTest(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_startVideoDeviceTest_m1275F58B7A50DA83B778408B9E6FFF3470EAA68C (intptr_t ___hwnd0, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::stopVideoDeviceTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_stopVideoDeviceTest_mD3A727B98F50353F651016D5E54A34CF58CF1398 (const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::getVideoDeviceCollectionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_getVideoDeviceCollectionCount_mBD23B2E37B25D80243D07E6A5B49B14FB824BCDB (const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58 (int32_t ___cb0, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::getVideoDeviceCollectionDevice(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_getVideoDeviceCollectionDevice_mBCD11A32C6B31D67B0ADB41E651BBA981034E5A1 (int32_t ___index0, intptr_t ___deviceName1, intptr_t ___deviceId2, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::getCurrentVideoDevice(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_getCurrentVideoDevice_mCEC9005B2781AB596F439B6163646E187C5A2E31 (intptr_t ___deviceId0, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::setVideoDeviceCollectionDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_setVideoDeviceCollectionDevice_mDA2843BCDB9304F4718D8E671A8C7DC4CB870D0C (String_t* ___deviceId0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoRawDataManager::OnCaptureVideoFrameCallback(System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB (int32_t ___videoFrameType0, int32_t ___width1, int32_t ___height2, int32_t ___yStride3, intptr_t ___buffer4, int32_t ___rotation5, int64_t ___renderTimeMs6, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoRawDataManager::OnRenderVideoFrameCallback(System.UInt32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9 (uint32_t ___uid0, int32_t ___videoFrameType1, int32_t ___width2, int32_t ___height3, int32_t ___yStride4, intptr_t ___yBuffer5, int32_t ___rotation6, int64_t ___renderTimeMs7, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IVideoRawDataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVideoRawDataManager__ctor_m8A153C7A905BD44725F1E002EFCB1F6A20BE063D (IVideoRawDataManager_t29B89A66232A0C71D6A86705B833BB2080742038 * __this, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoRawDataManager::.ctor(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager__ctor_m84AF74CE7DEBAD486A0EDB24A7610FCF16F62044 (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___irtcEngine0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative::initEventOnCaptureVideoFrame(agora_gaming_rtc.IRtcEngineNative/EngineEventOnCaptureVideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineNative_initEventOnCaptureVideoFrame_m43B9E89631F705FE9F86AB7778B7EE55A8AE1C24 (EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D * ___onCaptureVideoFrame0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative/EngineEventOnCaptureVideoFrame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineEventOnCaptureVideoFrame__ctor_mADAC72543148458E379EB5EB55F58F97E54A5B93 (EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative::initEventOnRenderVideoFrame(agora_gaming_rtc.IRtcEngineNative/EngineEventOnRenderVideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineNative_initEventOnRenderVideoFrame_mF3B622236197B7521BF9586E5F8E389C61E72E7D (EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E * ___onRenderVideoFrame0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative/EngineEventOnRenderVideoFrame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineEventOnRenderVideoFrame__ctor_m13BE2BBCB055C0CB6D1F238E106C79ED79728604 (EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::registerVideoRawDataObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_registerVideoRawDataObserver_m2B0961E38B1B37EAD073115E4DDF6574EDF478B8 (const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::unRegisterVideoRawDataObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_unRegisterVideoRawDataObserver_mF209852453FB93F1356F88840E67D4E7486CC4FF (const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t ___source0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoRawDataManager/OnCaptureVideoFrameHandler::Invoke(agora_gaming_rtc.VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureVideoFrameHandler_Invoke_mB780F092F891897BD22D6A6950814E7A2FD4B179 (OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * __this, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler::Invoke(System.UInt32,agora_gaming_rtc.VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler_Invoke_m84C5BD370184AE2A53A06DC87C6BDECBAA95B5A6 (OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * __this, uint32_t ___uid0, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame1, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IVideoRender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IVideoRender__ctor_m8F29B8C72326F6B0DF6E8C7D9ABF08B19313BFFE (IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487 * __this, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoRender::.ctor(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender__ctor_m5B1D447869D1DE0EF5F58005536ABE6D65C236F0 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::setRenderMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_setRenderMode_mD6FDD26E84BB4D58C3B6C43F0263633E445C4AD5 (int32_t ___renderMode0, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::updateVideoRawData(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_updateVideoRawData_mE04049D6FFA3A993567CC411D9F438F9A2426334 (intptr_t ___data0, uint32_t ___uid1, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::updateVideoRawData2(System.IntPtr,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_updateVideoRawData2_m47DA3F72D06F089EEFCBAB5E21B129A5C3F3C42F (intptr_t ___data0, String_t* ___channelId1, uint32_t ___uid2, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::updateTexture(System.Int32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_updateTexture_mEA0BA8A9256634B03B47452D35F09353BF5DEFDF (int32_t ___tex0, intptr_t ___data1, uint32_t ___uid2, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative::addUserVideoInfo(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineNative_addUserVideoInfo_mA702F0938BE9E9D2D44B970003E08C2507BCBC4D (uint32_t ___userId0, uint32_t ___textureId1, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative::removeUserVideoInfo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineNative_removeUserVideoInfo_m1DAA7A9F89B3A3E31389FB7442FFB7A48067076F (uint32_t ___userId0, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative::addUserVideoInfo2(System.String,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineNative_addUserVideoInfo2_mCF4ECDEC39975C9C452032D7C18E17CD2F62D0B7 (String_t* ___channelId0, uint32_t ____userId1, uint32_t ____textureId2, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.IRtcEngineNative::removeUserVideoInfo2(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineNative_removeUserVideoInfo2_m39DCAA3F28894289D155DA79360D277051C86DF7 (String_t* ___channelId0, uint32_t ____userId1, const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::generateNativeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_generateNativeTexture_m234D9DB95F3FC5010004BEC1203874B313C81626 (const RuntimeMethod* method);
// System.Int32 agora_gaming_rtc.IRtcEngineNative::deleteTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineNative_deleteTexture_mDB800540DC0C5235FC9FBA28AE4AC2C1DD800573 (int32_t ___tex0, const RuntimeMethod* method);
// System.Boolean agora_gaming_rtc.IRtcEngineNative::getMultiChannelWanted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IRtcEngineNative_getMultiChannelWanted_mDF227E41C7F6C87CD00CA23A3D0FE886D7B9494F (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.VideoSurface::GetEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * VideoSurface_GetEngine_m189180578AD3164766DC2EAB7E4908C4B6C226E1 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method);
// System.Boolean agora_gaming_rtc.VideoSurface::IsBlankTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoSurface_IsBlankTexture_mD2671DAD7F54461E42BCE654EB0528DBF3AE90C3 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_m7F70DFFDBFA1E307A79838B94BC1A0438E063DFC (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, intptr_t ___data0, int32_t ___size1, const RuntimeMethod* method);
// System.Void agora_gaming_rtc.VideoSurface::ApplyTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_ApplyTexture_m876F5E184CB3C2EAC8149CE29161F33FADCED129 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Resize_m9B3D67DF42A47D5C573D084C080CEDA5E330A8D2 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.IRtcEngine::QueryEngine()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// agora_gaming_rtc.IVideoRender agora_gaming_rtc.IRtcEngine::GetVideoRender()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487 * IRtcEngine_GetVideoRender_m84F5DB2A0028E89912F19D43B73399D64832DE03_inline (IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * RawImage_get_texture_m992AF81884D22B9ADC97A800AB931DCB4140954E_inline (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m63BC52D3B64A3BFD0EC182034FDD51E9A46F99F9 (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: agora_gaming_rtc.RtcEngineConfig
IL2CPP_EXTERN_C void RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshal_pinvoke(const RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D& unmarshaled, RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CappIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CappIdU3Ek__BackingField_0());
	marshaled.___U3CareaCodeU3Ek__BackingField_1 = unmarshaled.get_U3CareaCodeU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshal_pinvoke_back(const RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_pinvoke& marshaled, RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D& unmarshaled)
{
	unmarshaled.set_U3CappIdU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CappIdU3Ek__BackingField_0));
	uint32_t unmarshaled_U3CareaCodeU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CareaCodeU3Ek__BackingField_temp_1 = marshaled.___U3CareaCodeU3Ek__BackingField_1;
	unmarshaled.set_U3CareaCodeU3Ek__BackingField_1(unmarshaled_U3CareaCodeU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.RtcEngineConfig
IL2CPP_EXTERN_C void RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshal_pinvoke_cleanup(RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CappIdU3Ek__BackingField_0);
	marshaled.___U3CappIdU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: agora_gaming_rtc.RtcEngineConfig
IL2CPP_EXTERN_C void RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshal_com(const RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D& unmarshaled, RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_com& marshaled)
{
	marshaled.___U3CappIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CappIdU3Ek__BackingField_0());
	marshaled.___U3CareaCodeU3Ek__BackingField_1 = unmarshaled.get_U3CareaCodeU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshal_com_back(const RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_com& marshaled, RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D& unmarshaled)
{
	unmarshaled.set_U3CappIdU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CappIdU3Ek__BackingField_0));
	uint32_t unmarshaled_U3CareaCodeU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CareaCodeU3Ek__BackingField_temp_1 = marshaled.___U3CareaCodeU3Ek__BackingField_1;
	unmarshaled.set_U3CareaCodeU3Ek__BackingField_1(unmarshaled_U3CareaCodeU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.RtcEngineConfig
IL2CPP_EXTERN_C void RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshal_com_cleanup(RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CappIdU3Ek__BackingField_0);
	marshaled.___U3CappIdU3Ek__BackingField_0 = NULL;
}
// System.String agora_gaming_rtc.RtcEngineConfig::get_appId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RtcEngineConfig_get_appId_mD39071DBD8F02A01A313CCE153B2802E9149132B (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, const RuntimeMethod* method)
{
	{
		// get;
		String_t* L_0 = __this->get_U3CappIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* RtcEngineConfig_get_appId_mD39071DBD8F02A01A313CCE153B2802E9149132B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * _thisAdjusted = reinterpret_cast<RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *>(__this + _offset);
	return RtcEngineConfig_get_appId_mD39071DBD8F02A01A313CCE153B2802E9149132B_inline(_thisAdjusted, method);
}
// System.Void agora_gaming_rtc.RtcEngineConfig::set_appId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcEngineConfig_set_appId_m5C7C5E5D91884B59F62C3C7283222332F89A4799 (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set;
		String_t* L_0 = ___value0;
		__this->set_U3CappIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void RtcEngineConfig_set_appId_m5C7C5E5D91884B59F62C3C7283222332F89A4799_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * _thisAdjusted = reinterpret_cast<RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *>(__this + _offset);
	RtcEngineConfig_set_appId_m5C7C5E5D91884B59F62C3C7283222332F89A4799_inline(_thisAdjusted, ___value0, method);
}
// agora_gaming_rtc.AREA_CODE agora_gaming_rtc.RtcEngineConfig::get_areaCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RtcEngineConfig_get_areaCode_m825F00436435DBBD8DA1E1A88B998433B45740CF (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, const RuntimeMethod* method)
{
	{
		// get;
		uint32_t L_0 = __this->get_U3CareaCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint32_t RtcEngineConfig_get_areaCode_m825F00436435DBBD8DA1E1A88B998433B45740CF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * _thisAdjusted = reinterpret_cast<RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *>(__this + _offset);
	return RtcEngineConfig_get_areaCode_m825F00436435DBBD8DA1E1A88B998433B45740CF_inline(_thisAdjusted, method);
}
// System.Void agora_gaming_rtc.RtcEngineConfig::set_areaCode(agora_gaming_rtc.AREA_CODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcEngineConfig_set_areaCode_m73BBFC5B194F90A14C206835B38E21E73185AB21 (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		// set;
		uint32_t L_0 = ___value0;
		__this->set_U3CareaCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void RtcEngineConfig_set_areaCode_m73BBFC5B194F90A14C206835B38E21E73185AB21_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * _thisAdjusted = reinterpret_cast<RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *>(__this + _offset);
	RtcEngineConfig_set_areaCode_m73BBFC5B194F90A14C206835B38E21E73185AB21_inline(_thisAdjusted, ___value0, method);
}
// System.Void agora_gaming_rtc.RtcEngineConfig::.ctor(System.String,agora_gaming_rtc.AREA_CODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcEngineConfig__ctor_mAFF0D32F079B8DF0D60E136B9EB5ACFCB9A73D7F (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, String_t* ___mAppId0, uint32_t ___mAreaCode1, const RuntimeMethod* method)
{
	{
		// appId = mAppId;
		String_t* L_0 = ___mAppId0;
		RtcEngineConfig_set_appId_m5C7C5E5D91884B59F62C3C7283222332F89A4799_inline((RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *)__this, L_0, /*hidden argument*/NULL);
		// areaCode = mAreaCode;
		uint32_t L_1 = ___mAreaCode1;
		RtcEngineConfig_set_areaCode_m73BBFC5B194F90A14C206835B38E21E73185AB21_inline((RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *)__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RtcEngineConfig__ctor_mAFF0D32F079B8DF0D60E136B9EB5ACFCB9A73D7F_AdjustorThunk (RuntimeObject * __this, String_t* ___mAppId0, uint32_t ___mAreaCode1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * _thisAdjusted = reinterpret_cast<RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D *>(__this + _offset);
	RtcEngineConfig__ctor_mAFF0D32F079B8DF0D60E136B9EB5ACFCB9A73D7F(_thisAdjusted, ___mAppId0, ___mAreaCode1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: agora_gaming_rtc.RtcImage
IL2CPP_EXTERN_C void RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshal_pinvoke(const RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424& unmarshaled, RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_pinvoke& marshaled)
{
	marshaled.___url_0 = il2cpp_codegen_marshal_string(unmarshaled.get_url_0());
	marshaled.___x_1 = unmarshaled.get_x_1();
	marshaled.___y_2 = unmarshaled.get_y_2();
	marshaled.___width_3 = unmarshaled.get_width_3();
	marshaled.___height_4 = unmarshaled.get_height_4();
}
IL2CPP_EXTERN_C void RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshal_pinvoke_back(const RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_pinvoke& marshaled, RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424& unmarshaled)
{
	unmarshaled.set_url_0(il2cpp_codegen_marshal_string_result(marshaled.___url_0));
	int32_t unmarshaled_x_temp_1 = 0;
	unmarshaled_x_temp_1 = marshaled.___x_1;
	unmarshaled.set_x_1(unmarshaled_x_temp_1);
	int32_t unmarshaled_y_temp_2 = 0;
	unmarshaled_y_temp_2 = marshaled.___y_2;
	unmarshaled.set_y_2(unmarshaled_y_temp_2);
	int32_t unmarshaled_width_temp_3 = 0;
	unmarshaled_width_temp_3 = marshaled.___width_3;
	unmarshaled.set_width_3(unmarshaled_width_temp_3);
	int32_t unmarshaled_height_temp_4 = 0;
	unmarshaled_height_temp_4 = marshaled.___height_4;
	unmarshaled.set_height_4(unmarshaled_height_temp_4);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.RtcImage
IL2CPP_EXTERN_C void RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshal_pinvoke_cleanup(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___url_0);
	marshaled.___url_0 = NULL;
}
// Conversion methods for marshalling of: agora_gaming_rtc.RtcImage
IL2CPP_EXTERN_C void RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshal_com(const RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424& unmarshaled, RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_com& marshaled)
{
	marshaled.___url_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_url_0());
	marshaled.___x_1 = unmarshaled.get_x_1();
	marshaled.___y_2 = unmarshaled.get_y_2();
	marshaled.___width_3 = unmarshaled.get_width_3();
	marshaled.___height_4 = unmarshaled.get_height_4();
}
IL2CPP_EXTERN_C void RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshal_com_back(const RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_com& marshaled, RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424& unmarshaled)
{
	unmarshaled.set_url_0(il2cpp_codegen_marshal_bstring_result(marshaled.___url_0));
	int32_t unmarshaled_x_temp_1 = 0;
	unmarshaled_x_temp_1 = marshaled.___x_1;
	unmarshaled.set_x_1(unmarshaled_x_temp_1);
	int32_t unmarshaled_y_temp_2 = 0;
	unmarshaled_y_temp_2 = marshaled.___y_2;
	unmarshaled.set_y_2(unmarshaled_y_temp_2);
	int32_t unmarshaled_width_temp_3 = 0;
	unmarshaled_width_temp_3 = marshaled.___width_3;
	unmarshaled.set_width_3(unmarshaled_width_temp_3);
	int32_t unmarshaled_height_temp_4 = 0;
	unmarshaled_height_temp_4 = marshaled.___height_4;
	unmarshaled.set_height_4(unmarshaled_height_temp_4);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.RtcImage
IL2CPP_EXTERN_C void RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshal_com_cleanup(RtcImage_t980209BAD4DF5C0CBB704E45F8485B279BB2F424_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___url_0);
	marshaled.___url_0 = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: agora_gaming_rtc.ScreenCaptureParameters
IL2CPP_EXTERN_C void ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshal_pinvoke(const ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB& unmarshaled, ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_pinvoke& marshaled)
{
	marshaled.___dimensions_0 = unmarshaled.get_dimensions_0();
	marshaled.___frameRate_1 = unmarshaled.get_frameRate_1();
	marshaled.___bitrate_2 = unmarshaled.get_bitrate_2();
	marshaled.___captureMouseCursor_3 = static_cast<int32_t>(unmarshaled.get_captureMouseCursor_3());
}
IL2CPP_EXTERN_C void ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshal_pinvoke_back(const ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_pinvoke& marshaled, ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB& unmarshaled)
{
	VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  unmarshaled_dimensions_temp_0;
	memset((&unmarshaled_dimensions_temp_0), 0, sizeof(unmarshaled_dimensions_temp_0));
	unmarshaled_dimensions_temp_0 = marshaled.___dimensions_0;
	unmarshaled.set_dimensions_0(unmarshaled_dimensions_temp_0);
	int32_t unmarshaled_frameRate_temp_1 = 0;
	unmarshaled_frameRate_temp_1 = marshaled.___frameRate_1;
	unmarshaled.set_frameRate_1(unmarshaled_frameRate_temp_1);
	int32_t unmarshaled_bitrate_temp_2 = 0;
	unmarshaled_bitrate_temp_2 = marshaled.___bitrate_2;
	unmarshaled.set_bitrate_2(unmarshaled_bitrate_temp_2);
	bool unmarshaled_captureMouseCursor_temp_3 = false;
	unmarshaled_captureMouseCursor_temp_3 = static_cast<bool>(marshaled.___captureMouseCursor_3);
	unmarshaled.set_captureMouseCursor_3(unmarshaled_captureMouseCursor_temp_3);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.ScreenCaptureParameters
IL2CPP_EXTERN_C void ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshal_pinvoke_cleanup(ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: agora_gaming_rtc.ScreenCaptureParameters
IL2CPP_EXTERN_C void ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshal_com(const ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB& unmarshaled, ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_com& marshaled)
{
	marshaled.___dimensions_0 = unmarshaled.get_dimensions_0();
	marshaled.___frameRate_1 = unmarshaled.get_frameRate_1();
	marshaled.___bitrate_2 = unmarshaled.get_bitrate_2();
	marshaled.___captureMouseCursor_3 = static_cast<int32_t>(unmarshaled.get_captureMouseCursor_3());
}
IL2CPP_EXTERN_C void ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshal_com_back(const ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_com& marshaled, ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB& unmarshaled)
{
	VideoDimensions_t68691423C0A798AC8C1E79E799006688C1E32AC1  unmarshaled_dimensions_temp_0;
	memset((&unmarshaled_dimensions_temp_0), 0, sizeof(unmarshaled_dimensions_temp_0));
	unmarshaled_dimensions_temp_0 = marshaled.___dimensions_0;
	unmarshaled.set_dimensions_0(unmarshaled_dimensions_temp_0);
	int32_t unmarshaled_frameRate_temp_1 = 0;
	unmarshaled_frameRate_temp_1 = marshaled.___frameRate_1;
	unmarshaled.set_frameRate_1(unmarshaled_frameRate_temp_1);
	int32_t unmarshaled_bitrate_temp_2 = 0;
	unmarshaled_bitrate_temp_2 = marshaled.___bitrate_2;
	unmarshaled.set_bitrate_2(unmarshaled_bitrate_temp_2);
	bool unmarshaled_captureMouseCursor_temp_3 = false;
	unmarshaled_captureMouseCursor_temp_3 = static_cast<bool>(marshaled.___captureMouseCursor_3);
	unmarshaled.set_captureMouseCursor_3(unmarshaled_captureMouseCursor_temp_3);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.ScreenCaptureParameters
IL2CPP_EXTERN_C void ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshal_com_cleanup(ScreenCaptureParameters_t9C9284A6A0A5E39C9F68C4AE3C0B949C4E444FDB_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: agora_gaming_rtc.UserInfo
IL2CPP_EXTERN_C void UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshal_pinvoke(const UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60& unmarshaled, UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_pinvoke& marshaled)
{
	marshaled.___uid_0 = unmarshaled.get_uid_0();
	marshaled.___userAccount_1 = il2cpp_codegen_marshal_string(unmarshaled.get_userAccount_1());
}
IL2CPP_EXTERN_C void UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshal_pinvoke_back(const UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_pinvoke& marshaled, UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60& unmarshaled)
{
	uint32_t unmarshaled_uid_temp_0 = 0;
	unmarshaled_uid_temp_0 = marshaled.___uid_0;
	unmarshaled.set_uid_0(unmarshaled_uid_temp_0);
	unmarshaled.set_userAccount_1(il2cpp_codegen_marshal_string_result(marshaled.___userAccount_1));
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.UserInfo
IL2CPP_EXTERN_C void UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshal_pinvoke_cleanup(UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___userAccount_1);
	marshaled.___userAccount_1 = NULL;
}
// Conversion methods for marshalling of: agora_gaming_rtc.UserInfo
IL2CPP_EXTERN_C void UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshal_com(const UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60& unmarshaled, UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_com& marshaled)
{
	marshaled.___uid_0 = unmarshaled.get_uid_0();
	marshaled.___userAccount_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_userAccount_1());
}
IL2CPP_EXTERN_C void UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshal_com_back(const UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_com& marshaled, UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60& unmarshaled)
{
	uint32_t unmarshaled_uid_temp_0 = 0;
	unmarshaled_uid_temp_0 = marshaled.___uid_0;
	unmarshaled.set_uid_0(unmarshaled_uid_temp_0);
	unmarshaled.set_userAccount_1(il2cpp_codegen_marshal_bstring_result(marshaled.___userAccount_1));
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.UserInfo
IL2CPP_EXTERN_C void UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshal_com_cleanup(UserInfo_tF4166ED2FE56E7423E9AF4455ABBA8A36362FE60_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___userAccount_1);
	marshaled.___userAccount_1 = NULL;
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
// System.Void agora_gaming_rtc.VideoDeviceManager::.ctor(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDeviceManager__ctor_mBA46035695ACF76A8D17DC93A13314F7C3833D92 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method)
{
	{
		// private VideoDeviceManager (IRtcEngine rtcEngine)
		IVideoDeviceManager__ctor_m079EAC18F8A1BDC85F90A28A8AE3011093B90774(__this, /*hidden argument*/NULL);
		// _mEngine = rtcEngine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ___rtcEngine0;
		__this->set__mEngine_1(L_0);
		// }
		return;
	}
}
// agora_gaming_rtc.VideoDeviceManager agora_gaming_rtc.VideoDeviceManager::GetInstance(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * VideoDeviceManager_GetInstance_mB48091F5909CF54A90F86BD8DCE82085A1C22DBD (IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoDeviceManager_GetInstance_mB48091F5909CF54A90F86BD8DCE82085A1C22DBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_videoDeviceManagerInstance == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var);
		VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * L_0 = ((VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var))->get__videoDeviceManagerInstance_2();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _videoDeviceManagerInstance = new VideoDeviceManager(rtcEngine);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_1 = ___rtcEngine0;
		VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * L_2 = (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F *)il2cpp_codegen_object_new(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var);
		VideoDeviceManager__ctor_mBA46035695ACF76A8D17DC93A13314F7C3833D92(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var);
		((VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var))->set__videoDeviceManagerInstance_2(L_2);
	}

IL_0012:
	{
		// return _videoDeviceManagerInstance;
		IL2CPP_RUNTIME_CLASS_INIT(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var);
		VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * L_3 = ((VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var))->get__videoDeviceManagerInstance_2();
		return L_3;
	}
}
// System.Void agora_gaming_rtc.VideoDeviceManager::ReleaseInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDeviceManager_ReleaseInstance_m826DDDF555FB5FAC34D9D29767A9E230CE9A3C16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoDeviceManager_ReleaseInstance_m826DDDF555FB5FAC34D9D29767A9E230CE9A3C16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _videoDeviceManagerInstance = null;
		IL2CPP_RUNTIME_CLASS_INIT(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var);
		((VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F_il2cpp_TypeInfo_var))->set__videoDeviceManagerInstance_2((VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F *)NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoDeviceManager::SetEngine(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDeviceManager_SetEngine_m398BB306412807D4648638198AABAC1EB412BC38 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___engine0, const RuntimeMethod* method)
{
	{
		// _mEngine = engine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ___engine0;
		__this->set__mEngine_1(L_0);
		// }
		return;
	}
}
// System.Boolean agora_gaming_rtc.VideoDeviceManager::CreateAVideoDeviceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoDeviceManager_CreateAVideoDeviceManager_mD7F6EF00037F20C210A34503033048AF31B56B80 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, const RuntimeMethod* method)
{
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return IRtcEngineNative.createAVideoDeviceManager();
		bool L_1 = IRtcEngineNative_createAVideoDeviceManager_m56CDA2FE1198C1DB4A3F50ED0F578B6B7708935D(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::ReleaseAVideoDeviceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_ReleaseAVideoDeviceManager_mCB6643D732F3BC5EB887A12A95B94F836274A8BD (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, const RuntimeMethod* method)
{
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.releaseAVideoDeviceManager();
		int32_t L_1 = IRtcEngineNative_releaseAVideoDeviceManager_mAA800A123084EE3FB6C5F9A6E3E4AD53721F6F41(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::StartVideoDeviceTest(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_StartVideoDeviceTest_m41B8358D8BFFA86B6BB7B777090D9412691E1C47 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, intptr_t ___hwnd0, const RuntimeMethod* method)
{
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.startVideoDeviceTest(hwnd);
		intptr_t L_1 = ___hwnd0;
		int32_t L_2 = IRtcEngineNative_startVideoDeviceTest_m1275F58B7A50DA83B778408B9E6FFF3470EAA68C((intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::StopVideoDeviceTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_StopVideoDeviceTest_mD769A923D7BD7C51DA30EF0AAFA663ECEFF1260C (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, const RuntimeMethod* method)
{
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.stopVideoDeviceTest();
		int32_t L_1 = IRtcEngineNative_stopVideoDeviceTest_mD3A727B98F50353F651016D5E54A34CF58CF1398(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::GetVideoDeviceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_GetVideoDeviceCount_mA620CE0AEE2DBFAE4132EE2CC31E929A21B53F34 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, const RuntimeMethod* method)
{
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.getVideoDeviceCollectionCount();
		int32_t L_1 = IRtcEngineNative_getVideoDeviceCollectionCount_mBD23B2E37B25D80243D07E6A5B49B14FB824BCDB(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::GetVideoDevice(System.Int32,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_GetVideoDevice_m59C5167891B83434679552770B43D8A6A0686EB8 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, int32_t ___index0, String_t** ___deviceName1, String_t** ___deviceId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoDeviceManager_GetVideoDevice_m59C5167891B83434679552770B43D8A6A0686EB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// if (index >= 0 && index < GetVideoDeviceCount())
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2 = ___index0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 agora_gaming_rtc.IVideoDeviceManager::GetVideoDeviceCount() */, __this);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		// System.IntPtr videoDeviceName = Marshal.AllocHGlobal(512);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_4 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(((int32_t)512), /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// System.IntPtr videoDeviceId = Marshal.AllocHGlobal(512);
		intptr_t L_5 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(((int32_t)512), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_5;
		// int ret = IRtcEngineNative.getVideoDeviceCollectionDevice(index, videoDeviceName, videoDeviceId);
		int32_t L_6 = ___index0;
		intptr_t L_7 = V_0;
		intptr_t L_8 = V_1;
		int32_t L_9 = IRtcEngineNative_getVideoDeviceCollectionDevice_mBCD11A32C6B31D67B0ADB41E651BBA981034E5A1(L_6, (intptr_t)L_7, (intptr_t)L_8, /*hidden argument*/NULL);
		// deviceName = Marshal.PtrToStringAnsi(videoDeviceName);
		String_t** L_10 = ___deviceName1;
		intptr_t L_11 = V_0;
		String_t* L_12 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_11, /*hidden argument*/NULL);
		*((RuntimeObject **)L_10) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)L_12);
		// deviceId = Marshal.PtrToStringAnsi(videoDeviceId);
		String_t** L_13 = ___deviceId2;
		intptr_t L_14 = V_1;
		String_t* L_15 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)L_13) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)(RuntimeObject *)L_15);
		// Marshal.FreeHGlobal(videoDeviceName);
		intptr_t L_16 = V_0;
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_16, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(videoDeviceId);
		intptr_t L_17 = V_1;
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_17, /*hidden argument*/NULL);
		// return ret;
		return L_9;
	}

IL_0053:
	{
		// return (int)ERROR_CODE.ERROR_INVALID_ARGUMENT;
		return ((int32_t)-2);
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::GetCurrentVideoDevice(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_GetCurrentVideoDevice_m1ED857016CFD70B027BE671D02086CC9E27FFE66 (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, String_t** ___deviceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoDeviceManager_GetCurrentVideoDevice_m1ED857016CFD70B027BE671D02086CC9E27FFE66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// if (GetVideoDeviceCount() > 0)
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 agora_gaming_rtc.IVideoDeviceManager::GetVideoDeviceCount() */, __this);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// System.IntPtr videoDeviceId = Marshal.AllocHGlobal(512);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(((int32_t)512), /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// int ret = IRtcEngineNative.getCurrentVideoDevice(videoDeviceId);
		intptr_t L_3 = V_0;
		int32_t L_4 = IRtcEngineNative_getCurrentVideoDevice_mCEC9005B2781AB596F439B6163646E187C5A2E31((intptr_t)L_3, /*hidden argument*/NULL);
		// deviceId = Marshal.PtrToStringAnsi(videoDeviceId);
		String_t** L_5 = ___deviceId0;
		intptr_t L_6 = V_0;
		String_t* L_7 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_6, /*hidden argument*/NULL);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_7);
		// Marshal.FreeHGlobal(videoDeviceId);
		intptr_t L_8 = V_0;
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_8, /*hidden argument*/NULL);
		// return ret;
		return L_4;
	}

IL_0034:
	{
		// return (int)ERROR_CODE.ERROR_NO_DEVICE_PLUGIN;
		return ((int32_t)-100);
	}
}
// System.Int32 agora_gaming_rtc.VideoDeviceManager::SetVideoDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoDeviceManager_SetVideoDevice_mD437B929F20D9E3569533391368C117F2DCCCB2C (VideoDeviceManager_t72BF2E14EDEC57E643BF9CB09C2921759B4AEC3F * __this, String_t* ___deviceId0, const RuntimeMethod* method)
{
	{
		// if (_mEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__mEngine_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.setVideoDeviceCollectionDevice(deviceId);
		String_t* L_1 = ___deviceId0;
		int32_t L_2 = IRtcEngineNative_setVideoDeviceCollectionDevice_mDA2843BCDB9304F4718D8E671A8C7DC4CB870D0C(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void agora_gaming_rtc.VideoDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDeviceManager__cctor_m6E1F863172E32DDB53FAE482C38A77117714880C (const RuntimeMethod* method)
{
	{
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
// Conversion methods for marshalling of: agora_gaming_rtc.VideoFrame
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke(const VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732& unmarshaled, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	marshaled.___width_1 = unmarshaled.get_width_1();
	marshaled.___height_2 = unmarshaled.get_height_2();
	marshaled.___yStride_3 = unmarshaled.get_yStride_3();
	marshaled.___buffer_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_buffer_4());
	marshaled.___rotation_5 = unmarshaled.get_rotation_5();
	marshaled.___renderTimeMs_6 = unmarshaled.get_renderTimeMs_6();
	marshaled.___avsync_type_7 = unmarshaled.get_avsync_type_7();
}
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke_back(const VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke& marshaled, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	int32_t unmarshaled_width_temp_1 = 0;
	unmarshaled_width_temp_1 = marshaled.___width_1;
	unmarshaled.set_width_1(unmarshaled_width_temp_1);
	int32_t unmarshaled_height_temp_2 = 0;
	unmarshaled_height_temp_2 = marshaled.___height_2;
	unmarshaled.set_height_2(unmarshaled_height_temp_2);
	int32_t unmarshaled_yStride_temp_3 = 0;
	unmarshaled_yStride_temp_3 = marshaled.___yStride_3;
	unmarshaled.set_yStride_3(unmarshaled_yStride_temp_3);
	unmarshaled.set_buffer_4((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, marshaled.___buffer_4));
	int32_t unmarshaled_rotation_temp_5 = 0;
	unmarshaled_rotation_temp_5 = marshaled.___rotation_5;
	unmarshaled.set_rotation_5(unmarshaled_rotation_temp_5);
	int64_t unmarshaled_renderTimeMs_temp_6 = 0;
	unmarshaled_renderTimeMs_temp_6 = marshaled.___renderTimeMs_6;
	unmarshaled.set_renderTimeMs_6(unmarshaled_renderTimeMs_temp_6);
	int32_t unmarshaled_avsync_type_temp_7 = 0;
	unmarshaled_avsync_type_temp_7 = marshaled.___avsync_type_7;
	unmarshaled.set_avsync_type_7(unmarshaled_avsync_type_temp_7);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.VideoFrame
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke_cleanup(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___buffer_4);
	marshaled.___buffer_4 = NULL;
}
// Conversion methods for marshalling of: agora_gaming_rtc.VideoFrame
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_com(const VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732& unmarshaled, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	marshaled.___width_1 = unmarshaled.get_width_1();
	marshaled.___height_2 = unmarshaled.get_height_2();
	marshaled.___yStride_3 = unmarshaled.get_yStride_3();
	marshaled.___buffer_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_buffer_4());
	marshaled.___rotation_5 = unmarshaled.get_rotation_5();
	marshaled.___renderTimeMs_6 = unmarshaled.get_renderTimeMs_6();
	marshaled.___avsync_type_7 = unmarshaled.get_avsync_type_7();
}
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_com_back(const VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_com& marshaled, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	int32_t unmarshaled_width_temp_1 = 0;
	unmarshaled_width_temp_1 = marshaled.___width_1;
	unmarshaled.set_width_1(unmarshaled_width_temp_1);
	int32_t unmarshaled_height_temp_2 = 0;
	unmarshaled_height_temp_2 = marshaled.___height_2;
	unmarshaled.set_height_2(unmarshaled_height_temp_2);
	int32_t unmarshaled_yStride_temp_3 = 0;
	unmarshaled_yStride_temp_3 = marshaled.___yStride_3;
	unmarshaled.set_yStride_3(unmarshaled_yStride_temp_3);
	unmarshaled.set_buffer_4((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, marshaled.___buffer_4));
	int32_t unmarshaled_rotation_temp_5 = 0;
	unmarshaled_rotation_temp_5 = marshaled.___rotation_5;
	unmarshaled.set_rotation_5(unmarshaled_rotation_temp_5);
	int64_t unmarshaled_renderTimeMs_temp_6 = 0;
	unmarshaled_renderTimeMs_temp_6 = marshaled.___renderTimeMs_6;
	unmarshaled.set_renderTimeMs_6(unmarshaled_renderTimeMs_temp_6);
	int32_t unmarshaled_avsync_type_temp_7 = 0;
	unmarshaled_avsync_type_temp_7 = marshaled.___avsync_type_7;
	unmarshaled.set_avsync_type_7(unmarshaled_avsync_type_temp_7);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.VideoFrame
IL2CPP_EXTERN_C void VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_com_cleanup(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___buffer_4);
	marshaled.___buffer_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB(int32_t ___videoFrameType0, int32_t ___width1, int32_t ___height2, int32_t ___yStride3, intptr_t ___buffer4, int32_t ___rotation5, int64_t ___renderTimeMs6)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB(___videoFrameType0, ___width1, ___height2, ___yStride3, ___buffer4, ___rotation5, ___renderTimeMs6, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9(uint32_t ___uid0, int32_t ___videoFrameType1, int32_t ___width2, int32_t ___height3, int32_t ___yStride4, intptr_t ___yBuffer5, int32_t ___rotation6, int64_t ___renderTimeMs7)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9(___uid0, ___videoFrameType1, ___width2, ___height3, ___yStride4, ___yBuffer5, ___rotation6, ___renderTimeMs7, NULL);

}
// System.Void agora_gaming_rtc.VideoRawDataManager::.ctor(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager__ctor_m84AF74CE7DEBAD486A0EDB24A7610FCF16F62044 (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___irtcEngine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager__ctor_m84AF74CE7DEBAD486A0EDB24A7610FCF16F62044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private VideoRawDataManager(IRtcEngine irtcEngine)
		IVideoRawDataManager__ctor_m8A153C7A905BD44725F1E002EFCB1F6A20BE063D(__this, /*hidden argument*/NULL);
		// _irtcEngine = irtcEngine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ___irtcEngine0;
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->set__irtcEngine_1(L_0);
		// }
		return;
	}
}
// agora_gaming_rtc.VideoRawDataManager agora_gaming_rtc.VideoRawDataManager::GetInstance(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * VideoRawDataManager_GetInstance_m145C0D1E36D156CC4507125831470E58F3C833D7 (IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___irtcEngine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_GetInstance_m145C0D1E36D156CC4507125831470E58F3C833D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_videoRawDataManagerInstance == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _videoRawDataManagerInstance = new VideoRawDataManager(irtcEngine);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_1 = ___irtcEngine0;
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_2 = (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 *)il2cpp_codegen_object_new(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager__ctor_m84AF74CE7DEBAD486A0EDB24A7610FCF16F62044(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->set__videoRawDataManagerInstance_2(L_2);
	}

IL_0012:
	{
		// return _videoRawDataManagerInstance;
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_3 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		return L_3;
	}
}
// System.Void agora_gaming_rtc.VideoRawDataManager::ReleaseInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager_ReleaseInstance_m6BF83C2F8ECCCEAE605F9AD9A5E8E71CBFB3B278 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_ReleaseInstance_m6BF83C2F8ECCCEAE605F9AD9A5E8E71CBFB3B278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _videoRawDataManagerInstance = null;
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->set__videoRawDataManagerInstance_2((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 *)NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRawDataManager::SetEngine(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager_SetEngine_m2C076158E5F7315A7BB9E9FA73D9EBB12B0810A2 (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___irtcEngine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_SetEngine_m2C076158E5F7315A7BB9E9FA73D9EBB12B0810A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _irtcEngine = irtcEngine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ___irtcEngine0;
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->set__irtcEngine_1(L_0);
		// }
		return;
	}
}
// System.Int32 agora_gaming_rtc.VideoRawDataManager::SetOnCaptureVideoFrameCallback(agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRawDataManager_SetOnCaptureVideoFrameCallback_m4592EB87A146CD588C5ADA7F94C0C3033512EAC1 (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_SetOnCaptureVideoFrameCallback_m4592EB87A146CD588C5ADA7F94C0C3033512EAC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_irtcEngine == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__irtcEngine_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000a:
	{
		// if (action == null)
		OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * L_1 = ___action0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// OnCaptureVideoFrame = null;
		__this->set_OnCaptureVideoFrame_3((OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 *)NULL);
		// IRtcEngineNative.initEventOnCaptureVideoFrame(null);
		IRtcEngineNative_initEventOnCaptureVideoFrame_m43B9E89631F705FE9F86AB7778B7EE55A8AE1C24((EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D *)NULL, /*hidden argument*/NULL);
		// }
		goto IL_0034;
	}

IL_001c:
	{
		// OnCaptureVideoFrame = action;
		OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * L_2 = ___action0;
		__this->set_OnCaptureVideoFrame_3(L_2);
		// IRtcEngineNative.initEventOnCaptureVideoFrame(OnCaptureVideoFrameCallback);
		EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D * L_3 = (EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D *)il2cpp_codegen_object_new(EngineEventOnCaptureVideoFrame_tF5B94A1741F3FF4B438ACC2AC8831AB3BACDFD6D_il2cpp_TypeInfo_var);
		EngineEventOnCaptureVideoFrame__ctor_mADAC72543148458E379EB5EB55F58F97E54A5B93(L_3, NULL, (intptr_t)((intptr_t)VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB_RuntimeMethod_var), /*hidden argument*/NULL);
		IRtcEngineNative_initEventOnCaptureVideoFrame_m43B9E89631F705FE9F86AB7778B7EE55A8AE1C24(L_3, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return (int)ERROR_CODE.ERROR_OK;
		return 0;
	}
}
// System.Int32 agora_gaming_rtc.VideoRawDataManager::SetOnRenderVideoFrameCallback(agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRawDataManager_SetOnRenderVideoFrameCallback_mA2A4CE1335FF204BE16E3CC3F2C0DF207CBDD188 (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_SetOnRenderVideoFrameCallback_mA2A4CE1335FF204BE16E3CC3F2C0DF207CBDD188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_irtcEngine == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__irtcEngine_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000a:
	{
		// if (action == null)
		OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * L_1 = ___action0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// OnRenderVideoFrame = null;
		__this->set_OnRenderVideoFrame_4((OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 *)NULL);
		// IRtcEngineNative.initEventOnRenderVideoFrame(null);
		IRtcEngineNative_initEventOnRenderVideoFrame_mF3B622236197B7521BF9586E5F8E389C61E72E7D((EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E *)NULL, /*hidden argument*/NULL);
		// }
		goto IL_0034;
	}

IL_001c:
	{
		// OnRenderVideoFrame = action;
		OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * L_2 = ___action0;
		__this->set_OnRenderVideoFrame_4(L_2);
		// IRtcEngineNative.initEventOnRenderVideoFrame(OnRenderVideoFrameCallback);
		EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E * L_3 = (EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E *)il2cpp_codegen_object_new(EngineEventOnRenderVideoFrame_tD4393203E603B2CBA7FA669E61E86D32C7C1C46E_il2cpp_TypeInfo_var);
		EngineEventOnRenderVideoFrame__ctor_m13BE2BBCB055C0CB6D1F238E106C79ED79728604(L_3, NULL, (intptr_t)((intptr_t)VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9_RuntimeMethod_var), /*hidden argument*/NULL);
		IRtcEngineNative_initEventOnRenderVideoFrame_mF3B622236197B7521BF9586E5F8E389C61E72E7D(L_3, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return (int)ERROR_CODE.ERROR_OK;
		return 0;
	}
}
// System.Int32 agora_gaming_rtc.VideoRawDataManager::RegisterVideoRawDataObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRawDataManager_RegisterVideoRawDataObserver_m225316ADA63DD358B2997E76A8FF9F11590BE8D8 (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_RegisterVideoRawDataObserver_m225316ADA63DD358B2997E76A8FF9F11590BE8D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_irtcEngine == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__irtcEngine_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_OK;
		return 0;
	}

IL_0009:
	{
		// return IRtcEngineNative.registerVideoRawDataObserver();
		int32_t L_1 = IRtcEngineNative_registerVideoRawDataObserver_m2B0961E38B1B37EAD073115E4DDF6574EDF478B8(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 agora_gaming_rtc.VideoRawDataManager::UnRegisterVideoRawDataObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRawDataManager_UnRegisterVideoRawDataObserver_m505FECB036DD7178AA57B5E4EB7C9753267E4AAD (VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_UnRegisterVideoRawDataObserver_m505FECB036DD7178AA57B5E4EB7C9753267E4AAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_irtcEngine == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__irtcEngine_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_OK;
		return 0;
	}

IL_0009:
	{
		// return IRtcEngineNative.unRegisterVideoRawDataObserver();
		int32_t L_1 = IRtcEngineNative_unRegisterVideoRawDataObserver_mF209852453FB93F1356F88840E67D4E7486CC4FF(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void agora_gaming_rtc.VideoRawDataManager::OnCaptureVideoFrameCallback(System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB (int32_t ___videoFrameType0, int32_t ___width1, int32_t ___height2, int32_t ___yStride3, intptr_t ___buffer4, int32_t ___rotation5, int64_t ___renderTimeMs6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_OnCaptureVideoFrameCallback_mD58EA679E157614164BF5EA889AFA78D5ED417EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// if (_irtcEngine != null && _videoRawDataManagerInstance != null && _videoRawDataManagerInstance.OnCaptureVideoFrame != null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__irtcEngine_1();
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_1 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_2 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		NullCheck(L_2);
		OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * L_3 = L_2->get_OnCaptureVideoFrame_3();
		if (!L_3)
		{
			goto IL_0081;
		}
	}
	{
		// VideoFrame videoFrame = new VideoFrame();
		il2cpp_codegen_initobj((&V_0), sizeof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 ));
		// videoFrame.type = (VIDEO_FRAME_TYPE)videoFrameType;
		int32_t L_4 = ___videoFrameType0;
		(&V_0)->set_type_0(L_4);
		// videoFrame.width = width;
		int32_t L_5 = ___width1;
		(&V_0)->set_width_1(L_5);
		// videoFrame.height = height;
		int32_t L_6 = ___height2;
		(&V_0)->set_height_2(L_6);
		// videoFrame.yStride = yStride;
		int32_t L_7 = ___yStride3;
		(&V_0)->set_yStride_3(L_7);
		// byte[] yB = new byte[yStride * height];
		int32_t L_8 = ___yStride3;
		int32_t L_9 = ___height2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9)));
		V_1 = L_10;
		// Marshal.Copy(buffer, yB, 0, yStride * height);
		intptr_t L_11 = ___buffer4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_1;
		int32_t L_13 = ___yStride3;
		int32_t L_14 = ___height2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_11, L_12, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
		// videoFrame.buffer = yB;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_1;
		(&V_0)->set_buffer_4(L_15);
		// videoFrame.rotation = rotation;
		int32_t L_16 = ___rotation5;
		(&V_0)->set_rotation_5(L_16);
		// videoFrame.renderTimeMs = renderTimeMs;
		int64_t L_17 = ___renderTimeMs6;
		(&V_0)->set_renderTimeMs_6(L_17);
		// _videoRawDataManagerInstance.OnCaptureVideoFrame(videoFrame);
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_18 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		NullCheck(L_18);
		OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * L_19 = L_18->get_OnCaptureVideoFrame_3();
		VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  L_20 = V_0;
		NullCheck(L_19);
		OnCaptureVideoFrameHandler_Invoke_mB780F092F891897BD22D6A6950814E7A2FD4B179(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRawDataManager::OnRenderVideoFrameCallback(System.UInt32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9 (uint32_t ___uid0, int32_t ___videoFrameType1, int32_t ___width2, int32_t ___height3, int32_t ___yStride4, intptr_t ___yBuffer5, int32_t ___rotation6, int64_t ___renderTimeMs7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRawDataManager_OnRenderVideoFrameCallback_m3D89976D165373F3EC61B1057AD385BCCCB3F6B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// if (_irtcEngine != null && _videoRawDataManagerInstance != null && _videoRawDataManagerInstance.OnRenderVideoFrame != null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__irtcEngine_1();
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_1 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_2 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		NullCheck(L_2);
		OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * L_3 = L_2->get_OnRenderVideoFrame_4();
		if (!L_3)
		{
			goto IL_0085;
		}
	}
	{
		// VideoFrame videoFrame = new VideoFrame();
		il2cpp_codegen_initobj((&V_0), sizeof(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 ));
		// videoFrame.type = (VIDEO_FRAME_TYPE)videoFrameType;
		int32_t L_4 = ___videoFrameType1;
		(&V_0)->set_type_0(L_4);
		// videoFrame.width = width;
		int32_t L_5 = ___width2;
		(&V_0)->set_width_1(L_5);
		// videoFrame.height = height;
		int32_t L_6 = ___height3;
		(&V_0)->set_height_2(L_6);
		// videoFrame.yStride = yStride;
		int32_t L_7 = ___yStride4;
		(&V_0)->set_yStride_3(L_7);
		// byte[] yB = new byte[yStride * height];
		int32_t L_8 = ___yStride4;
		int32_t L_9 = ___height3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9)));
		V_1 = L_10;
		// Marshal.Copy(yBuffer, yB, 0, yStride * height);
		intptr_t L_11 = ___yBuffer5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_1;
		int32_t L_13 = ___yStride4;
		int32_t L_14 = ___height3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_11, L_12, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
		// videoFrame.buffer = yB;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_1;
		(&V_0)->set_buffer_4(L_15);
		// videoFrame.rotation = rotation;
		int32_t L_16 = ___rotation6;
		(&V_0)->set_rotation_5(L_16);
		// videoFrame.renderTimeMs = renderTimeMs;
		int64_t L_17 = ___renderTimeMs7;
		(&V_0)->set_renderTimeMs_6(L_17);
		// _videoRawDataManagerInstance.OnRenderVideoFrame(uid, videoFrame);
		IL2CPP_RUNTIME_CLASS_INIT(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var);
		VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8 * L_18 = ((VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_StaticFields*)il2cpp_codegen_static_fields_for(VideoRawDataManager_tAA90010744642C88DD8EAA6D49CA02C6E20F1FD8_il2cpp_TypeInfo_var))->get__videoRawDataManagerInstance_2();
		NullCheck(L_18);
		OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * L_19 = L_18->get_OnRenderVideoFrame_4();
		uint32_t L_20 = ___uid0;
		VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  L_21 = V_0;
		NullCheck(L_19);
		OnRenderVideoFrameHandler_Invoke_m84C5BD370184AE2A53A06DC87C6BDECBAA95B5A6(L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRawDataManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRawDataManager__cctor_m4B7D3B8F2E1208F8E6BEB8B5D0CF1F7BC53E5CC4 (const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 (OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * __this, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___videoFrame0' to native representation
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke ____videoFrame0_marshaled = {};
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke(___videoFrame0, ____videoFrame0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____videoFrame0_marshaled);

	// Marshaling cleanup of parameter '___videoFrame0' native representation
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke_cleanup(____videoFrame0_marshaled);

}
// System.Void agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureVideoFrameHandler__ctor_m2FBD91E51B48CA69C84619B21AA85DB6ECFAE2EE (OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler::Invoke(agora_gaming_rtc.VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureVideoFrameHandler_Invoke_mB780F092F891897BD22D6A6950814E7A2FD4B179 (OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * __this, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___videoFrame0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFrame0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(targetMethod, targetThis, ___videoFrame0);
					else
						GenericVirtActionInvoker1< VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(targetMethod, targetThis, ___videoFrame0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFrame0);
					else
						VirtActionInvoker1< VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFrame0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___videoFrame0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___videoFrame0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFrame0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler::BeginInvoke(agora_gaming_rtc.VideoFrame,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCaptureVideoFrameHandler_BeginInvoke_mEF7EC0B336589944372C22F26ED1FAA306E3EF4B (OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * __this, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCaptureVideoFrameHandler_BeginInvoke_mEF7EC0B336589944372C22F26ED1FAA306E3EF4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_il2cpp_TypeInfo_var, &___videoFrame0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void agora_gaming_rtc.VideoRawDataManager_OnCaptureVideoFrameHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCaptureVideoFrameHandler_EndInvoke_m3273E46121E891ECB73F1D164802A60F54C7906A (OnCaptureVideoFrameHandler_t0BC53594699811B0BFB7F93CCD81739393587887 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 (OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * __this, uint32_t ___uid0, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___videoFrame1' to native representation
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshaled_pinvoke ____videoFrame1_marshaled = {};
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke(___videoFrame1, ____videoFrame1_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___uid0, ____videoFrame1_marshaled);

	// Marshaling cleanup of parameter '___videoFrame1' native representation
	VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_marshal_pinvoke_cleanup(____videoFrame1_marshaled);

}
// System.Void agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler__ctor_m098B8EB6DEBFC49A4929CA3EE15B10488252FB26 (OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler::Invoke(System.UInt32,agora_gaming_rtc.VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler_Invoke_m84C5BD370184AE2A53A06DC87C6BDECBAA95B5A6 (OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * __this, uint32_t ___uid0, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___uid0, ___videoFrame1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___videoFrame1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(targetMethod, targetThis, ___uid0, ___videoFrame1);
					else
						GenericVirtActionInvoker2< uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(targetMethod, targetThis, ___uid0, ___videoFrame1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uid0, ___videoFrame1);
					else
						VirtActionInvoker2< uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uid0, ___videoFrame1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___uid0) - 1), ___videoFrame1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, uint32_t, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___videoFrame1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler::BeginInvoke(System.UInt32,agora_gaming_rtc.VideoFrame,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRenderVideoFrameHandler_BeginInvoke_mB710B6981210D7B69E975295C1E663383A4BD6B1 (OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * __this, uint32_t ___uid0, VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732  ___videoFrame1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnRenderVideoFrameHandler_BeginInvoke_mB710B6981210D7B69E975295C1E663383A4BD6B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___uid0);
	__d_args[1] = Box(VideoFrame_tDBB74B1B8EFD6F900ED1AE198ADAFADDE78A7732_il2cpp_TypeInfo_var, &___videoFrame1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void agora_gaming_rtc.VideoRawDataManager_OnRenderVideoFrameHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler_EndInvoke_m78E4537D2C38C7B92292AC78DBAA013E27FCA608 (OnRenderVideoFrameHandler_t006E1B7DF6DC802DBCE6969E6BF0950FCB168887 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void agora_gaming_rtc.VideoRender::.ctor(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender__ctor_m5B1D447869D1DE0EF5F58005536ABE6D65C236F0 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method)
{
	{
		// private VideoRender(IRtcEngine rtcEngine)
		IVideoRender__ctor_m8F29B8C72326F6B0DF6E8C7D9ABF08B19313BFFE(__this, /*hidden argument*/NULL);
		// _rtcEngine = rtcEngine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ___rtcEngine0;
		__this->set__rtcEngine_2(L_0);
		// }
		return;
	}
}
// agora_gaming_rtc.VideoRender agora_gaming_rtc.VideoRender::GetInstance(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * VideoRender_GetInstance_m3FE072B7639467FBEB85BC8573B4521426FF4E6B (IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRender_GetInstance_m3FE072B7639467FBEB85BC8573B4521426FF4E6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_videoRenderInstance == null)
		IL2CPP_RUNTIME_CLASS_INIT(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_0 = ((VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_StaticFields*)il2cpp_codegen_static_fields_for(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var))->get__videoRenderInstance_1();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _videoRenderInstance = new VideoRender(rtcEngine);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_1 = ___rtcEngine0;
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_2 = (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 *)il2cpp_codegen_object_new(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var);
		VideoRender__ctor_m5B1D447869D1DE0EF5F58005536ABE6D65C236F0(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var);
		((VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_StaticFields*)il2cpp_codegen_static_fields_for(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var))->set__videoRenderInstance_1(L_2);
	}

IL_0012:
	{
		// return _videoRenderInstance;
		IL2CPP_RUNTIME_CLASS_INIT(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_3 = ((VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_StaticFields*)il2cpp_codegen_static_fields_for(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var))->get__videoRenderInstance_1();
		return L_3;
	}
}
// System.Void agora_gaming_rtc.VideoRender::ReleaseInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_ReleaseInstance_m35E0D4F7C94D8F86461A448B163E4D9892C3C636 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoRender_ReleaseInstance_m35E0D4F7C94D8F86461A448B163E4D9892C3C636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _videoRenderInstance = null;
		IL2CPP_RUNTIME_CLASS_INIT(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var);
		((VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_StaticFields*)il2cpp_codegen_static_fields_for(VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var))->set__videoRenderInstance_1((VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 *)NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRender::SetEngine(agora_gaming_rtc.IRtcEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_SetEngine_m2334E91E05DCC76767053218E90FF96A93A5F923 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * ___rtcEngine0, const RuntimeMethod* method)
{
	{
		// _rtcEngine = rtcEngine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ___rtcEngine0;
		__this->set__rtcEngine_2(L_0);
		// }
		return;
	}
}
// System.Int32 agora_gaming_rtc.VideoRender::SetVideoRenderMode(agora_gaming_rtc.VIDEO_RENDER_MODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRender_SetVideoRenderMode_mC33B7D0C839AB4A7927E519317F68C23F8DEACDA (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, int32_t ____renderMode0, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.setRenderMode((int)_renderMode);
		int32_t L_1 = ____renderMode0;
		int32_t L_2 = IRtcEngineNative_setRenderMode_mD6FDD26E84BB4D58C3B6C43F0263633E445C4AD5(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 agora_gaming_rtc.VideoRender::UpdateVideoRawData(System.UInt32,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRender_UpdateVideoRawData_m3D11FCF4AD356A22A3FD045264D4E48224089B1B (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, uint32_t ___uid0, intptr_t ___data1, int32_t* ___width2, int32_t* ___height3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// int rc = IRtcEngineNative.updateVideoRawData(data, uid);
		intptr_t L_1 = ___data1;
		uint32_t L_2 = ___uid0;
		int32_t L_3 = IRtcEngineNative_updateVideoRawData_mE04049D6FFA3A993567CC411D9F438F9A2426334((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (rc == -1)
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0019:
	{
		// width = (int)rc >> 16;
		int32_t* L_5 = ___width2;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)16)));
		// height = (int)(rc & 0xffff);
		int32_t* L_7 = ___height3;
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)65535)));
		// return 0;
		return 0;
	}
}
// System.Int32 agora_gaming_rtc.VideoRender::UpdateVideoRawData(System.String,System.UInt32,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRender_UpdateVideoRawData_m3D34EAEC49806C63E4814D32666E871416529454 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, String_t* ___channelId0, uint32_t ___uid1, intptr_t ___data2, int32_t* ___width3, int32_t* ___height4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// int rc = IRtcEngineNative.updateVideoRawData2(data, channelId, uid);
		intptr_t L_1 = ___data2;
		String_t* L_2 = ___channelId0;
		uint32_t L_3 = ___uid1;
		int32_t L_4 = IRtcEngineNative_updateVideoRawData2_m47DA3F72D06F089EEFCBAB5E21B129A5C3F3C42F((intptr_t)L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (rc == -1)
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_001a:
	{
		// width = (int)rc >> 16;
		int32_t* L_6 = ___width3;
		int32_t L_7 = V_0;
		*((int32_t*)L_6) = (int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)16)));
		// height = (int)(rc & 0xffff);
		int32_t* L_8 = ___height4;
		int32_t L_9 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)65535)));
		// return 0;
		return 0;
	}
}
// System.Int32 agora_gaming_rtc.VideoRender::UpdateTexture(System.Int32,System.UInt32,System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRender_UpdateTexture_m28452A2F92B3AB4FEA419355F4B943FB2B37B86F (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, int32_t ___tex0, uint32_t ___uid1, intptr_t ___data2, int32_t* ___width3, int32_t* ___height4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// int rc = IRtcEngineNative.updateTexture(tex, data, uid);
		int32_t L_1 = ___tex0;
		intptr_t L_2 = ___data2;
		uint32_t L_3 = ___uid1;
		int32_t L_4 = IRtcEngineNative_updateTexture_mEA0BA8A9256634B03B47452D35F09353BF5DEFDF(L_1, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (rc == -1)
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_001a:
	{
		// width = (int)rc >> 16;
		int32_t* L_6 = ___width3;
		int32_t L_7 = V_0;
		*((int32_t*)L_6) = (int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)16)));
		// height = (int)(rc & 0xffff);
		int32_t* L_8 = ___height4;
		int32_t L_9 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)65535)));
		// return 0;
		return 0;
	}
}
// System.Void agora_gaming_rtc.VideoRender::AddUserVideoInfo(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_AddUserVideoInfo_m0C020070FFDA3FB8B6B4BBE37CCDD94DA713669C (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, uint32_t ___userId0, uint32_t ___textureId1, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IRtcEngineNative.addUserVideoInfo(userId, textureId);
		uint32_t L_1 = ___userId0;
		uint32_t L_2 = ___textureId1;
		IRtcEngineNative_addUserVideoInfo_mA702F0938BE9E9D2D44B970003E08C2507BCBC4D(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRender::RemoveUserVideoInfo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_RemoveUserVideoInfo_m10B8F92E8F2F35A650B4825DE3B3627BBFFB4EFB (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, uint32_t ____userId0, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IRtcEngineNative.removeUserVideoInfo(_userId);
		uint32_t L_1 = ____userId0;
		IRtcEngineNative_removeUserVideoInfo_m1DAA7A9F89B3A3E31389FB7442FFB7A48067076F(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRender::AddUserVideoInfo(System.String,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_AddUserVideoInfo_mA3C6F6757EA121A14CF2B347C16969221A4F4CEB (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, String_t* ___channelId0, uint32_t ____userId1, uint32_t ____textureId2, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IRtcEngineNative.addUserVideoInfo2(channelId, _userId, _textureId);
		String_t* L_1 = ___channelId0;
		uint32_t L_2 = ____userId1;
		uint32_t L_3 = ____textureId2;
		IRtcEngineNative_addUserVideoInfo2_mCF4ECDEC39975C9C452032D7C18E17CD2F62D0B7(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoRender::RemoveUserVideoInfo(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_RemoveUserVideoInfo_mCAB04C3E48927D0BE1BBC4BB0CA68FC458695C61 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, String_t* ___channelId0, uint32_t ____userId1, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IRtcEngineNative.removeUserVideoInfo2(channelId, _userId);
		String_t* L_1 = ___channelId0;
		uint32_t L_2 = ____userId1;
		IRtcEngineNative_removeUserVideoInfo2_m39DCAA3F28894289D155DA79360D277051C86DF7(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 agora_gaming_rtc.VideoRender::GenerateNativeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoRender_GenerateNativeTexture_mDF7FF43F7442D6D5BADFCFD7D4698735E00F55C6 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return (int)ERROR_CODE.ERROR_NOT_INIT_ENGINE;
		return ((int32_t)-7);
	}

IL_000b:
	{
		// return IRtcEngineNative.generateNativeTexture();
		int32_t L_1 = IRtcEngineNative_generateNativeTexture_m234D9DB95F3FC5010004BEC1203874B313C81626(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void agora_gaming_rtc.VideoRender::DeleteTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender_DeleteTexture_m6377018770D6C8EC2ECCDBFFBED67E6D15F9B5C4 (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, int32_t ___tex0, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IRtcEngineNative.deleteTexture(tex);
		int32_t L_1 = ___tex0;
		IRtcEngineNative_deleteTexture_mDB800540DC0C5235FC9FBA28AE4AC2C1DD800573(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean agora_gaming_rtc.VideoRender::GetMultiChannelWanted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoRender_GetMultiChannelWanted_mBA103EEAE06E8A7DA67A5D7A0A701BF765F23A6A (VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * __this, const RuntimeMethod* method)
{
	{
		// if (_rtcEngine == null)
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = __this->get__rtcEngine_2();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return IRtcEngineNative.getMultiChannelWanted();
		bool L_1 = IRtcEngineNative_getMultiChannelWanted_mDF227E41C7F6C87CD00CA23A3D0FE886D7B9494F(/*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void agora_gaming_rtc.VideoRender::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoRender__cctor_m32A0BB03BB58B28CDD5312C9BA43FBC92242131D (const RuntimeMethod* method)
{
	{
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
// System.Void agora_gaming_rtc.VideoSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_Start_m14230F8D3922F150095DD5A722F82C0DD9C065DD (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_Start_m14230F8D3922F150095DD5A722F82C0DD9C065DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (VideoSurfaceType == AgoraVideoSurfaceType.Renderer)
		int32_t L_0 = __this->get_VideoSurfaceType_19();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// mRenderer = GetComponent<Renderer>();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		__this->set_mRenderer_13(L_1);
	}

IL_0014:
	{
		// if (mRenderer == null || VideoSurfaceType == AgoraVideoSurfaceType.RawImage)
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = __this->get_mRenderer_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->get_VideoSurfaceType_19();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}

IL_002b:
	{
		// mRawImage = GetComponent<RawImage>();
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_5 = Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1(__this, /*hidden argument*/Component_GetComponent_TisRawImage_t68991514DB8F48442D614E7904A298C936B3C7C8_m642665A17D3104F99F2305FA4059BEE638357ED1_RuntimeMethod_var);
		__this->set_mRawImage_14(L_5);
		// if (mRawImage != null)
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_6 = __this->get_mRawImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// VideoSurfaceType = AgoraVideoSurfaceType.RawImage;
		__this->set_VideoSurfaceType_19(1);
	}

IL_004c:
	{
		// if (mRawImage == null && mRenderer == null)
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_8 = __this->get_mRawImage_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = __this->get_mRenderer_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// _initialized = false;
		__this->set__initialized_15((bool)0);
		// Debug.LogError("Unable to find surface render in VideoSurface component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral057DC44675D60B9CD4EA0D603B60EC9D721B555B, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007a:
	{
		// _initialized = true;
		__this->set__initialized_15((bool)1);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_Update_m3424233C609A797BF82E00E1044449EE685B29A4 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_Update_m3424233C609A797BF82E00E1044449EE685B29A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (updateVideoFrameCount >= videoFps/videoFilter)
		uint32_t L_0 = __this->get_updateVideoFrameCount_11();
		uint32_t L_1 = __this->get_videoFps_18();
		uint32_t L_2 = __this->get_videoFilter_10();
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)L_2))))))
		{
			goto IL_001e;
		}
	}
	{
		// updateVideoFrameCount = 0;
		__this->set_updateVideoFrameCount_11(0);
		// }
		goto IL_002d;
	}

IL_001e:
	{
		// ++updateVideoFrameCount;
		uint32_t L_3 = __this->get_updateVideoFrameCount_11();
		__this->set_updateVideoFrameCount_11(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// return;
		return;
	}

IL_002d:
	{
		// IRtcEngine engine = GetEngine();
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_4 = VideoSurface_GetEngine_m189180578AD3164766DC2EAB7E4908C4B6C226E1(__this, /*hidden argument*/NULL);
		// if (engine == null || !_initialized || videoRender == null)
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		bool L_5 = __this->get__initialized_15();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_6 = __this->get_videoRender_9();
		if (L_6)
		{
			goto IL_0046;
		}
	}

IL_0045:
	{
		// return;
		return;
	}

IL_0046:
	{
		// uint uid = mUid;
		uint32_t L_7 = __this->get_mUid_20();
		V_0 = L_7;
		// if (mEnable)
		bool L_8 = __this->get_mEnable_22();
		if (!L_8)
		{
			goto IL_0280;
		}
	}
	{
		// if (IsBlankTexture())
		bool L_9 = VideoSurface_IsBlankTexture_mD2671DAD7F54461E42BCE654EB0528DBF3AE90C3(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_015f;
		}
	}
	{
		// int tmpi = -1;
		V_1 = (-1);
		// if (isMultiChannelWant)
		bool L_10 = __this->get_isMultiChannelWant_12();
		if (!L_10)
		{
			goto IL_00b8;
		}
	}
	{
		// if (uid == 0)
		uint32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0091;
		}
	}
	{
		// tmpi = videoRender.UpdateVideoRawData(uid, data, ref defWidth, ref defHeight);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_12 = __this->get_videoRender_9();
		uint32_t L_13 = V_0;
		intptr_t L_14 = __this->get_data_4();
		int32_t* L_15 = __this->get_address_of_defWidth_5();
		int32_t* L_16 = __this->get_address_of_defHeight_6();
		NullCheck(L_12);
		int32_t L_17 = VirtFuncInvoker4< int32_t, uint32_t, intptr_t, int32_t*, int32_t* >::Invoke(6 /* System.Int32 agora_gaming_rtc.IVideoRender::UpdateVideoRawData(System.UInt32,System.IntPtr,System.Int32&,System.Int32&) */, L_12, L_13, (intptr_t)L_14, (int32_t*)L_15, (int32_t*)L_16);
		V_1 = L_17;
		// }
		goto IL_00d7;
	}

IL_0091:
	{
		// tmpi = videoRender.UpdateVideoRawData(mChannelId, uid, data, ref defWidth, ref defHeight);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_18 = __this->get_videoRender_9();
		String_t* L_19 = __this->get_mChannelId_21();
		uint32_t L_20 = V_0;
		intptr_t L_21 = __this->get_data_4();
		int32_t* L_22 = __this->get_address_of_defWidth_5();
		int32_t* L_23 = __this->get_address_of_defHeight_6();
		NullCheck(L_18);
		int32_t L_24 = VirtFuncInvoker5< int32_t, String_t*, uint32_t, intptr_t, int32_t*, int32_t* >::Invoke(13 /* System.Int32 agora_gaming_rtc.IVideoRender::UpdateVideoRawData(System.String,System.UInt32,System.IntPtr,System.Int32&,System.Int32&) */, L_18, L_19, L_20, (intptr_t)L_21, (int32_t*)L_22, (int32_t*)L_23);
		V_1 = L_24;
		// }
		goto IL_00d7;
	}

IL_00b8:
	{
		// tmpi = videoRender.UpdateVideoRawData(uid, data, ref defWidth, ref defHeight);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_25 = __this->get_videoRender_9();
		uint32_t L_26 = V_0;
		intptr_t L_27 = __this->get_data_4();
		int32_t* L_28 = __this->get_address_of_defWidth_5();
		int32_t* L_29 = __this->get_address_of_defHeight_6();
		NullCheck(L_25);
		int32_t L_30 = VirtFuncInvoker4< int32_t, uint32_t, intptr_t, int32_t*, int32_t* >::Invoke(6 /* System.Int32 agora_gaming_rtc.IVideoRender::UpdateVideoRawData(System.UInt32,System.IntPtr,System.Int32&,System.Int32&) */, L_25, L_26, (intptr_t)L_27, (int32_t*)L_28, (int32_t*)L_29);
		V_1 = L_30;
	}

IL_00d7:
	{
		// if (tmpi == -1)
		int32_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)(-1)))))
		{
			goto IL_00dc;
		}
	}
	{
		// return;
		return;
	}

IL_00dc:
	{
		// if (defWidth > 0 && defHeight > 0)
		int32_t L_32 = __this->get_defWidth_5();
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_33 = __this->get_defHeight_6();
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_028f;
		}
	}

IL_00f4:
	try
	{ // begin try (depth: 1)
		// nativeTexture = new Texture2D((int)defWidth, (int)defHeight, TextureFormat.RGBA32, false);
		int32_t L_34 = __this->get_defWidth_5();
		int32_t L_35 = __this->get_defHeight_6();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_36 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_36, L_34, L_35, 4, (bool)0, /*hidden argument*/NULL);
		__this->set_nativeTexture_7(L_36);
		// nativeTexture.LoadRawTextureData(data, (int)defWidth * (int)defHeight * 4);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_37 = __this->get_nativeTexture_7();
		intptr_t L_38 = __this->get_data_4();
		int32_t L_39 = __this->get_defWidth_5();
		int32_t L_40 = __this->get_defHeight_6();
		NullCheck(L_37);
		Texture2D_LoadRawTextureData_m7F70DFFDBFA1E307A79838B94BC1A0438E063DFC(L_37, (intptr_t)L_38, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)L_40)), (int32_t)4)), /*hidden argument*/NULL);
		// ApplyTexture(nativeTexture);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_41 = __this->get_nativeTexture_7();
		VideoSurface_ApplyTexture_m876F5E184CB3C2EAC8149CE29161F33FADCED129(__this, L_41, /*hidden argument*/NULL);
		// nativeTexture.Apply();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_42 = __this->get_nativeTexture_7();
		NullCheck(L_42);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_42, /*hidden argument*/NULL);
		// }
		goto IL_028f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0149;
		throw e;
	}

CATCH_0149:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_2 = ((Exception_t *)__exception_local);
		// Debug.LogError("Exception e = " + e);
		Exception_t * L_43 = V_2;
		String_t* L_44 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralD96D4236D23AAA5699A240BADBE0E97108BBB757, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_44, /*hidden argument*/NULL);
		// }
		goto IL_028f;
	} // end catch (depth: 1)

IL_015f:
	{
		// if (nativeTexture == null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_45 = __this->get_nativeTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_45, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		// Debug.LogError("You didn't initialize native texture, please remove native texture and initialize it by agora.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral84482913C1CA9BFFF93109C33E6F243912FEB21E, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0178:
	{
		// int width = 0;
		V_3 = 0;
		// int height = 0;
		V_4 = 0;
		// int tmpi = -1;
		V_5 = (-1);
		// if (isMultiChannelWant)
		bool L_47 = __this->get_isMultiChannelWant_12();
		if (!L_47)
		{
			goto IL_01ca;
		}
	}
	{
		// if (uid == 0)
		uint32_t L_48 = V_0;
		if (L_48)
		{
			goto IL_01a5;
		}
	}
	{
		// tmpi = videoRender.UpdateVideoRawData(uid, data, ref width, ref height);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_49 = __this->get_videoRender_9();
		uint32_t L_50 = V_0;
		intptr_t L_51 = __this->get_data_4();
		NullCheck(L_49);
		int32_t L_52 = VirtFuncInvoker4< int32_t, uint32_t, intptr_t, int32_t*, int32_t* >::Invoke(6 /* System.Int32 agora_gaming_rtc.IVideoRender::UpdateVideoRawData(System.UInt32,System.IntPtr,System.Int32&,System.Int32&) */, L_49, L_50, (intptr_t)L_51, (int32_t*)(&V_3), (int32_t*)(&V_4));
		V_5 = L_52;
		// }
		goto IL_01e2;
	}

IL_01a5:
	{
		// tmpi = videoRender.UpdateVideoRawData(mChannelId, mUid, data, ref width, ref height);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_53 = __this->get_videoRender_9();
		String_t* L_54 = __this->get_mChannelId_21();
		uint32_t L_55 = __this->get_mUid_20();
		intptr_t L_56 = __this->get_data_4();
		NullCheck(L_53);
		int32_t L_57 = VirtFuncInvoker5< int32_t, String_t*, uint32_t, intptr_t, int32_t*, int32_t* >::Invoke(13 /* System.Int32 agora_gaming_rtc.IVideoRender::UpdateVideoRawData(System.String,System.UInt32,System.IntPtr,System.Int32&,System.Int32&) */, L_53, L_54, L_55, (intptr_t)L_56, (int32_t*)(&V_3), (int32_t*)(&V_4));
		V_5 = L_57;
		// }
		goto IL_01e2;
	}

IL_01ca:
	{
		// tmpi = videoRender.UpdateVideoRawData(uid, data, ref width, ref height);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_58 = __this->get_videoRender_9();
		uint32_t L_59 = V_0;
		intptr_t L_60 = __this->get_data_4();
		NullCheck(L_58);
		int32_t L_61 = VirtFuncInvoker4< int32_t, uint32_t, intptr_t, int32_t*, int32_t* >::Invoke(6 /* System.Int32 agora_gaming_rtc.IVideoRender::UpdateVideoRawData(System.UInt32,System.IntPtr,System.Int32&,System.Int32&) */, L_58, L_59, (intptr_t)L_60, (int32_t*)(&V_3), (int32_t*)(&V_4));
		V_5 = L_61;
	}

IL_01e2:
	{
		// if (tmpi == -1)
		int32_t L_62 = V_5;
		if ((!(((uint32_t)L_62) == ((uint32_t)(-1)))))
		{
			goto IL_01e8;
		}
	}
	{
		// return;
		return;
	}

IL_01e8:
	{
	}

IL_01e9:
	try
	{ // begin try (depth: 1)
		{
			// if (width == defWidth  && height == defHeight)
			int32_t L_63 = V_3;
			int32_t L_64 = __this->get_defWidth_5();
			if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
			{
				goto IL_0220;
			}
		}

IL_01f2:
		{
			int32_t L_65 = V_4;
			int32_t L_66 = __this->get_defHeight_6();
			if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
			{
				goto IL_0220;
			}
		}

IL_01fc:
		{
			// nativeTexture.LoadRawTextureData(data, (int)width * (int)height * 4);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_67 = __this->get_nativeTexture_7();
			intptr_t L_68 = __this->get_data_4();
			int32_t L_69 = V_3;
			int32_t L_70 = V_4;
			NullCheck(L_67);
			Texture2D_LoadRawTextureData_m7F70DFFDBFA1E307A79838B94BC1A0438E063DFC(L_67, (intptr_t)L_68, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_69, (int32_t)L_70)), (int32_t)4)), /*hidden argument*/NULL);
			// nativeTexture.Apply();
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_71 = __this->get_nativeTexture_7();
			NullCheck(L_71);
			Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_71, /*hidden argument*/NULL);
			// } else {
			goto IL_0269;
		}

IL_0220:
		{
			// defWidth = width;
			int32_t L_72 = V_3;
			__this->set_defWidth_5(L_72);
			// defHeight = height;
			int32_t L_73 = V_4;
			__this->set_defHeight_6(L_73);
			// nativeTexture.Resize(defWidth, defHeight);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_74 = __this->get_nativeTexture_7();
			int32_t L_75 = __this->get_defWidth_5();
			int32_t L_76 = __this->get_defHeight_6();
			NullCheck(L_74);
			Texture2D_Resize_m9B3D67DF42A47D5C573D084C080CEDA5E330A8D2(L_74, L_75, L_76, /*hidden argument*/NULL);
			// nativeTexture.LoadRawTextureData(data, (int)width * (int)height * 4);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_77 = __this->get_nativeTexture_7();
			intptr_t L_78 = __this->get_data_4();
			int32_t L_79 = V_3;
			int32_t L_80 = V_4;
			NullCheck(L_77);
			Texture2D_LoadRawTextureData_m7F70DFFDBFA1E307A79838B94BC1A0438E063DFC(L_77, (intptr_t)L_78, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_79, (int32_t)L_80)), (int32_t)4)), /*hidden argument*/NULL);
			// nativeTexture.Apply();
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_81 = __this->get_nativeTexture_7();
			NullCheck(L_81);
			Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_81, /*hidden argument*/NULL);
		}

IL_0269:
		{
			// }
			goto IL_028f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_026b;
		throw e;
	}

CATCH_026b:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_6 = ((Exception_t *)__exception_local);
		// Debug.LogError("Exception e = " + e);
		Exception_t * L_82 = V_6;
		String_t* L_83 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralD96D4236D23AAA5699A240BADBE0E97108BBB757, L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_83, /*hidden argument*/NULL);
		// }
		goto IL_028f;
	} // end catch (depth: 1)

IL_0280:
	{
		// if (!IsBlankTexture())
		bool L_84 = VideoSurface_IsBlankTexture_mD2671DAD7F54461E42BCE654EB0528DBF3AE90C3(__this, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_028f;
		}
	}
	{
		// ApplyTexture(null);
		VideoSurface_ApplyTexture_m876F5E184CB3C2EAC8149CE29161F33FADCED129(__this, (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL, /*hidden argument*/NULL);
	}

IL_028f:
	{
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_OnDestroy_mA8253A88D76DDF01E09781508E90E12FE7D7E5AE (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_OnDestroy_mA8253A88D76DDF01E09781508E90E12FE7D7E5AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("VideoSurface OnDestroy");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral61A475E6D484787DBA53F4FB5609CED49853790D, /*hidden argument*/NULL);
		// if (videoRender != null && IRtcEngine.QueryEngine() != null)
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_0 = __this->get_videoRender_9();
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_1 = IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// if (isMultiChannelWant)
		bool L_2 = __this->get_isMultiChannelWant_12();
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// if (mUid == 0)
		uint32_t L_3 = __this->get_mUid_20();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		// videoRender.RemoveUserVideoInfo(mUid);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_4 = __this->get_videoRender_9();
		uint32_t L_5 = __this->get_mUid_20();
		NullCheck(L_4);
		VirtActionInvoker1< uint32_t >::Invoke(10 /* System.Void agora_gaming_rtc.IVideoRender::RemoveUserVideoInfo(System.UInt32) */, L_4, L_5);
		// }
		goto IL_0066;
	}

IL_003c:
	{
		// videoRender.RemoveUserVideoInfo(mChannelId, mUid);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_6 = __this->get_videoRender_9();
		String_t* L_7 = __this->get_mChannelId_21();
		uint32_t L_8 = __this->get_mUid_20();
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, uint32_t >::Invoke(12 /* System.Void agora_gaming_rtc.IVideoRender::RemoveUserVideoInfo(System.String,System.UInt32) */, L_6, L_7, L_8);
		// }
		goto IL_0066;
	}

IL_0055:
	{
		// videoRender.RemoveUserVideoInfo(mUid);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_9 = __this->get_videoRender_9();
		uint32_t L_10 = __this->get_mUid_20();
		NullCheck(L_9);
		VirtActionInvoker1< uint32_t >::Invoke(10 /* System.Void agora_gaming_rtc.IVideoRender::RemoveUserVideoInfo(System.UInt32) */, L_9, L_10);
	}

IL_0066:
	{
		// if (data != IntPtr.Zero)
		intptr_t L_11 = __this->get_data_4();
		bool L_12 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_11, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		// Marshal.FreeHGlobal(data);
		intptr_t L_13 = __this->get_data_4();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_13, /*hidden argument*/NULL);
		// data = IntPtr.Zero;
		__this->set_data_4((intptr_t)(0));
	}

IL_008e:
	{
		// if (nativeTexture != null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_14 = __this->get_nativeTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_14, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00ae;
		}
	}
	{
		// Destroy(nativeTexture);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = __this->get_nativeTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
		// nativeTexture = null;
		__this->set_nativeTexture_7((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL);
	}

IL_00ae:
	{
		// mRenderer = null;
		__this->set_mRenderer_13((Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 *)NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::SetGameFps(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_SetGameFps_mB07E1B0AFC42117157D42B5B7B567AAA5500EA54 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, uint32_t ___fps0, const RuntimeMethod* method)
{
	{
		// videoFps = fps;
		uint32_t L_0 = ___fps0;
		__this->set_videoFps_18(L_0);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::SetForUser(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_SetForUser_mE04B491A37647B25A99D5062210346BBF7693B33 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, uint32_t ___uid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_SetForUser_mE04B491A37647B25A99D5062210346BBF7693B33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IRtcEngine.QueryEngine() != null)
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// mUid = uid;
		uint32_t L_1 = ___uid0;
		__this->set_mUid_20(L_1);
		// IRtcEngine.QueryEngine().GetVideoRender().AddUserVideoInfo(mUid, 0);
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_2 = IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487 * L_3 = IRtcEngine_GetVideoRender_m84F5DB2A0028E89912F19D43B73399D64832DE03_inline(L_2, /*hidden argument*/NULL);
		uint32_t L_4 = __this->get_mUid_20();
		NullCheck(L_3);
		VirtActionInvoker2< uint32_t, uint32_t >::Invoke(9 /* System.Void agora_gaming_rtc.IVideoRender::AddUserVideoInfo(System.UInt32,System.UInt32) */, L_3, L_4, 0);
	}

IL_0024:
	{
		// mUid = uid;
		uint32_t L_5 = ___uid0;
		__this->set_mUid_20(L_5);
		// Debug.Log("Set uid " + uid + " for " + gameObject.name);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2D1E28971821B4847251537B8289EF89BFF05C5F);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2D1E28971821B4847251537B8289EF89BFF05C5F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		uint32_t L_9 = ___uid0;
		uint32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralB5F7B77EF041F1E71600419488BA53F3FE8FC71B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB5F7B77EF041F1E71600419488BA53F3FE8FC71B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::SetForMultiChannelUser(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_SetForMultiChannelUser_m8771DEFA27411CB99CF9A95D94410336D371F5ED (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, String_t* ___channelId0, uint32_t ___uid1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_SetForMultiChannelUser_m8771DEFA27411CB99CF9A95D94410336D371F5ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IRtcEngine.QueryEngine() != null)
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// isMultiChannelWant = true;
		__this->set_isMultiChannelWant_12((bool)1);
		// mUid = uid;
		uint32_t L_1 = ___uid1;
		__this->set_mUid_20(L_1);
		// mChannelId = channelId;
		String_t* L_2 = ___channelId0;
		__this->set_mChannelId_21(L_2);
		// IRtcEngine.QueryEngine().GetVideoRender().AddUserVideoInfo(mChannelId, mUid, 0);
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_3 = IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487 * L_4 = IRtcEngine_GetVideoRender_m84F5DB2A0028E89912F19D43B73399D64832DE03_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_mChannelId_21();
		uint32_t L_6 = __this->get_mUid_20();
		NullCheck(L_4);
		VirtActionInvoker3< String_t*, uint32_t, uint32_t >::Invoke(11 /* System.Void agora_gaming_rtc.IVideoRender::AddUserVideoInfo(System.String,System.UInt32,System.UInt32) */, L_4, L_5, L_6, 0);
		// }
		return;
	}

IL_0039:
	{
		// Debug.LogError("Plear init agora engine first");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralAB9FEB22632D4A310386085BA1326CE470BDB20C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::EnableFilpTextureApply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_EnableFilpTextureApply_m008EA3091B310710DA7C6D064552A871662482D3 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, bool ___enableFlipHorizontal0, bool ___enableFlipVertical1, const RuntimeMethod* method)
{
	{
		// if (_enableFlipHorizontal != enableFlipHorizontal)
		bool L_0 = __this->get__enableFlipHorizontal_16();
		bool L_1 = ___enableFlipHorizontal0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0051;
		}
	}
	{
		// transform.localScale = new Vector3(-transform.localScale.x, transform.localScale.y, transform.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), ((-L_5)), L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_2, L_12, /*hidden argument*/NULL);
		// _enableFlipHorizontal = enableFlipHorizontal;
		bool L_13 = ___enableFlipHorizontal0;
		__this->set__enableFlipHorizontal_16(L_13);
	}

IL_0051:
	{
		// if (_enableFlipVertical != enableFlipVertical)
		bool L_14 = __this->get__enableFlipVertical_17();
		bool L_15 = ___enableFlipVertical1;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00a2;
		}
	}
	{
		// transform.localScale = new Vector3(transform.localScale.x, -transform.localScale.y, transform.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), L_19, ((-L_22)), L_25, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_16, L_26, /*hidden argument*/NULL);
		// _enableFlipVertical = enableFlipVertical;
		bool L_27 = ___enableFlipVertical1;
		__this->set__enableFlipVertical_17(L_27);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::SetVideoSurfaceType(agora_gaming_rtc.AgoraVideoSurfaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_SetVideoSurfaceType_mCBF42073AD865C79A7D9AEA6E42259AEF3340E0A (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, int32_t ___agoraVideoSurfaceType0, const RuntimeMethod* method)
{
	{
		// VideoSurfaceType = agoraVideoSurfaceType;
		int32_t L_0 = ___agoraVideoSurfaceType0;
		__this->set_VideoSurfaceType_19(L_0);
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::SetEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_SetEnable_mD180F1B05BDFF76E1D173D668B9DE4C487C4E102 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// mEnable = enable;
		bool L_0 = ___enable0;
		__this->set_mEnable_22(L_0);
		// }
		return;
	}
}
// agora_gaming_rtc.IRtcEngine agora_gaming_rtc.VideoSurface::GetEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * VideoSurface_GetEngine_m189180578AD3164766DC2EAB7E4908C4B6C226E1 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_GetEngine_m189180578AD3164766DC2EAB7E4908C4B6C226E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * V_0 = NULL;
	{
		// agora_gaming_rtc.IRtcEngine engine = agora_gaming_rtc.IRtcEngine.QueryEngine();
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (!initRenderMode && engine != null)
		bool L_1 = __this->get_initRenderMode_8();
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// videoRender = (VideoRender)engine.GetVideoRender();
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_3 = V_0;
		NullCheck(L_3);
		IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487 * L_4 = IRtcEngine_GetVideoRender_m84F5DB2A0028E89912F19D43B73399D64832DE03_inline(L_3, /*hidden argument*/NULL);
		__this->set_videoRender_9(((VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 *)CastclassSealed((RuntimeObject*)L_4, VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9_il2cpp_TypeInfo_var)));
		// videoRender.SetVideoRenderMode(VIDEO_RENDER_MODE.RENDER_RAWDATA);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_5 = __this->get_videoRender_9();
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, int32_t >::Invoke(4 /* System.Int32 agora_gaming_rtc.IVideoRender::SetVideoRenderMode(agora_gaming_rtc.VIDEO_RENDER_MODE) */, L_5, ((int32_t)100));
		// videoRender.AddUserVideoInfo(mUid, 0);
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_6 = __this->get_videoRender_9();
		uint32_t L_7 = __this->get_mUid_20();
		NullCheck(L_6);
		VirtActionInvoker2< uint32_t, uint32_t >::Invoke(9 /* System.Void agora_gaming_rtc.IVideoRender::AddUserVideoInfo(System.UInt32,System.UInt32) */, L_6, L_7, 0);
		// initRenderMode = true;
		__this->set_initRenderMode_8((bool)1);
	}

IL_0049:
	{
		// return engine;
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_8 = V_0;
		return L_8;
	}
}
// System.Boolean agora_gaming_rtc.VideoSurface::IsBlankTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoSurface_IsBlankTexture_mD2671DAD7F54461E42BCE654EB0528DBF3AE90C3 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_IsBlankTexture_mD2671DAD7F54461E42BCE654EB0528DBF3AE90C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (VideoSurfaceType == AgoraVideoSurfaceType.Renderer)
		int32_t L_0 = __this->get_VideoSurfaceType_19();
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// return (mRenderer.material.mainTexture == null || !(mRenderer.material.mainTexture is Texture2D));
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = __this->get_mRenderer_13();
		NullCheck(L_1);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_3 = Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = __this->get_mRenderer_13();
		NullCheck(L_5);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_7 = Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E(L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((RuntimeObject*)(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)IsInstSealed((RuntimeObject*)L_7, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		return (bool)1;
	}

IL_003e:
	{
		// else if (VideoSurfaceType == AgoraVideoSurfaceType.RawImage)
		int32_t L_8 = __this->get_VideoSurfaceType_19();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// return (mRawImage.texture == null);
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_9 = __this->get_mRawImage_14();
		NullCheck(L_9);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_10 = RawImage_get_texture_m992AF81884D22B9ADC97A800AB931DCB4140954E_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		return L_11;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::ApplyTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_ApplyTexture_m876F5E184CB3C2EAC8149CE29161F33FADCED129 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, const RuntimeMethod* method)
{
	{
		// if (VideoSurfaceType == AgoraVideoSurfaceType.Renderer)
		int32_t L_0 = __this->get_VideoSurfaceType_19();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// mRenderer.material.mainTexture = texture;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = __this->get_mRenderer_13();
		NullCheck(L_1);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_1, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___texture0;
		NullCheck(L_2);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (VideoSurfaceType == AgoraVideoSurfaceType.RawImage)
		int32_t L_4 = __this->get_VideoSurfaceType_19();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		// mRawImage.texture = texture;
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_5 = __this->get_mRawImage_14();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = ___texture0;
		NullCheck(L_5);
		RawImage_set_texture_m63BC52D3B64A3BFD0EC182034FDD51E9A46F99F9(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface_UpdateShader_m75042C254EB66130B8E51161DAF6542623F4E041 (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface_UpdateShader_m75042C254EB66130B8E51161DAF6542623F4E041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_0 = NULL;
	{
		// MeshRenderer mesh = GetComponent<MeshRenderer>();
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		V_0 = L_0;
		// if (mesh != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// mesh.material = new Material(Shader.Find("Unlit/Texture"));
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_3 = V_0;
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_4 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteral1956A1727128710CED91B4BF7F2079B9822F7299, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void agora_gaming_rtc.VideoSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoSurface__ctor_mC5AAFC7B9F3A3B917527709E0463EFEE58787B5C (VideoSurface_t5272748EA672A86E0CADEA5F6A32CA4C523C7CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoSurface__ctor_mC5AAFC7B9F3A3B917527709E0463EFEE58787B5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private System.IntPtr data = Marshal.AllocHGlobal(1920 * 1080 * 4);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_0 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(((int32_t)8294400), /*hidden argument*/NULL);
		__this->set_data_4((intptr_t)L_0);
		// private uint videoFilter = 15; // 15 fix me according to the real video frame rate.
		__this->set_videoFilter_10(((int32_t)15));
		// public uint videoFps = 30;
		__this->set_videoFps_18(((int32_t)30));
		// private string mChannelId = "_0_";
		__this->set_mChannelId_21(_stringLiteralC30BD690DC5FFC7C8CD9DEE71BC38F4DF0DC64E5);
		// private bool mEnable = true;
		__this->set_mEnable_22((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: agora_gaming_rtc.WatermarkOptions
IL2CPP_EXTERN_C void WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshal_pinvoke(const WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9& unmarshaled, WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_pinvoke& marshaled)
{
	marshaled.___visibleInPreview_0 = static_cast<int32_t>(unmarshaled.get_visibleInPreview_0());
	marshaled.___positionInLandscapeMode_1 = unmarshaled.get_positionInLandscapeMode_1();
	marshaled.___positionInPortraitMode_2 = unmarshaled.get_positionInPortraitMode_2();
}
IL2CPP_EXTERN_C void WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshal_pinvoke_back(const WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_pinvoke& marshaled, WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9& unmarshaled)
{
	bool unmarshaled_visibleInPreview_temp_0 = false;
	unmarshaled_visibleInPreview_temp_0 = static_cast<bool>(marshaled.___visibleInPreview_0);
	unmarshaled.set_visibleInPreview_0(unmarshaled_visibleInPreview_temp_0);
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  unmarshaled_positionInLandscapeMode_temp_1;
	memset((&unmarshaled_positionInLandscapeMode_temp_1), 0, sizeof(unmarshaled_positionInLandscapeMode_temp_1));
	unmarshaled_positionInLandscapeMode_temp_1 = marshaled.___positionInLandscapeMode_1;
	unmarshaled.set_positionInLandscapeMode_1(unmarshaled_positionInLandscapeMode_temp_1);
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  unmarshaled_positionInPortraitMode_temp_2;
	memset((&unmarshaled_positionInPortraitMode_temp_2), 0, sizeof(unmarshaled_positionInPortraitMode_temp_2));
	unmarshaled_positionInPortraitMode_temp_2 = marshaled.___positionInPortraitMode_2;
	unmarshaled.set_positionInPortraitMode_2(unmarshaled_positionInPortraitMode_temp_2);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.WatermarkOptions
IL2CPP_EXTERN_C void WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshal_pinvoke_cleanup(WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: agora_gaming_rtc.WatermarkOptions
IL2CPP_EXTERN_C void WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshal_com(const WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9& unmarshaled, WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_com& marshaled)
{
	marshaled.___visibleInPreview_0 = static_cast<int32_t>(unmarshaled.get_visibleInPreview_0());
	marshaled.___positionInLandscapeMode_1 = unmarshaled.get_positionInLandscapeMode_1();
	marshaled.___positionInPortraitMode_2 = unmarshaled.get_positionInPortraitMode_2();
}
IL2CPP_EXTERN_C void WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshal_com_back(const WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_com& marshaled, WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9& unmarshaled)
{
	bool unmarshaled_visibleInPreview_temp_0 = false;
	unmarshaled_visibleInPreview_temp_0 = static_cast<bool>(marshaled.___visibleInPreview_0);
	unmarshaled.set_visibleInPreview_0(unmarshaled_visibleInPreview_temp_0);
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  unmarshaled_positionInLandscapeMode_temp_1;
	memset((&unmarshaled_positionInLandscapeMode_temp_1), 0, sizeof(unmarshaled_positionInLandscapeMode_temp_1));
	unmarshaled_positionInLandscapeMode_temp_1 = marshaled.___positionInLandscapeMode_1;
	unmarshaled.set_positionInLandscapeMode_1(unmarshaled_positionInLandscapeMode_temp_1);
	Rectangle_t0408113939463A09E85160D861E98923467A0B41  unmarshaled_positionInPortraitMode_temp_2;
	memset((&unmarshaled_positionInPortraitMode_temp_2), 0, sizeof(unmarshaled_positionInPortraitMode_temp_2));
	unmarshaled_positionInPortraitMode_temp_2 = marshaled.___positionInPortraitMode_2;
	unmarshaled.set_positionInPortraitMode_2(unmarshaled_positionInPortraitMode_temp_2);
}
// Conversion method for clean up from marshalling of: agora_gaming_rtc.WatermarkOptions
IL2CPP_EXTERN_C void WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshal_com_cleanup(WatermarkOptions_tD0C6081287610FD307B282F013EA668095CEE3E9_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RtcEngineConfig_get_appId_mD39071DBD8F02A01A313CCE153B2802E9149132B_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, const RuntimeMethod* method)
{
	{
		// get;
		String_t* L_0 = __this->get_U3CappIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RtcEngineConfig_set_appId_m5C7C5E5D91884B59F62C3C7283222332F89A4799_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set;
		String_t* L_0 = ___value0;
		__this->set_U3CappIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t RtcEngineConfig_get_areaCode_m825F00436435DBBD8DA1E1A88B998433B45740CF_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, const RuntimeMethod* method)
{
	{
		// get;
		uint32_t L_0 = __this->get_U3CareaCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RtcEngineConfig_set_areaCode_m73BBFC5B194F90A14C206835B38E21E73185AB21_inline (RtcEngineConfig_tC751AB19D8511B5B5B3E18DEC578EB9BF601948D * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		// set;
		uint32_t L_0 = ___value0;
		__this->set_U3CareaCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngine_QueryEngine_m40D21624489F6F0AD5A22D4E4EECFE950B7CF287AssemblyU2DCSharp3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var);
		IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * L_0 = ((IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6_il2cpp_TypeInfo_var))->get_instance_84();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IVideoRender_t85F6B306F08F06FF27C848C99B0639E2C6DF3487 * IRtcEngine_GetVideoRender_m84F5DB2A0028E89912F19D43B73399D64832DE03_inline (IRtcEngine_tE6C61D787F077D2581B0F81AFF3672E04FE94FF6 * __this, const RuntimeMethod* method)
{
	{
		// return videoRender;
		VideoRender_t5559720AA16B17180C40FF98FD348BAE6501AEE9 * L_0 = __this->get_videoRender_81();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * RawImage_get_texture_m992AF81884D22B9ADC97A800AB931DCB4140954E_inline (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, const RuntimeMethod* method)
{
	{
		// return m_Texture;
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_0 = __this->get_m_Texture_35();
		return L_0;
	}
}
