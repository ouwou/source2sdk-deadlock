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
    // Size: 0xce8
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
        [[maybe_unused]] std::uint8_t pad_0xad8[0x1c0]; // 0xad8
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xc98        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xc99        
        [[maybe_unused]] std::uint8_t pad_0xc9a[0x2]; // 0xc9a
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xc9c        
        // metadata: MNetworkEnable
        float m_flTackleDuration; // 0xca0        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xca4        
        Vector m_vecLastPosition; // 0xcb0        
        int32_t m_nStuckFramesCount; // 0xcbc        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xcc0        
        entity2::GameTime_t m_flPrepareStartTime; // 0xcd8        
        client::ParticleIndex_t m_nDistancePreview; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_SuperNeutralCharge) == 0xce8);
};
