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
    // Size: 0x240
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        server::CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10        
        server::CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30        
        server::CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x58        
        server::CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0x78        
        server::CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xa0        
        server::CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0xe0        
        server::CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x120        
        server::CAI_MotorGroundAnimGraph_State_MovePerformance m_stateMovePerformance; // 0x160        
        server::CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1e8[0x18]; // 0x1e8
        int32_t m_nCurrentState; // 0x200        
        float m_flDistanceCoveredInCurrentState; // 0x204        
        bool m_bEnableStop; // 0x208        
        bool m_bEnableStart; // 0x209        
        bool m_bHadPath; // 0x20a        
        [[maybe_unused]] std::uint8_t pad_0x20b[0x1]; // 0x20b
        server::AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x20c        
        Vector m_vPreviousPosition; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x4]; // 0x21c
        float m_flCurrentLean; // 0x220        
        RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x224        
        float m_flPrevDesiredMovementHeading; // 0x230        
        float m_flSmoothedDesiredMovementHeadingChange; // 0x234        
        [[maybe_unused]] std::uint8_t pad_0x238[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph) == 0x240);
};
