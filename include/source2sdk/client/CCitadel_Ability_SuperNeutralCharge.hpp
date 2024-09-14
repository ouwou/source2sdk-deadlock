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
    // Size: 0xe80
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
        [[maybe_unused]] std::uint8_t pad_0xc70[0x1c0]; // 0xc70
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xe30        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xe31        
        [[maybe_unused]] std::uint8_t pad_0xe32[0x2]; // 0xe32
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xe34        
        // metadata: MNetworkEnable
        float m_flTackleDuration; // 0xe38        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xe3c        
        Vector m_vecLastPosition; // 0xe48        
        int32_t m_nStuckFramesCount; // 0xe54        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xe58        
        entity2::GameTime_t m_flPrepareStartTime; // 0xe70        
        client::ParticleIndex_t m_nDistancePreview; // 0xe74        
        [[maybe_unused]] std::uint8_t pad_0xe78[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SuperNeutralCharge) == 0xe80);
};
