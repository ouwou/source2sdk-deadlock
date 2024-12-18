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
    // Size: 0xcc0
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
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flDashAngle; // 0xaf8        
        entity2::GameTime_t m_GroundDashExecuteTime; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nLastGroundDashTick; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flGroundDashCastTime; // 0xb04        
        bool m_bTagCanActivateGroundDash; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x7]; // 0xb09
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xb10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAirDashCastTime; // 0xb28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAirDashDragStartTime; // 0xb2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveAirDashes; // 0xb30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveDownDashes; // 0xb31        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bDownAirDash; // 0xb32        
        [[maybe_unused]] std::uint8_t pad_0xb33[0x18d];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Dash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Dash) == 0xcc0);
};
