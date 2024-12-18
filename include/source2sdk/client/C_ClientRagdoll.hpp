#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xb90
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xaf8        
        bool m_bImportant; // 0xaf9        
        [[maybe_unused]] std::uint8_t pad_0xafa[0x2]; // 0xafa
        entity2::GameTime_t m_flEffectTime; // 0xafc        
        entity2::GameTime_t m_gibDespawnTime; // 0xb00        
        int32_t m_iCurrentFriction; // 0xb04        
        int32_t m_iMinFriction; // 0xb08        
        int32_t m_iMaxFriction; // 0xb0c        
        int32_t m_iFrictionAnimState; // 0xb10        
        bool m_bReleaseRagdoll; // 0xb14        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb15        
        bool m_bFadingOut; // 0xb16        
        [[maybe_unused]] std::uint8_t pad_0xb17[0x1]; // 0xb17
        float m_flScaleEnd[10]; // 0xb18        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb40        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xb68        
        
        // Datamap fields:
        // Color m_clrRender; // 0x608
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xb90);
};
