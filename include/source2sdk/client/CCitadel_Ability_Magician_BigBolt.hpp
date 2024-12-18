#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xea8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_BigBolt : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x200]; // 0xc98
        entity2::GameTime_t m_flNextShootTime; // 0xe98        
        int32_t m_iBoltsFired; // 0xe9c        
        int32_t m_iRemainingBolts; // 0xea0        
        bool m_bPreppingShoot; // 0xea4        
        [[maybe_unused]] std::uint8_t pad_0xea5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_BigBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_BigBolt) == 0xea8);
};
