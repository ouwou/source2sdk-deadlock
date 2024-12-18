#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PsychicLift : public server::CCitadelBaseAbility
    {
    public:
        int32_t m_nChainsOnHitRemaining; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4]; // 0xafc
        // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitTargets;
        char m_vecHitTargets[0x18]; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PsychicLift because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PsychicLift) == 0xb88);
};
