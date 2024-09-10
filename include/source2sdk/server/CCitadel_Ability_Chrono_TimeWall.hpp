#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CCitadelBulletTimeWarp;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    #pragma pack(push, 1)
    class CCitadel_Ability_Chrono_TimeWall : public server::CCitadelBaseAbility
    {
    public:
        // m_hWall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBulletTimeWarp> m_hWall;
        char m_hWall[0x4]; // 0xad8        
        Vector vecDir; // 0xadc        
        client::ParticleIndex_t m_hChargingParticle; // 0xae8        
        Vector m_vSpawnPos; // 0xaec        
        QAngle m_qAngles; // 0xaf8        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb05[0x18b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_TimeWall because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Chrono_TimeWall) == 0xc90);
};