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
    // Size: 0xb70
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
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flVertOffset; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flHorizGap; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vStartPos; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vTargetPos; // 0xb0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        QAngle m_angFacing; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nMantleTypeIndex; // 0xb24        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flStartTime; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb2c[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mantle because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mantle) == 0xb70);
};
