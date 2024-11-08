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
    // Size: 0xca0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb08[0x10]; // 0xb08
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb30        
        [[maybe_unused]] std::uint8_t pad_0xb3c[0xc]; // 0xb3c
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb49[0x5f]; // 0xb49
        int32_t m_nLastFlexUpdateFrameCount; // 0xba8        
        Vector m_CachedViewTarget; // 0xbac        
        client::SceneEventId_t m_nNextSceneEventId; // 0xbb8        
        int32_t m_iBlink; // 0xbbc        
        float m_blinktime; // 0xbc0        
        bool m_prevblinktoggle; // 0xbc4        
        [[maybe_unused]] std::uint8_t pad_0xbc5[0x3]; // 0xbc5
        int32_t m_iJawOpen; // 0xbc8        
        float m_flJawOpenAmount; // 0xbcc        
        float m_flBlinkAmount; // 0xbd0        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xbd4        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xbd5        
        bool m_bResetFlexWeightsOnModelChange; // 0xbd6        
        [[maybe_unused]] std::uint8_t pad_0xbd7[0x19]; // 0xbd7
        int32_t m_nEyeOcclusionRendererBone; // 0xbf0        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xbf4        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc24        
        [[maybe_unused]] std::uint8_t pad_0xc30[0x10]; // 0xc30
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xca0);
};
