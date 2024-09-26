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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // Is Abstract
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph_State
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        bool m_bIsActive; // 0x18        
        bool m_bHandshakeAnimationStarted; // 0x19        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x2]; // 0x1a
        int32_t m_nTickActivated; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_MotorGroundAnimGraph_State, m_bIsActive) == 0x18);
    static_assert(offsetof(CAI_MotorGroundAnimGraph_State, m_bHandshakeAnimationStarted) == 0x19);
    static_assert(offsetof(CAI_MotorGroundAnimGraph_State, m_nTickActivated) == 0x1c);
    
    static_assert(sizeof(CAI_MotorGroundAnimGraph_State) == 0x20);
};
