#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    class C_OP_SDFLighting : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "Lighting dir"
        Vector m_vLightingDir; // 0x1c0        
        // metadata: MPropertyFriendlyName "shadow color"
        Vector m_vTint_0; // 0x1cc        
        // metadata: MPropertyFriendlyName "lit color"
        Vector m_vTint_1; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SDFLighting because it is not a standard-layout class
    static_assert(sizeof(C_OP_SDFLighting) == 0x1e8);
};
