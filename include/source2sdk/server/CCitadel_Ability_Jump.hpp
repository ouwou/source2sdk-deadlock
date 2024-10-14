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
    // Size: 0xc88
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
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xaf8        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xafc        
        entity2::GameTime_t m_flPhaseStartTime; // 0xb00        
        entity2::GameTime_t m_flJumpTime; // 0xb04        
        client::EJumpType_t m_LastJumpType; // 0xb08        
        bool m_bShouldCreateAirJumpEffects; // 0xb09        
        [[maybe_unused]] std::uint8_t pad_0xb0a[0x2]; // 0xb0a
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xb0c        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xb10        
        Vector m_vWallJumpNormalUsed; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb20[0x118]; // 0xb20
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc38        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bJumped; // 0xc68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanDashJump; // 0xc69        
        [[maybe_unused]] std::uint8_t pad_0xc6a[0x2]; // 0xc6a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xc6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xc70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInSlideJump; // 0xc74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xc75        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xc76        
        [[maybe_unused]] std::uint8_t pad_0xc77[0x1]; // 0xc77
        Vector m_vLastWallCollidedWithNormal; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc84[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xc88);
};
