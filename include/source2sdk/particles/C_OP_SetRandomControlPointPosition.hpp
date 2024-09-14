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
    // Size: 0x4b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetRandomControlPointPosition : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "set positions in world space"
        bool m_bUseWorldLocation; // 0x1c8        
        // metadata: MPropertyFriendlyName "inherit CP orientation"
        bool m_bOrient; // 0x1c9        
        [[maybe_unused]] std::uint8_t pad_0x1ca[0x2]; // 0x1ca
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nCP1; // 0x1cc        
        // metadata: MPropertyFriendlyName "control point to offset positions from"
        int32_t m_nHeadLocation; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "re-randomize rate (-1 for once only)"
        particleslib::CParticleCollectionFloatInput m_flReRandomRate; // 0x1d8        
        // metadata: MPropertyFriendlyName "control point min"
        Vector m_vecCPMinPos; // 0x338        
        // metadata: MPropertyFriendlyName "control point max"
        Vector m_vecCPMaxPos; // 0x344        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x350        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetRandomControlPointPosition because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetRandomControlPointPosition) == 0x4b0);
};
