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
    // Size: 0xbf8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0xe0]; // 0xaf8
        entity2::GameTime_t m_flTurretExpireTime; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbdc[0x2]; // 0xbdc
        bool m_bTeleported; // 0xbde        
        bool m_bHasTurretReady; // 0xbdf        
        Vector m_vecTurretPosition; // 0xbe0        
        client::ParticleIndex_t m_nFXIndex; // 0xbec        
        [[maybe_unused]] std::uint8_t pad_0xbf0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xbf8);
};