#pragma once
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
    // Size: 0xc48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flDissipationRate"
    // static metadata: MNetworkVarNames "GameTime_t m_flDissipationTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flHeatTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
    // static metadata: MNetworkVarNames "bool m_bOverheating"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public server::CCitadelBaseAbility
    {
    public:
        int32_t m_nIntervalsElapsed; // 0xae8        
        entity2::GameTime_t m_NextShotTime; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flDissipationRate; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDissipationTime; // 0xaf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flHeatTime; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flOverheatSoundTime; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bOverheating; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x147];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0xc48);
};
