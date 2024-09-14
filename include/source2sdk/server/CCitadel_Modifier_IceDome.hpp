#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadel_Ice_Dome_Blocker;
};

namespace source2sdk::server
{
    class CPointModifierThinker;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x288
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_IceDome : public server::CCitadelModifier
    {
    public:
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_Ice_Dome_Blocker> m_hBlocker;
        char m_hBlocker[0x4]; // 0xc0        
        // m_hFriendlyAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointModifierThinker> m_hFriendlyAura;
        char m_hFriendlyAura[0x4]; // 0xc4        
        // m_hEnemyAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointModifierThinker> m_hEnemyAura;
        char m_hEnemyAura[0x4]; // 0xc8        
        client::ParticleIndex_t m_nParticleIndex; // 0xcc        
        entity2::GameTime_t m_flStartTime; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0xe4]; // 0xd4
        Vector m_vOrigin; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0xc4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_IceDome because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_IceDome) == 0x288);
};
