#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleOrientationSetMode_t.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"
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
    // Size: 0x1e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointsToParticle : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "group ID to affect"
        int32_t m_nChildGroupID; // 0x1c0        
        // metadata: MPropertyFriendlyName "first control point to set"
        int32_t m_nFirstControlPoint; // 0x1c4        
        // metadata: MPropertyFriendlyName "# of control points to set"
        int32_t m_nNumControlPoints; // 0x1c8        
        // metadata: MPropertyFriendlyName "first particle to copy"
        int32_t m_nFirstSourcePoint; // 0x1cc        
        // metadata: MPropertyFriendlyName "set orientation"
        bool m_bSetOrientation; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x3]; // 0x1d1
        // metadata: MPropertyFriendlyName "orientation style"
        particles::ParticleOrientationSetMode_t m_nOrientationMode; // 0x1d4        
        // metadata: MPropertyFriendlyName "set parent"
        particles::ParticleParentSetMode_t m_nSetParent; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointsToParticle because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointsToParticle) == 0x1e0);
};
