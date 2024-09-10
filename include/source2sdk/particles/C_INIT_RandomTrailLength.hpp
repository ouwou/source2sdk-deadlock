#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomTrailLength : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "length min"
        float m_flMinLength; // 0x1c8        
        // metadata: MPropertyFriendlyName "length max"
        float m_flMaxLength; // 0x1cc        
        // metadata: MPropertyFriendlyName "length random exponent"
        float m_flLengthRandExponent; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomTrailLength because it is not a standard-layout class
    
    static_assert(sizeof(C_INIT_RandomTrailLength) == 0x1d8);
};