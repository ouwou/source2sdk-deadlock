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
    // Size: 0xc38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x118]; // 0xaf8
        entity2::GameTime_t m_flTurretExpireTime; // 0xc10        
        [[maybe_unused]] std::uint8_t pad_0xc14[0x4]; // 0xc14
        bool m_bTeleported; // 0xc18        
        bool m_bHasTurretReady; // 0xc19        
        [[maybe_unused]] std::uint8_t pad_0xc1a[0x2]; // 0xc1a
        int32_t m_iCurrentSwapCount; // 0xc1c        
        Vector m_vecTurretPosition; // 0xc20        
        client::ParticleIndex_t m_nFXIndex; // 0xc2c        
        [[maybe_unused]] std::uint8_t pad_0xc30[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xc38);
};
