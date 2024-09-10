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
    // Size: 0xde8
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
    // static metadata: MNetworkVarNames "Vector m_vWallJumpNormal"
    #pragma pack(push, 1)
    class CCitadel_Ability_Jump : public client::C_CitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc60        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xc64        
        entity2::GameTime_t m_flPhaseStartTime; // 0xc68        
        entity2::GameTime_t m_flJumpTime; // 0xc6c        
        client::EJumpType_t m_LastJumpType; // 0xc70        
        bool m_bShouldCreateAirJumpEffects; // 0xc71        
        [[maybe_unused]] std::uint8_t pad_0xc72[0x2]; // 0xc72
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xc74        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc7c[0x11c]; // 0xc7c
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd98        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bJumped; // 0xdc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanDashJump; // 0xdc9        
        [[maybe_unused]] std::uint8_t pad_0xdca[0x2]; // 0xdca
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xdcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xdd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInSlideJump; // 0xdd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xdd5        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xdd6        
        [[maybe_unused]] std::uint8_t pad_0xdd7[0x1]; // 0xdd7
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vWallJumpNormal; // 0xdd8        
        [[maybe_unused]] std::uint8_t pad_0xde4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xde8);
};
