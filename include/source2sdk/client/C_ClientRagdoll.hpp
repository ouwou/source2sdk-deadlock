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
    // Size: 0xbf8
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xb60        
        bool m_bImportant; // 0xb61        
        [[maybe_unused]] std::uint8_t pad_0xb62[0x2]; // 0xb62
        entity2::GameTime_t m_flEffectTime; // 0xb64        
        entity2::GameTime_t m_gibDespawnTime; // 0xb68        
        int32_t m_iCurrentFriction; // 0xb6c        
        int32_t m_iMinFriction; // 0xb70        
        int32_t m_iMaxFriction; // 0xb74        
        int32_t m_iFrictionAnimState; // 0xb78        
        bool m_bReleaseRagdoll; // 0xb7c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb7d        
        bool m_bFadingOut; // 0xb7e        
        [[maybe_unused]] std::uint8_t pad_0xb7f[0x1]; // 0xb7f
        float m_flScaleEnd[10]; // 0xb80        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xba8        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xbd0        
        
        // Datamap fields:
        // Color m_clrRender; // 0x608
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xbf8);
};
