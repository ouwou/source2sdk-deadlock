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
    // Size: 0x348
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointToWaterSurface : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "source CP"
        int32_t m_nSourceCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "CP to set to surface"
        int32_t m_nDestCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "CP to set to surface current flow velocity"
        // metadata: MPropertySuppressExpr "mod != hlx"
        int32_t m_nFlowCP; // 0x1d0        
        // metadata: MPropertyFriendlyName "CP to set component of if water"
        int32_t m_nActiveCP; // 0x1d4        
        // metadata: MPropertyFriendlyName "CP component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nActiveCPField; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4]; // 0x1dc
        // metadata: MPropertyFriendlyName "retest rate"
        particleslib::CParticleCollectionFloatInput m_flRetestRate; // 0x1e0        
        // metadata: MPropertyFriendlyName "adaptive retest on moving surface"
        bool m_bAdaptiveThreshold; // 0x340        
        [[maybe_unused]] std::uint8_t pad_0x341[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToWaterSurface because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToWaterSurface) == 0x348);
};
