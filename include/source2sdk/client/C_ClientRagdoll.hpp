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
    // Size: 0xbd8
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xb40        
        bool m_bImportant; // 0xb41        
        [[maybe_unused]] std::uint8_t pad_0xb42[0x2]; // 0xb42
        entity2::GameTime_t m_flEffectTime; // 0xb44        
        entity2::GameTime_t m_gibDespawnTime; // 0xb48        
        int32_t m_iCurrentFriction; // 0xb4c        
        int32_t m_iMinFriction; // 0xb50        
        int32_t m_iMaxFriction; // 0xb54        
        int32_t m_iFrictionAnimState; // 0xb58        
        bool m_bReleaseRagdoll; // 0xb5c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb5d        
        bool m_bFadingOut; // 0xb5e        
        [[maybe_unused]] std::uint8_t pad_0xb5f[0x1]; // 0xb5f
        float m_flScaleEnd[10]; // 0xb60        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb88        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xbb0        
        
        // Datamap fields:
        // Color m_clrRender; // 0x5f8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    
    static_assert(sizeof(C_ClientRagdoll) == 0xbd8);
};
