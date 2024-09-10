#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    struct AI_Waypoint_t;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    #pragma pack(push, 1)
    class CAI_WaypointList
    {
    public:
        server::AI_Waypoint_t* m_pFirstWaypoint; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_WaypointList, m_pFirstWaypoint) == 0x0);
    
    static_assert(sizeof(CAI_WaypointList) == 0x8);
};
