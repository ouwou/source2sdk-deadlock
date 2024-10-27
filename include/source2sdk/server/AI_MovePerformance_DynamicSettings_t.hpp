#pragma once
#include "source2sdk/server/CAI_InterestTarget.hpp"
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
    // Size: 0x34
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct AI_MovePerformance_DynamicSettings_t
    {
    public:
        server::CAI_InterestTarget m_interestTarget; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_MovePerformance_DynamicSettings_t, m_interestTarget) == 0x0);
    
    static_assert(sizeof(AI_MovePerformance_DynamicSettings_t) == 0x34);
};
