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
    // Size: 0x48
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph_State_IdleTurn : public server::CAI_MotorGroundAnimGraph_State
    {
    public:
        int32_t m_eType; // 0x20        
        Vector m_vOriginalTargetFacingPosition; // 0x24        
        Vector m_vTargetFacingPosition; // 0x30        
        float m_flOriginalAngleDelta; // 0x3c        
        bool m_bWasBlockIdleTurnTagActive; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_IdleTurn because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph_State_IdleTurn) == 0x48);
};
