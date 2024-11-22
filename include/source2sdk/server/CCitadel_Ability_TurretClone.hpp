#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xc40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x118]; // 0xb00
        entity2::GameTime_t m_flTurretExpireTime; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc1c[0x4]; // 0xc1c
        bool m_bTeleported; // 0xc20        
        bool m_bHasTurretReady; // 0xc21        
        [[maybe_unused]] std::uint8_t pad_0xc22[0x2]; // 0xc22
        int32_t m_iCurrentSwapCount; // 0xc24        
        Vector m_vecTurretPosition; // 0xc28        
        client::ParticleIndex_t m_nFXIndex; // 0xc34        
        [[maybe_unused]] std::uint8_t pad_0xc38[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xc40);
};
