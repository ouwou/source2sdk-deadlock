#pragma once
#include "source2sdk/server/AI_MotorGroundAnimGraph_Flags_t.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Hop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Idle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_IdleTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_InstantStop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Loop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_MovePerformance.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_PlantedTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Start.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Stop.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x228
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        server::CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10        
        server::CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30        
        server::CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x50        
        server::CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0x70        
        server::CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0x98        
        server::CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0xd8        
        server::CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x118        
        server::CAI_MotorGroundAnimGraph_State_MovePerformance m_stateMovePerformance; // 0x158        
        server::CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1e0[0x18]; // 0x1e0
        int32_t m_nCurrentState; // 0x1f8        
        float m_flDistanceCoveredInCurrentState; // 0x1fc        
        bool m_bEnableStop; // 0x200        
        bool m_bEnableStart; // 0x201        
        [[maybe_unused]] std::uint8_t pad_0x202[0x2]; // 0x202
        server::AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x204        
        Vector m_vPreviousPosition; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x214[0x4]; // 0x214
        float m_flCurrentLean; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x21c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph) == 0x228);
};
