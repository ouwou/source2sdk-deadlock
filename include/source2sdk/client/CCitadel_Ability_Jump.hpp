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
    // Size: 0xe28
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
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc98        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xc9c        
        entity2::GameTime_t m_flPhaseStartTime; // 0xca0        
        entity2::GameTime_t m_flJumpTime; // 0xca4        
        client::EJumpType_t m_LastJumpType; // 0xca8        
        bool m_bShouldCreateAirJumpEffects; // 0xca9        
        [[maybe_unused]] std::uint8_t pad_0xcaa[0x2]; // 0xcaa
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xcac        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xcb0        
        Vector m_vWallJumpNormalUsed; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcc0[0x118]; // 0xcc0
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xdd8        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bJumped; // 0xe08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCanDashJump; // 0xe09        
        [[maybe_unused]] std::uint8_t pad_0xe0a[0x2]; // 0xe0a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xe0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xe10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInSlideJump; // 0xe14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xe15        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xe16        
        [[maybe_unused]] std::uint8_t pad_0xe17[0x1]; // 0xe17
        Vector m_vLastWallCollidedWithNormal; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe24[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xe28);
};
