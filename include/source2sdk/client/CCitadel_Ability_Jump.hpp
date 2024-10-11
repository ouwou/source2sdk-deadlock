#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
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
    // Size: 0xe10
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
    class CCitadel_Ability_Jump : public client::C_CitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc80        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xc84        
        entity2::GameTime_t m_flPhaseStartTime; // 0xc88        
        entity2::GameTime_t m_flJumpTime; // 0xc8c        
        client::EJumpType_t m_LastJumpType; // 0xc90        
        bool m_bShouldCreateAirJumpEffects; // 0xc91        
        [[maybe_unused]] std::uint8_t pad_0xc92[0x2]; // 0xc92
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xc94        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc98        
        Vector m_vWallJumpNormalUsed; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xca8[0x118]; // 0xca8
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xdc0        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bJumped; // 0xdf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanDashJump; // 0xdf1        
        [[maybe_unused]] std::uint8_t pad_0xdf2[0x2]; // 0xdf2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xdf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xdf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInSlideJump; // 0xdfc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xdfd        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xdfe        
        [[maybe_unused]] std::uint8_t pad_0xdff[0x1]; // 0xdff
        Vector m_vLastWallCollidedWithNormal; // 0xe00        
        [[maybe_unused]] std::uint8_t pad_0xe0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xe10);
};
