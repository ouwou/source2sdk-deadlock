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
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct RagdollCreationParams_t
    {
    public:
        Vector m_vForce; // 0x0        
        int32_t m_nForceBone; // 0xc        
        bool m_bForceCurrentWorldTransform; // 0x10        
        bool m_bUseLRURetirement; // 0x11        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        int32_t m_nHealthToGrant; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RagdollCreationParams_t, m_vForce) == 0x0);
    static_assert(offsetof(RagdollCreationParams_t, m_nForceBone) == 0xc);
    static_assert(offsetof(RagdollCreationParams_t, m_bForceCurrentWorldTransform) == 0x10);
    static_assert(offsetof(RagdollCreationParams_t, m_bUseLRURetirement) == 0x11);
    static_assert(offsetof(RagdollCreationParams_t, m_nHealthToGrant) == 0x14);
    
    static_assert(sizeof(RagdollCreationParams_t) == 0x18);
};
