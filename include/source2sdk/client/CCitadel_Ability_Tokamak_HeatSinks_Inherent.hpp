#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xdd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flDissipationRate"
    // static metadata: MNetworkVarNames "GameTime_t m_flDissipationTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flHeatTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
    // static metadata: MNetworkVarNames "bool m_bOverheating"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public client::C_CitadelBaseAbility
    {
    public:
        int32_t m_nIntervalsElapsed; // 0xc70        
        entity2::GameTime_t m_NextShotTime; // 0xc74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flDissipationRate; // 0xc78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDissipationTime; // 0xc7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flHeatTime; // 0xc80        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flOverheatSoundTime; // 0xc84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bOverheating; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc89[0x147];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0xdd0);
};
