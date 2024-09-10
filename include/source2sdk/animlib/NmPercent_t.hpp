#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NmPercent_t
    {
    public:
        float m_flValue; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NmPercent_t, m_flValue) == 0x0);
    
    static_assert(sizeof(NmPercent_t) == 0x4);
};
