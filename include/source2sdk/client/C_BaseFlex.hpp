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
    // Size: 0xce0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb48[0x10]; // 0xb48
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xb58        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb70        
        [[maybe_unused]] std::uint8_t pad_0xb7c[0xc]; // 0xb7c
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb89[0x5f]; // 0xb89
        int32_t m_nLastFlexUpdateFrameCount; // 0xbe8        
        Vector m_CachedViewTarget; // 0xbec        
        client::SceneEventId_t m_nNextSceneEventId; // 0xbf8        
        int32_t m_iBlink; // 0xbfc        
        float m_blinktime; // 0xc00        
        bool m_prevblinktoggle; // 0xc04        
        [[maybe_unused]] std::uint8_t pad_0xc05[0x3]; // 0xc05
        int32_t m_iJawOpen; // 0xc08        
        float m_flJawOpenAmount; // 0xc0c        
        float m_flBlinkAmount; // 0xc10        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xc14        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xc15        
        bool m_bResetFlexWeightsOnModelChange; // 0xc16        
        [[maybe_unused]] std::uint8_t pad_0xc17[0x19]; // 0xc17
        int32_t m_nEyeOcclusionRendererBone; // 0xc30        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xc34        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc64        
        [[maybe_unused]] std::uint8_t pad_0xc70[0x10]; // 0xc70
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xce0);
};
