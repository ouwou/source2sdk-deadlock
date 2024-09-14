#pragma once
#include "source2sdk/particles/C_OP_RemapDistanceToLineSegmentBase.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x1e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapDistanceToLineSegmentToScalar : public particles::C_OP_RemapDistanceToLineSegmentBase
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8        
        // metadata: MPropertyFriendlyName "output value at min distance"
        float m_flMinOutputValue; // 0x1dc        
        // metadata: MPropertyFriendlyName "output value at max distance"
        float m_flMaxOutputValue; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapDistanceToLineSegmentToScalar because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapDistanceToLineSegmentToScalar) == 0x1e8);
};
