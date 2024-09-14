#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xb60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flVertOffset"
    // static metadata: MNetworkVarNames "float m_flHorizGap"
    // static metadata: MNetworkVarNames "Vector m_vStartPos"
    // static metadata: MNetworkVarNames "Vector m_vTargetPos"
    // static metadata: MNetworkVarNames "QAngle m_angFacing"
    // static metadata: MNetworkVarNames "int m_nMantleTypeIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Mantle : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flVertOffset; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flHorizGap; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vStartPos; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vTargetPos; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        QAngle m_angFacing; // 0xb08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nMantleTypeIndex; // 0xb14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flStartTime; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb1c[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mantle because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mantle) == 0xb60);
};
