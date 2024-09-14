#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
    // Size: 0xcb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flDashAngle"
    // static metadata: MNetworkVarNames "int m_nLastGroundDashTick"
    // static metadata: MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAirDashCastTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
    // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirDashes"
    // static metadata: MNetworkVarNames "int8 m_nConsecutiveDownDashes"
    // static metadata: MNetworkVarNames "bool m_bDownAirDash"
    #pragma pack(push, 1)
    class CCitadel_Ability_Dash : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flDashAngle; // 0xae8        
        entity2::GameTime_t m_GroundDashExecuteTime; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nLastGroundDashTick; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGroundDashCastTime; // 0xaf4        
        bool m_bTagCanActivateGroundDash; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x7]; // 0xaf9
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAirDashCastTime; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAirDashDragStartTime; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirDashes; // 0xb20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveDownDashes; // 0xb21        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bDownAirDash; // 0xb22        
        [[maybe_unused]] std::uint8_t pad_0xb23[0x18d];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Dash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Dash) == 0xcb0);
};
