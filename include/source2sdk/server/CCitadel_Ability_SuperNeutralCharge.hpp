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
    // Size: 0xd08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bPreparing"
    // static metadata: MNetworkVarNames "bool m_bTackling"
    // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
    // static metadata: MNetworkVarNames "float m_flTackleDuration"
    // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
    #pragma pack(push, 1)
    class CCitadel_Ability_SuperNeutralCharge : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x1c0]; // 0xaf8
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xcb8        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xcb9        
        [[maybe_unused]] std::uint8_t pad_0xcba[0x2]; // 0xcba
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xcbc        
        // metadata: MNetworkEnable
        float m_flTackleDuration; // 0xcc0        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xcc4        
        Vector m_vecLastPosition; // 0xcd0        
        int32_t m_nStuckFramesCount; // 0xcdc        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xce0        
        entity2::GameTime_t m_flPrepareStartTime; // 0xcf8        
        client::ParticleIndex_t m_nDistancePreview; // 0xcfc        
        [[maybe_unused]] std::uint8_t pad_0xd00[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SuperNeutralCharge) == 0xd08);
};
