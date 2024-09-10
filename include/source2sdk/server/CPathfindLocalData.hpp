#pragma once
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CPathfindLocalData
    {
    public:
        Vector m_vLocalStart; // 0x0        
        Vector m_vLocalEnd; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8]; // 0x18
        server::WaypointFlags_t m_nEndFlags; // 0x20        
        int32_t m_nBuildFlags; // 0x24        
        int32_t m_nodeID; // 0x28        
        float m_flYaw; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPathfindLocalData, m_vLocalStart) == 0x0);
    static_assert(offsetof(CPathfindLocalData, m_vLocalEnd) == 0xc);
    static_assert(offsetof(CPathfindLocalData, m_nEndFlags) == 0x20);
    static_assert(offsetof(CPathfindLocalData, m_nBuildFlags) == 0x24);
    static_assert(offsetof(CPathfindLocalData, m_nodeID) == 0x28);
    static_assert(offsetof(CPathfindLocalData, m_flYaw) == 0x2c);
    
    static_assert(sizeof(CPathfindLocalData) == 0x30);
};
