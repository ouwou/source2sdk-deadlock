#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelControlPointTrigger;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ControlPointCapturerAura : public server::CCitadelModifierAura
    {
    public:
        client::ParticleIndex_t m_particle; // 0xe8        
        // m_hCP has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelControlPointTrigger> m_hCP;
        char m_hCP[0x4]; // 0xec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ControlPointCapturerAura because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ControlPointCapturerAura) == 0xf0);
};