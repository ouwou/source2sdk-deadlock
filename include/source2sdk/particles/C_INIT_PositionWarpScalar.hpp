#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x350
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_PositionWarpScalar : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "warp min"
        // metadata: MVectorIsCoordinate
        Vector m_vecWarpMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "warp max"
        // metadata: MVectorIsCoordinate
        Vector m_vecWarpMax; // 0x1d4        
        // metadata: MPropertyFriendlyName "warp amount"
        particleslib::CPerParticleFloatInput m_InputValue; // 0x1e0        
        // metadata: MPropertyFriendlyName "previous position scale"
        float m_flPrevPosScale; // 0x340        
        // metadata: MPropertyFriendlyName "warp scale control point number"
        int32_t m_nScaleControlPointNumber; // 0x344        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x348        
        [[maybe_unused]] std::uint8_t pad_0x34c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_PositionWarpScalar because it is not a standard-layout class
    static_assert(sizeof(C_INIT_PositionWarpScalar) == 0x350);
};
