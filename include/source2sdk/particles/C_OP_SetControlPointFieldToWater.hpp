#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointFieldToWater : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "source CP"
        int32_t m_nSourceCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "dest CP"
        int32_t m_nDestCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "dest control point component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nCPField; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointFieldToWater because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointFieldToWater) == 0x1d8);
};
