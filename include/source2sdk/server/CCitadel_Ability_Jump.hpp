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
    // Size: 0xc90
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
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xb00        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xb04        
        entity2::GameTime_t m_flPhaseStartTime; // 0xb08        
        entity2::GameTime_t m_flJumpTime; // 0xb0c        
        client::EJumpType_t m_LastJumpType; // 0xb10        
        bool m_bShouldCreateAirJumpEffects; // 0xb11        
        [[maybe_unused]] std::uint8_t pad_0xb12[0x2]; // 0xb12
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xb14        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xb18        
        Vector m_vWallJumpNormalUsed; // 0xb1c        
        [[maybe_unused]] std::uint8_t pad_0xb28[0x118]; // 0xb28
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc40        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bJumped; // 0xc70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCanDashJump; // 0xc71        
        [[maybe_unused]] std::uint8_t pad_0xc72[0x2]; // 0xc72
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xc74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xc78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInSlideJump; // 0xc7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xc7d        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xc7e        
        [[maybe_unused]] std::uint8_t pad_0xc7f[0x1]; // 0xc7f
        Vector m_vLastWallCollidedWithNormal; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xc90);
};
