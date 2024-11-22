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
    // Size: 0xde0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x118]; // 0xca0
        entity2::GameTime_t m_flTurretExpireTime; // 0xdb8        
        [[maybe_unused]] std::uint8_t pad_0xdbc[0x4]; // 0xdbc
        bool m_bTeleported; // 0xdc0        
        bool m_bHasTurretReady; // 0xdc1        
        [[maybe_unused]] std::uint8_t pad_0xdc2[0x2]; // 0xdc2
        int32_t m_iCurrentSwapCount; // 0xdc4        
        Vector m_vecTurretPosition; // 0xdc8        
        client::ParticleIndex_t m_nFXIndex; // 0xdd4        
        [[maybe_unused]] std::uint8_t pad_0xdd8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xde0);
};
