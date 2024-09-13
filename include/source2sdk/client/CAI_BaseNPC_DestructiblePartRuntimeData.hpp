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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_BaseNPC_DestructiblePartRuntimeData
    {
    public:
        int32_t m_nHealthRemaining; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartRuntimeData, m_nHealthRemaining) == 0x0);
    
    static_assert(sizeof(CAI_BaseNPC_DestructiblePartRuntimeData) == 0x4);
};
