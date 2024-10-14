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
    // Size: 0xdf0
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
        int32_t m_nIntervalsElapsed; // 0xc90        
        entity2::GameTime_t m_NextShotTime; // 0xc94        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flDissipationRate; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDissipationTime; // 0xc9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flHeatTime; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flOverheatSoundTime; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bOverheating; // 0xca8        
        [[maybe_unused]] std::uint8_t pad_0xca9[0x147];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0xdf0);
};
