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
    // Size: 0xce8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb50[0x10]; // 0xb50
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0xb60        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb84[0xc]; // 0xb84
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb91[0x5f]; // 0xb91
        int32_t m_nLastFlexUpdateFrameCount; // 0xbf0        
        Vector m_CachedViewTarget; // 0xbf4        
        client::SceneEventId_t m_nNextSceneEventId; // 0xc00        
        int32_t m_iBlink; // 0xc04        
        float m_blinktime; // 0xc08        
        bool m_prevblinktoggle; // 0xc0c        
        [[maybe_unused]] std::uint8_t pad_0xc0d[0x3]; // 0xc0d
        int32_t m_iJawOpen; // 0xc10        
        float m_flJawOpenAmount; // 0xc14        
        float m_flBlinkAmount; // 0xc18        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0xc1c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xc1d        
        bool m_bResetFlexWeightsOnModelChange; // 0xc1e        
        [[maybe_unused]] std::uint8_t pad_0xc1f[0x19]; // 0xc1f
        int32_t m_nEyeOcclusionRendererBone; // 0xc38        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xc3c        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc78[0x10]; // 0xc78
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc88        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0xce8);
};
