#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MPropertyCustomFGDType "string"
    #pragma pack(push, 1)
    struct ConditionId_t
    {
    public:
        uint32_t m_nValue; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ConditionId_t, m_nValue) == 0x0);
    
    static_assert(sizeof(ConditionId_t) == 0x4);
};
