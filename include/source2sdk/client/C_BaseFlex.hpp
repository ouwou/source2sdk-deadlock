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
    // Size: 0xc80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x10]; // 0xae8
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb1c[0xc]; // 0xb1c
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb29[0x5f]; // 0xb29
        int32_t m_nLastFlexUpdateFrameCount; // 0xb88        
        Vector m_CachedViewTarget; // 0xb8c        
        client::SceneEventId_t m_nNextSceneEventId; // 0xb98        
        int32_t m_iBlink; // 0xb9c        
        float m_blinktime; // 0xba0        
        bool m_prevblinktoggle; // 0xba4        
        [[maybe_unused]] std::uint8_t pad_0xba5[0x3]; // 0xba5
        int32_t m_iJawOpen; // 0xba8        
        float m_flJawOpenAmount; // 0xbac        
        float m_flBlinkAmount; // 0xbb0        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xbb4        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xbb5        
        bool m_bResetFlexWeightsOnModelChange; // 0xbb6        
        [[maybe_unused]] std::uint8_t pad_0xbb7[0x19]; // 0xbb7
        int32_t m_nEyeOcclusionRendererBone; // 0xbd0        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xbd4        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc04        
        [[maybe_unused]] std::uint8_t pad_0xc10[0x10]; // 0xc10
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc20        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xc80);
};
