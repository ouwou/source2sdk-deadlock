#pragma once
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xce8
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
    class CCitadel_Ability_Mantle : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flVertOffset; // 0xc70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flHorizGap; // 0xc74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vStartPos; // 0xc78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vTargetPos; // 0xc84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        QAngle m_angFacing; // 0xc90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nMantleTypeIndex; // 0xc9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flStartTime; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca4[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mantle because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mantle) == 0xce8);
};
