#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
    class CCitadel_Ability_Jump;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe68
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
    class CCitadel_Ability_Dash : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flDashAngle; // 0xc70        
        entity2::GameTime_t m_GroundDashExecuteTime; // 0xc74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nLastGroundDashTick; // 0xc78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGroundDashCastTime; // 0xc7c        
        bool m_bTagCanActivateGroundDash; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc81[0x7]; // 0xc81
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xc88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAirDashCastTime; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAirDashDragStartTime; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveAirDashes; // 0xca8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int8_t m_nConsecutiveDownDashes; // 0xca9        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bDownAirDash; // 0xcaa        
        [[maybe_unused]] std::uint8_t pad_0xcab[0x1b5]; // 0xcab
        // m_hJumpAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CCitadel_Ability_Jump> m_hJumpAbility;
        char m_hJumpAbility[0x4]; // 0xe60        
        [[maybe_unused]] std::uint8_t pad_0xe64[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Dash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Dash) == 0xe68);
};
