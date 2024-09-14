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
    // Size: 0x988
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
        float m_flBulletTimeScale; // 0x768        
        // metadata: MNetworkEnable
        float m_flProjectileTimeScale; // 0x76c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flExpireTime; // 0x770        
        // metadata: MNetworkEnable
        float m_flStopDuration; // 0x774        
        [[maybe_unused]] std::uint8_t pad_0x778[0x210];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBulletTimeWarp because it is not a standard-layout class
    static_assert(sizeof(CCitadelBulletTimeWarp) == 0x988);
};
