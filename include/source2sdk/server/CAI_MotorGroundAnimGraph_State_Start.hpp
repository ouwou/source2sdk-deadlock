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
    // Size: 0x28
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph_State_Start : public server::CAI_MotorGroundAnimGraph_State
    {
    public:
        bool m_bPathChanged; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_Start because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph_State_Start) == 0x28);
};
