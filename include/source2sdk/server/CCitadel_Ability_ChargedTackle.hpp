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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bPreparing"
    // static metadata: MNetworkVarNames "bool m_bTackling"
    // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flPrepareStartTime"
    // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
    #pragma pack(push, 1)
    class CCitadel_Ability_ChargedTackle : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x1f8]; // 0xaf8
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xcf0        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xcf1        
        [[maybe_unused]] std::uint8_t pad_0xcf2[0x2]; // 0xcf2
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xcf4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPrepareStartTime; // 0xcf8        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xcfc        
        Vector m_vecLastPosition; // 0xd08        
        int32_t m_nStuckFramesCount; // 0xd14        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xd18        
        client::ParticleIndex_t m_nDistancePreview; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ChargedTackle because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ChargedTackle) == 0xd38);
};
