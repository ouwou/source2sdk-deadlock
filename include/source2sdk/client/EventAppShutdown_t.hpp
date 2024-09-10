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
    #pragma pack(push, 1)
    struct EventAppShutdown_t
    {
    public:
        int32_t m_nDummy0; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventAppShutdown_t, m_nDummy0) == 0x0);
    
    static_assert(sizeof(EventAppShutdown_t) == 0x4);
};
