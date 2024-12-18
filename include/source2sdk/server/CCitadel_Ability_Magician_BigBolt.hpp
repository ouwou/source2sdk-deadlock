#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_BigBolt : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x200]; // 0xaf8
        entity2::GameTime_t m_flNextShootTime; // 0xcf8        
        int32_t m_iBoltsFired; // 0xcfc        
        int32_t m_iRemainingBolts; // 0xd00        
        bool m_bPreppingShoot; // 0xd04        
        [[maybe_unused]] std::uint8_t pad_0xd05[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_BigBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_BigBolt) == 0xd08);
};