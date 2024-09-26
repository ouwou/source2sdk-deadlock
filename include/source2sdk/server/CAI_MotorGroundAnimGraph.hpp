#pragma once
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Idle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_IdleTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Loop.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xf8
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        server::CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10        
        server::CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30        
        server::CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x50        
        server::CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0x70        
        server::CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x18]; // 0xc8
        int32_t m_nCurrentState; // 0xe0        
        float m_flDistanceCoveredInCurrentState; // 0xe4        
        bool m_bEnableStop; // 0xe8        
        bool m_bEnableStart; // 0xe9        
        [[maybe_unused]] std::uint8_t pad_0xea[0x2]; // 0xea
        Vector m_vPreviousPosition; // 0xec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph) == 0xf8);
};
