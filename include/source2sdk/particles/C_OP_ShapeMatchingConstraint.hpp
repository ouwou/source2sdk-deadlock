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
    class C_OP_ShapeMatchingConstraint : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "shape restoration time"
        float m_flShapeRestorationTime; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ShapeMatchingConstraint because it is not a standard-layout class
    static_assert(sizeof(C_OP_ShapeMatchingConstraint) == 0x1c8);
};
