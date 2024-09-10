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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x24
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct LastIncomingHit_t
    {
    public:
        Vector vecDir; // 0x0        
        Vector vecBoneLocalPos; // 0xc        
        int32_t nHitboxBoneIndex; // 0x18        
        float flHitStrength; // 0x1c        
        int32_t nDamageType; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(LastIncomingHit_t, vecDir) == 0x0);
    static_assert(offsetof(LastIncomingHit_t, vecBoneLocalPos) == 0xc);
    static_assert(offsetof(LastIncomingHit_t, nHitboxBoneIndex) == 0x18);
    static_assert(offsetof(LastIncomingHit_t, flHitStrength) == 0x1c);
    static_assert(offsetof(LastIncomingHit_t, nDamageType) == 0x20);
    
    static_assert(sizeof(LastIncomingHit_t) == 0x24);
};
