#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xe28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    #pragma pack(push, 1)
    class CCitadel_Ability_Chrono_TimeWall : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_hChargingParticle; // 0xc80        
        Vector m_vSpawnPos; // 0xc84        
        QAngle m_qAngles; // 0xc90        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x18b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_TimeWall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Chrono_TimeWall) == 0xe28);
};
