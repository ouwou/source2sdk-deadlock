#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    // Size: 0x1e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapDotProductToScalar : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "first input control point"
        int32_t m_nInputCP1; // 0x1c0        
        // metadata: MPropertyFriendlyName "second input control point"
        int32_t m_nInputCP2; // 0x1c4        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8        
        // metadata: MPropertyFriendlyName "input minimum (-1 to 1)"
        float m_flInputMin; // 0x1cc        
        // metadata: MPropertyFriendlyName "input maximum (-1 to 1)"
        float m_flInputMax; // 0x1d0        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1d4        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1d8        
        // metadata: MPropertyFriendlyName "use particle velocity for first input"
        bool m_bUseParticleVelocity; // 0x1dc        
        [[maybe_unused]] std::uint8_t pad_0x1dd[0x3]; // 0x1dd
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x1e0        
        // metadata: MPropertyFriendlyName "only active within specified input range"
        bool m_bActiveRange; // 0x1e4        
        // metadata: MPropertyFriendlyName "use particle normal for first input"
        bool m_bUseParticleNormal; // 0x1e5        
        [[maybe_unused]] std::uint8_t pad_0x1e6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapDotProductToScalar because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapDotProductToScalar) == 0x1e8);
};
