#pragma once
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/EMinimapHeight.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CEntityIndex m_nEntIndex"
    // static metadata: MNetworkVarNames "int m_nTeam"
    // static metadata: MNetworkVarNames "Class_T m_eClass"
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "EMinimapHeight m_eHeight"
    // static metadata: MNetworkVarNames "bool m_bVisibleOnMap"
    // static metadata: MNetworkVarNames "bool m_bBackdoorProtectionActive"
    // static metadata: MNetworkVarNames "GameTick_t m_nTickHidden"
    // static metadata: MNetworkVarNames "CUtlString m_strEntityName"
    // static metadata: MNetworkVarNames "uint8 m_nHealthPercent"
    // static metadata: MNetworkVarNames "uint8 m_nPositionX"
    // static metadata: MNetworkVarNames "uint8 m_nPositionY"
    #pragma pack(push, 1)
    class STeamFOWEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        CEntityIndex m_nEntIndex; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_nTeam; // 0x34        
        // metadata: MNetworkEnable
        client::Class_T m_eClass; // 0x38        
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x3c        
        // metadata: MNetworkEnable
        client::EMinimapHeight m_eHeight; // 0x40        
        // metadata: MNetworkEnable
        bool m_bVisibleOnMap; // 0x41        
        // metadata: MNetworkEnable
        bool m_bBackdoorProtectionActive; // 0x42        
        [[maybe_unused]] std::uint8_t pad_0x43[0x1]; // 0x43
        // metadata: MNetworkEnable
        entity2::GameTick_t m_nTickHidden; // 0x44        
        // metadata: MNetworkEnable
        CUtlString m_strEntityName; // 0x48        
        // metadata: MNetworkEnable
        uint8_t m_nHealthPercent; // 0x50        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        uint8_t m_nPositionX; // 0x51        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        uint8_t m_nPositionY; // 0x52        
        [[maybe_unused]] std::uint8_t pad_0x53[0x5];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(STeamFOWEntity, m_nEntIndex) == 0x30);
    static_assert(offsetof(STeamFOWEntity, m_nTeam) == 0x34);
    static_assert(offsetof(STeamFOWEntity, m_eClass) == 0x38);
    static_assert(offsetof(STeamFOWEntity, m_iLane) == 0x3c);
    static_assert(offsetof(STeamFOWEntity, m_eHeight) == 0x40);
    static_assert(offsetof(STeamFOWEntity, m_bVisibleOnMap) == 0x41);
    static_assert(offsetof(STeamFOWEntity, m_bBackdoorProtectionActive) == 0x42);
    static_assert(offsetof(STeamFOWEntity, m_nTickHidden) == 0x44);
    static_assert(offsetof(STeamFOWEntity, m_strEntityName) == 0x48);
    static_assert(offsetof(STeamFOWEntity, m_nHealthPercent) == 0x50);
    static_assert(offsetof(STeamFOWEntity, m_nPositionX) == 0x51);
    static_assert(offsetof(STeamFOWEntity, m_nPositionY) == 0x52);
    
    static_assert(sizeof(STeamFOWEntity) == 0x58);
};
