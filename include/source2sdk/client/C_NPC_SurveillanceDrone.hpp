#pragma once
#include "source2sdk/client/C_NPC_FlyingDrone.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1460
    // Has VTable
    #pragma pack(push, 1)
    class C_NPC_SurveillanceDrone : public client::C_NPC_FlyingDrone
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_NPC_SurveillanceDrone) == 0x1460);
};
