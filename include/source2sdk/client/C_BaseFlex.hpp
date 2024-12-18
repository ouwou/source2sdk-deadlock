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
    // Size: 0xc90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x10]; // 0xaf8
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xb08        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb2c[0xc]; // 0xb2c
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb39[0x5f]; // 0xb39
        int32_t m_nLastFlexUpdateFrameCount; // 0xb98        
        Vector m_CachedViewTarget; // 0xb9c        
        client::SceneEventId_t m_nNextSceneEventId; // 0xba8        
        int32_t m_iBlink; // 0xbac        
        float m_blinktime; // 0xbb0        
        bool m_prevblinktoggle; // 0xbb4        
        [[maybe_unused]] std::uint8_t pad_0xbb5[0x3]; // 0xbb5
        int32_t m_iJawOpen; // 0xbb8        
        float m_flJawOpenAmount; // 0xbbc        
        float m_flBlinkAmount; // 0xbc0        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xbc4        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xbc5        
        bool m_bResetFlexWeightsOnModelChange; // 0xbc6        
        [[maybe_unused]] std::uint8_t pad_0xbc7[0x19]; // 0xbc7
        int32_t m_nEyeOcclusionRendererBone; // 0xbe0        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xbe4        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc14        
        [[maybe_unused]] std::uint8_t pad_0xc20[0x10]; // 0xc20
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc30        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xc90);
};
