#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/navlib/NavGravity_t.hpp"
#include "source2sdk/server/AI_NavGoalFlags_t.hpp"
#include "source2sdk/server/CAI_WaypointList.hpp"
#include "source2sdk/server/GoalType_t.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Path
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        server::CAI_WaypointList m_Waypoints; // 0x8        
        Vector m_vPrevWaypoint; // 0x10        
        Vector m_vPrevWaypointBase; // 0x1c        
        server::CAI_WaypointList m_WaypointsLocal; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x30[0x8]; // 0x30
        uint32_t m_nLocalPathHash; // 0x38        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x3c        
        Vector m_vTargetOffset; // 0x40        
        bool m_bGoalPosSet; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x4d[0x3]; // 0x4d
        Vector m_vGoalActualPos; // 0x50        
        Vector m_vGoalBasePos; // 0x5c        
        Vector m_vGoalActualPos_EntityInitial; // 0x68        
        Vector m_vGoalBasePos_EntityInitial; // 0x74        
        Vector m_vGoalPosBlocked; // 0x80        
        navlib::NavGravity_t m_GravityAtGoalPos; // 0x8c        
        bool m_bGoalTypeSet; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9d[0x3]; // 0x9d
        server::GoalType_t m_goalType; // 0xa0        
        server::AI_NavGoalFlags_t m_goalFlags; // 0xa4        
        entity2::GameTime_t m_flGoalChangeTime; // 0xa8        
        entity2::GameTime_t m_flPathChangeTime; // 0xac        
        float m_flDistAdvancedToCurWaypoint; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb4[0xc]; // 0xb4
        uint32_t m_nConstrainedToMovableMeshId; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_Path, m_Waypoints) == 0x8);
    static_assert(offsetof(CAI_Path, m_vPrevWaypoint) == 0x10);
    static_assert(offsetof(CAI_Path, m_vPrevWaypointBase) == 0x1c);
    static_assert(offsetof(CAI_Path, m_WaypointsLocal) == 0x28);
    static_assert(offsetof(CAI_Path, m_nLocalPathHash) == 0x38);
    static_assert(offsetof(CAI_Path, m_hTarget) == 0x3c);
    static_assert(offsetof(CAI_Path, m_vTargetOffset) == 0x40);
    static_assert(offsetof(CAI_Path, m_bGoalPosSet) == 0x4c);
    static_assert(offsetof(CAI_Path, m_vGoalActualPos) == 0x50);
    static_assert(offsetof(CAI_Path, m_vGoalBasePos) == 0x5c);
    static_assert(offsetof(CAI_Path, m_vGoalActualPos_EntityInitial) == 0x68);
    static_assert(offsetof(CAI_Path, m_vGoalBasePos_EntityInitial) == 0x74);
    static_assert(offsetof(CAI_Path, m_vGoalPosBlocked) == 0x80);
    static_assert(offsetof(CAI_Path, m_GravityAtGoalPos) == 0x8c);
    static_assert(offsetof(CAI_Path, m_bGoalTypeSet) == 0x9c);
    static_assert(offsetof(CAI_Path, m_goalType) == 0xa0);
    static_assert(offsetof(CAI_Path, m_goalFlags) == 0xa4);
    static_assert(offsetof(CAI_Path, m_flGoalChangeTime) == 0xa8);
    static_assert(offsetof(CAI_Path, m_flPathChangeTime) == 0xac);
    static_assert(offsetof(CAI_Path, m_flDistAdvancedToCurWaypoint) == 0xb0);
    static_assert(offsetof(CAI_Path, m_nConstrainedToMovableMeshId) == 0xc0);
    
    static_assert(sizeof(CAI_Path) == 0xc8);
};
