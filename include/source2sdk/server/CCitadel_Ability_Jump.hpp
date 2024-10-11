#pragma once
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
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
    // Size: 0xc80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
    // static metadata: MNetworkVarNames "bool m_bJumped"
    // static metadata: MNetworkVarNames "bool m_bCanDashJump"
    // static metadata: MNetworkVarNames "int m_nDesiredAirJumpCount"
    // static metadata: MNetworkVarNames "int m_nExecutedAirJumpCount"
    // static metadata: MNetworkVarNames "bool m_bInSlideJump"
    // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirJumps"
    // static metadata: MNetworkVarNames "int8 m_nConsecutiveWallJumps"
    #pragma pack(push, 1)
    class CCitadel_Ability_Jump : public server::CCitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xaf0        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xaf4        
        entity2::GameTime_t m_flPhaseStartTime; // 0xaf8        
        entity2::GameTime_t m_flJumpTime; // 0xafc        
        client::EJumpType_t m_LastJumpType; // 0xb00        
        bool m_bShouldCreateAirJumpEffects; // 0xb01        
        [[maybe_unused]] std::uint8_t pad_0xb02[0x2]; // 0xb02
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xb04        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xb08        
        Vector m_vWallJumpNormalUsed; // 0xb0c        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x118]; // 0xb18
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc30        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bJumped; // 0xc60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanDashJump; // 0xc61        
        [[maybe_unused]] std::uint8_t pad_0xc62[0x2]; // 0xc62
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xc64        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xc68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInSlideJump; // 0xc6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xc6d        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xc6e        
        [[maybe_unused]] std::uint8_t pad_0xc6f[0x1]; // 0xc6f
        Vector m_vLastWallCollidedWithNormal; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xc80);
};
