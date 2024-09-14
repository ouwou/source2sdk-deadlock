#pragma once
#include "source2sdk/server/CAI_LocalNavigatorBase.hpp"
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
    // Size: 0x50
    // Has VTable
    #pragma pack(push, 1)
    class CAI_CitadelLocalNavigator : public server::CAI_LocalNavigatorBase
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAI_CitadelLocalNavigator) == 0x50);
};
