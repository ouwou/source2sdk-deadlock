#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
    // Size: 0x210
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RemapScalarToVector : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "input field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc        
        // metadata: MPropertyFriendlyName "input minimum"
        float m_flInputMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "input maximum"
        float m_flInputMax; // 0x1d4        
        // metadata: MPropertyFriendlyName "output minimum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutputMin; // 0x1d8        
        // metadata: MPropertyFriendlyName "output maximum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutputMax; // 0x1e4        
        // metadata: MPropertyFriendlyName "emitter lifetime start time (seconds)"
        float m_flStartTime; // 0x1f0        
        // metadata: MPropertyFriendlyName "emitter lifetime end time (seconds)"
        float m_flEndTime; // 0x1f4        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x1f8        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1fc        
        // metadata: MPropertyFriendlyName "use local system"
        bool m_bLocalCoords; // 0x200        
        [[maybe_unused]] std::uint8_t pad_0x201[0x3]; // 0x201
        // metadata: MPropertyFriendlyName "remap bias"
        float m_flRemapBias; // 0x204        
        [[maybe_unused]] std::uint8_t pad_0x208[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RemapScalarToVector because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RemapScalarToVector) == 0x210);
};
