#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x238
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_SleepBomb : public server::CCitadelModifier
    {
    public:
        float m_flGoalHeight; // 0xc8        
        float m_flFallRate; // 0xcc        
        client::ParticleIndex_t m_nBombEffect; // 0xd0        
        // m_eIgnoreTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_eIgnoreTarget;
        char m_eIgnoreTarget[0x4]; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x150]; // 0xd8
        Vector m_vecOrigin; // 0x228        
        [[maybe_unused]] std::uint8_t pad_0x234[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_SleepBomb because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_SleepBomb) == 0x238);
};
