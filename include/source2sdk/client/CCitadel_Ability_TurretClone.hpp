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
    // Size: 0xd98
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0xe0]; // 0xc98
        entity2::GameTime_t m_flTurretExpireTime; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd7c[0x2]; // 0xd7c
        bool m_bTeleported; // 0xd7e        
        bool m_bHasTurretReady; // 0xd7f        
        Vector m_vecTurretPosition; // 0xd80        
        client::ParticleIndex_t m_nFXIndex; // 0xd8c        
        [[maybe_unused]] std::uint8_t pad_0xd90[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xd98);
};
