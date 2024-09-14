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
    class C_BaseEntity;
};

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
    // static metadata: MNetworkVarNames "GameTime_t m_flPrepareStartTime"
    // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
    #pragma pack(push, 1)
    class CCitadel_Ability_ChargedTackle : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc70[0x1f8]; // 0xc70
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xe68        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xe69        
        [[maybe_unused]] std::uint8_t pad_0xe6a[0x2]; // 0xe6a
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xe6c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPrepareStartTime; // 0xe70        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xe74        
        Vector m_vecLastPosition; // 0xe80        
        int32_t m_nStuckFramesCount; // 0xe8c        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xe90        
        client::ParticleIndex_t m_nDistancePreview; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xeac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ChargedTackle because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ChargedTackle) == 0xeb0);
};
