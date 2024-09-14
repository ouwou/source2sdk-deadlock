#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_Base.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x58
    // Has VTable
    #pragma pack(push, 1)
    class CPulseCell_Unknown : public pulse_runtime_lib::CPulseCell_Base
    {
    public:
        KeyValues3 m_UnknownKeys; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Unknown because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Unknown) == 0x58);
};
