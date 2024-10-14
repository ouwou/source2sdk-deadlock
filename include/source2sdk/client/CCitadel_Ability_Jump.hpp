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
    // Size: 0xe20
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
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc90        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xc94        
        entity2::GameTime_t m_flPhaseStartTime; // 0xc98        
        entity2::GameTime_t m_flJumpTime; // 0xc9c        
        client::EJumpType_t m_LastJumpType; // 0xca0        
        bool m_bShouldCreateAirJumpEffects; // 0xca1        
        [[maybe_unused]] std::uint8_t pad_0xca2[0x2]; // 0xca2
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xca4        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xca8        
        Vector m_vWallJumpNormalUsed; // 0xcac        
        [[maybe_unused]] std::uint8_t pad_0xcb8[0x118]; // 0xcb8
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xdd0        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xde8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bJumped; // 0xe00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanDashJump; // 0xe01        
        [[maybe_unused]] std::uint8_t pad_0xe02[0x2]; // 0xe02
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xe04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xe08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInSlideJump; // 0xe0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xe0d        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xe0e        
        [[maybe_unused]] std::uint8_t pad_0xe0f[0x1]; // 0xe0f
        Vector m_vLastWallCollidedWithNormal; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xe20);
};
