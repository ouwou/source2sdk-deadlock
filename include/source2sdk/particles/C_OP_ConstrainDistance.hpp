#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
    // Size: 0x498
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ConstrainDistance : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "minimum distance"
        particleslib::CParticleCollectionFloatInput m_fMinDistance; // 0x1c0        
        // metadata: MPropertyFriendlyName "maximum distance"
        particleslib::CParticleCollectionFloatInput m_fMaxDistance; // 0x320        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x480        
        // metadata: MPropertyFriendlyName "offset of center"
        // metadata: MVectorIsCoordinate
        Vector m_CenterOffset; // 0x484        
        // metadata: MPropertyFriendlyName "global center point"
        bool m_bGlobalCenter; // 0x490        
        [[maybe_unused]] std::uint8_t pad_0x491[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ConstrainDistance because it is not a standard-layout class
    static_assert(sizeof(C_OP_ConstrainDistance) == 0x498);
};
