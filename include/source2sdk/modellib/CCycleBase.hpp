#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCycleBase
    {
    public:
        float m_flCycle; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCycleBase, m_flCycle) == 0x0);
    
    static_assert(sizeof(CCycleBase) == 0x4);
};