#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex__Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x10]; // 0xb00
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xb10        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb34[0xc]; // 0xb34
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb41[0x5f]; // 0xb41
        int32_t m_nLastFlexUpdateFrameCount; // 0xba0        
        Vector m_CachedViewTarget; // 0xba4        
        client::SceneEventId_t m_nNextSceneEventId; // 0xbb0        
        int32_t m_iBlink; // 0xbb4        
        float m_blinktime; // 0xbb8        
        bool m_prevblinktoggle; // 0xbbc        
        [[maybe_unused]] std::uint8_t pad_0xbbd[0x3]; // 0xbbd
        int32_t m_iJawOpen; // 0xbc0        
        float m_flJawOpenAmount; // 0xbc4        
        float m_flBlinkAmount; // 0xbc8        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xbcc        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xbcd        
        bool m_bResetFlexWeightsOnModelChange; // 0xbce        
        [[maybe_unused]] std::uint8_t pad_0xbcf[0x19]; // 0xbcf
        int32_t m_nEyeOcclusionRendererBone; // 0xbe8        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xbec        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc1c        
        [[maybe_unused]] std::uint8_t pad_0xc28[0x10]; // 0xc28
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xc98);
};
