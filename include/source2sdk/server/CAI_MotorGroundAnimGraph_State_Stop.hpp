#pragma once
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State.hpp"
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
    // Size: 0x38
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph_State_Stop : public server::CAI_MotorGroundAnimGraph_State
    {
    public:
        Vector m_vGoalPosition; // 0x20        
        Vector m_vArrivalDirection; // 0x2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_Stop because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph_State_Stop) == 0x38);
};
