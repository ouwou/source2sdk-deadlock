#pragma once
#include "source2sdk/server/CAI_Motor.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    #pragma pack(push, 1)
    class CAI_CitadelPlayerBotMotor : public server::CAI_Motor
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1e8[0x28];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAI_CitadelPlayerBotMotor) == 0x210);
};
