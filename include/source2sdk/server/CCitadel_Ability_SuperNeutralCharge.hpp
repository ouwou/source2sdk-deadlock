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
    // Size: 0xd10
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
        [[maybe_unused]] std::uint8_t pad_0xb00[0x1c0]; // 0xb00
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xcc0        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xcc1        
        [[maybe_unused]] std::uint8_t pad_0xcc2[0x2]; // 0xcc2
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xcc4        
        // metadata: MNetworkEnable
        float m_flTackleDuration; // 0xcc8        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xccc        
        Vector m_vecLastPosition; // 0xcd8        
        int32_t m_nStuckFramesCount; // 0xce4        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xce8        
        entity2::GameTime_t m_flPrepareStartTime; // 0xd00        
        client::ParticleIndex_t m_nDistancePreview; // 0xd04        
        [[maybe_unused]] std::uint8_t pad_0xd08[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SuperNeutralCharge) == 0xd10);
};
