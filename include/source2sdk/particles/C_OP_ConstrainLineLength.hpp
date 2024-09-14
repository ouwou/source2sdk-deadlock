#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ConstrainLineLength : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "minimum length"
        float m_flMinDistance; // 0x1c0        
        // metadata: MPropertyFriendlyName "maximum length"
        float m_flMaxDistance; // 0x1c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ConstrainLineLength because it is not a standard-layout class
    static_assert(sizeof(C_OP_ConstrainLineLength) == 0x1c8);
};
