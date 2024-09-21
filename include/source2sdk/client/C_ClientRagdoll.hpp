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
    // Size: 0xbe0
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xb48        
        bool m_bImportant; // 0xb49        
        [[maybe_unused]] std::uint8_t pad_0xb4a[0x2]; // 0xb4a
        entity2::GameTime_t m_flEffectTime; // 0xb4c        
        entity2::GameTime_t m_gibDespawnTime; // 0xb50        
        int32_t m_iCurrentFriction; // 0xb54        
        int32_t m_iMinFriction; // 0xb58        
        int32_t m_iMaxFriction; // 0xb5c        
        int32_t m_iFrictionAnimState; // 0xb60        
        bool m_bReleaseRagdoll; // 0xb64        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb65        
        bool m_bFadingOut; // 0xb66        
        [[maybe_unused]] std::uint8_t pad_0xb67[0x1]; // 0xb67
        float m_flScaleEnd[10]; // 0xb68        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb90        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xbb8        
        
        // Datamap fields:
        // Color m_clrRender; // 0x5f8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xbe0);
};
