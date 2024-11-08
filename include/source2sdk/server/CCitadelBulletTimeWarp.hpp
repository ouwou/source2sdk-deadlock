#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x9e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flBulletTimeScale"
    // static metadata: MNetworkVarNames "float m_flProjectileTimeScale"
    // static metadata: MNetworkVarNames "GameTime_t m_flExpireTime"
    // static metadata: MNetworkVarNames "float m_flStopDuration"
    #pragma pack(push, 1)
    class CCitadelBulletTimeWarp : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flBulletTimeScale; // 0x7c0        
        // metadata: MNetworkEnable
        float m_flProjectileTimeScale; // 0x7c4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flExpireTime; // 0x7c8        
        // metadata: MNetworkEnable
        float m_flStopDuration; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7d0[0x210];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBulletTimeWarp because it is not a standard-layout class
    static_assert(sizeof(CCitadelBulletTimeWarp) == 0x9e0);
};
