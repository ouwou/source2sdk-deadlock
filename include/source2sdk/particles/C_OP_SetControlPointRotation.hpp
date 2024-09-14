#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0x9a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointRotation : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "rotation axis"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecRotAxis; // 0x1c8        
        // metadata: MPropertyFriendlyName "rotation rate"
        particleslib::CParticleCollectionFloatInput m_flRotRate; // 0x840        
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nCP; // 0x9a0        
        // metadata: MPropertyFriendlyName "local space control point"
        int32_t m_nLocalCP; // 0x9a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointRotation because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointRotation) == 0x9a8);
};
