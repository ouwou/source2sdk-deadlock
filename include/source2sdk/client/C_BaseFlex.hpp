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
    // Size: 0xcf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb60[0x10]; // 0xb60
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xb70        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb94[0xc]; // 0xb94
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xba1[0x5f]; // 0xba1
        int32_t m_nLastFlexUpdateFrameCount; // 0xc00        
        Vector m_CachedViewTarget; // 0xc04        
        client::SceneEventId_t m_nNextSceneEventId; // 0xc10        
        int32_t m_iBlink; // 0xc14        
        float m_blinktime; // 0xc18        
        bool m_prevblinktoggle; // 0xc1c        
        [[maybe_unused]] std::uint8_t pad_0xc1d[0x3]; // 0xc1d
        int32_t m_iJawOpen; // 0xc20        
        float m_flJawOpenAmount; // 0xc24        
        float m_flBlinkAmount; // 0xc28        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xc2c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xc2d        
        bool m_bResetFlexWeightsOnModelChange; // 0xc2e        
        [[maybe_unused]] std::uint8_t pad_0xc2f[0x19]; // 0xc2f
        int32_t m_nEyeOcclusionRendererBone; // 0xc48        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xc4c        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc88[0x10]; // 0xc88
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc98        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xcf8);
};
