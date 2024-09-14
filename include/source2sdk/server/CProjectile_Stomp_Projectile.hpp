#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x950
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "GameTime_t m_tDieTime"
    #pragma pack(push, 1)
    class CProjectile_Stomp_Projectile : public server::CCitadelProjectile
    {
    public:
        Vector m_vLastStompPos; // 0x820        
        bool m_bFinished; // 0x82c        
        [[maybe_unused]] std::uint8_t pad_0x82d[0x3]; // 0x82d
        // metadata: MNetworkEnable
        float m_flWidth; // 0x830        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDieTime; // 0x834        
        [[maybe_unused]] std::uint8_t pad_0x838[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CProjectile_Stomp_Projectile because it is not a standard-layout class
    static_assert(sizeof(CProjectile_Stomp_Projectile) == 0x950);
};
