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
    // Size: 0xba0
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xb08        
        bool m_bImportant; // 0xb09        
        [[maybe_unused]] std::uint8_t pad_0xb0a[0x2]; // 0xb0a
        entity2::GameTime_t m_flEffectTime; // 0xb0c        
        entity2::GameTime_t m_gibDespawnTime; // 0xb10        
        int32_t m_iCurrentFriction; // 0xb14        
        int32_t m_iMinFriction; // 0xb18        
        int32_t m_iMaxFriction; // 0xb1c        
        int32_t m_iFrictionAnimState; // 0xb20        
        bool m_bReleaseRagdoll; // 0xb24        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb25        
        bool m_bFadingOut; // 0xb26        
        [[maybe_unused]] std::uint8_t pad_0xb27[0x1]; // 0xb27
        float m_flScaleEnd[10]; // 0xb28        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb50        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xb78        
        
        // Datamap fields:
        // Color m_clrRender; // 0x610
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xba0);
};
