#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xda0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0xe0]; // 0xca0
        entity2::GameTime_t m_flTurretExpireTime; // 0xd80        
        [[maybe_unused]] std::uint8_t pad_0xd84[0x2]; // 0xd84
        bool m_bTeleported; // 0xd86        
        bool m_bHasTurretReady; // 0xd87        
        Vector m_vecTurretPosition; // 0xd88        
        client::ParticleIndex_t m_nFXIndex; // 0xd94        
        [[maybe_unused]] std::uint8_t pad_0xd98[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xda0);
};
