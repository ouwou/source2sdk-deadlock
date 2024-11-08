#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // 
    // static metadata: MModelGameData
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CCitadelNPCModelGameData_t
    {
    public:
        float m_flTurnThreshold; // 0x0        
        float m_flTurnDuration; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelNPCModelGameData_t, m_flTurnThreshold) == 0x0);
    static_assert(offsetof(CCitadelNPCModelGameData_t, m_flTurnDuration) == 0x4);
    
    static_assert(sizeof(CCitadelNPCModelGameData_t) == 0x8);
};
