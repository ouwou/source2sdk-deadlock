#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x490
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MovementMoveAlongSkinnedCPSnapshot : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nSnapshotControlPointNumber; // 0x1c4        
        // metadata: MPropertyFriendlyName "set normal"
        bool m_bSetNormal; // 0x1c8        
        // metadata: MPropertyFriendlyName "set radius"
        bool m_bSetRadius; // 0x1c9        
        [[maybe_unused]] std::uint8_t pad_0x1ca[0x6]; // 0x1ca
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1d0        
        // metadata: MPropertyFriendlyName "Snapshot Index T Value"
        particleslib::CPerParticleFloatInput m_flTValue; // 0x330        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MovementMoveAlongSkinnedCPSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_OP_MovementMoveAlongSkinnedCPSnapshot) == 0x490);
};
