#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    class C_OP_RemapBoundingVolumetoCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "input volume minimum in cubic units"
        float m_flInputMin; // 0x1cc        
        // metadata: MPropertyFriendlyName "input volume maximum in cubic units"
        float m_flInputMax; // 0x1d0        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1d4        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapBoundingVolumetoCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapBoundingVolumetoCP) == 0x1e0);
};
