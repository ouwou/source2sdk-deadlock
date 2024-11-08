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
    // Size: 0xeb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bPreparing"
    // static metadata: MNetworkVarNames "bool m_bTackling"
    // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
    // static metadata: MNetworkVarNames "float m_flTackleDuration"
    // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
    #pragma pack(push, 1)
    class CCitadel_Ability_SuperNeutralCharge : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x1c0]; // 0xca0
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xe60        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xe61        
        [[maybe_unused]] std::uint8_t pad_0xe62[0x2]; // 0xe62
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xe64        
        // metadata: MNetworkEnable
        float m_flTackleDuration; // 0xe68        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xe6c        
        Vector m_vecLastPosition; // 0xe78        
        int32_t m_nStuckFramesCount; // 0xe84        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xe88        
        entity2::GameTime_t m_flPrepareStartTime; // 0xea0        
        client::ParticleIndex_t m_nDistancePreview; // 0xea4        
        [[maybe_unused]] std::uint8_t pad_0xea8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SuperNeutralCharge) == 0xeb0);
};
