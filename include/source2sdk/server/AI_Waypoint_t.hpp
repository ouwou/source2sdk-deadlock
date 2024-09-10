#pragma once
#include "source2sdk/navlib/NavGravity_t.hpp"
#include "source2sdk/server/Navigation_t.hpp"
#include "source2sdk/server/WaypointFlags_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x60
    #pragma pack(push, 1)
    struct AI_Waypoint_t
    {
    public:
        Vector m_vPos; // 0x0        
        server::WaypointFlags_t m_fWaypointFlags; // 0xc        
        server::Navigation_t m_nWpType; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x14]; // 0x14
        int32_t m_nNodeId; // 0x28        
        float m_flYaw; // 0x2c        
        float m_flBoundaryDist; // 0x30        
        float m_flPathDistGoal; // 0x34        
        // m_hPathCorner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathCorner;
        char m_hPathCorner[0x4]; // 0x38        
        // m_hData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hData;
        char m_hData[0x4]; // 0x3c        
        uint32_t m_nGroundNavAreaId; // 0x40        
        uint32_t m_nNavLinkAreaId; // 0x44        
        navlib::NavGravity_t m_gravityOverride; // 0x48        
        bool m_bGravityOverrideSet; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_Waypoint_t, m_vPos) == 0x0);
    static_assert(offsetof(AI_Waypoint_t, m_fWaypointFlags) == 0xc);
    static_assert(offsetof(AI_Waypoint_t, m_nWpType) == 0x10);
    static_assert(offsetof(AI_Waypoint_t, m_nNodeId) == 0x28);
    static_assert(offsetof(AI_Waypoint_t, m_flYaw) == 0x2c);
    static_assert(offsetof(AI_Waypoint_t, m_flBoundaryDist) == 0x30);
    static_assert(offsetof(AI_Waypoint_t, m_flPathDistGoal) == 0x34);
    static_assert(offsetof(AI_Waypoint_t, m_hPathCorner) == 0x38);
    static_assert(offsetof(AI_Waypoint_t, m_hData) == 0x3c);
    static_assert(offsetof(AI_Waypoint_t, m_nGroundNavAreaId) == 0x40);
    static_assert(offsetof(AI_Waypoint_t, m_nNavLinkAreaId) == 0x44);
    static_assert(offsetof(AI_Waypoint_t, m_gravityOverride) == 0x48);
    static_assert(offsetof(AI_Waypoint_t, m_bGravityOverrideSet) == 0x58);
    
    static_assert(sizeof(AI_Waypoint_t) == 0x60);
};
