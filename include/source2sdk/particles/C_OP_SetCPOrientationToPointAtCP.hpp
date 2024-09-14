#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x338
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetCPOrientationToPointAtCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "CP to point towards"
        int32_t m_nInputCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "CP to set"
        int32_t m_nOutputCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x1d0        
        // metadata: MPropertyFriendlyName "2D Orient"
        bool m_b2DOrientation; // 0x330        
        // metadata: MPropertyFriendlyName "Avoid Vertical Axis Singularity"
        bool m_bAvoidSingularity; // 0x331        
        // metadata: MPropertyFriendlyName "Point Away"
        bool m_bPointAway; // 0x332        
        [[maybe_unused]] std::uint8_t pad_0x333[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetCPOrientationToPointAtCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetCPOrientationToPointAtCP) == 0x338);
};
