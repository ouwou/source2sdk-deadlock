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
    // Size: 0xb80
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xae8        
        bool m_bImportant; // 0xae9        
        [[maybe_unused]] std::uint8_t pad_0xaea[0x2]; // 0xaea
        entity2::GameTime_t m_flEffectTime; // 0xaec        
        entity2::GameTime_t m_gibDespawnTime; // 0xaf0        
        int32_t m_iCurrentFriction; // 0xaf4        
        int32_t m_iMinFriction; // 0xaf8        
        int32_t m_iMaxFriction; // 0xafc        
        int32_t m_iFrictionAnimState; // 0xb00        
        bool m_bReleaseRagdoll; // 0xb04        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb05        
        bool m_bFadingOut; // 0xb06        
        [[maybe_unused]] std::uint8_t pad_0xb07[0x1]; // 0xb07
        float m_flScaleEnd[10]; // 0xb08        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb30        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xb58        
        
        // Datamap fields:
        // Color m_clrRender; // 0x608
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xb80);
};
