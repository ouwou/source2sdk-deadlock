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
    // Size: 0xbe8
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xb50        
        bool m_bImportant; // 0xb51        
        [[maybe_unused]] std::uint8_t pad_0xb52[0x2]; // 0xb52
        entity2::GameTime_t m_flEffectTime; // 0xb54        
        entity2::GameTime_t m_gibDespawnTime; // 0xb58        
        int32_t m_iCurrentFriction; // 0xb5c        
        int32_t m_iMinFriction; // 0xb60        
        int32_t m_iMaxFriction; // 0xb64        
        int32_t m_iFrictionAnimState; // 0xb68        
        bool m_bReleaseRagdoll; // 0xb6c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb6d        
        bool m_bFadingOut; // 0xb6e        
        [[maybe_unused]] std::uint8_t pad_0xb6f[0x1]; // 0xb6f
        float m_flScaleEnd[10]; // 0xb70        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb98        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xbc0        
        
        // Datamap fields:
        // Color m_clrRender; // 0x5f8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xbe8);
};
