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
    // Size: 0x1e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RampCPLinearRandom : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "ramp rate min"
        Vector m_vecRateMin; // 0x1cc        
        // metadata: MPropertyFriendlyName "ramp rate max"
        Vector m_vecRateMax; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RampCPLinearRandom because it is not a standard-layout class
    static_assert(sizeof(C_OP_RampCPLinearRandom) == 0x1e8);
};
