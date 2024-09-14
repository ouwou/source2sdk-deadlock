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
    // Size: 0x1f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_AgeNoise : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "absolute value"
        bool m_bAbsVal; // 0x1c8        
        // metadata: MPropertyFriendlyName "invert absolute value"
        bool m_bAbsValInv; // 0x1c9        
        [[maybe_unused]] std::uint8_t pad_0x1ca[0x2]; // 0x1ca
        // metadata: MPropertyFriendlyName "time coordinate offset"
        float m_flOffset; // 0x1cc        
        // metadata: MPropertyFriendlyName "start age minimum"
        float m_flAgeMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "start age maximum"
        float m_flAgeMax; // 0x1d4        
        // metadata: MPropertyFriendlyName "time noise coordinate scale"
        float m_flNoiseScale; // 0x1d8        
        // metadata: MPropertyFriendlyName "spatial noise coordinate scale"
        float m_flNoiseScaleLoc; // 0x1dc        
        // metadata: MPropertyFriendlyName "spatial coordinate offset"
        // metadata: MVectorIsCoordinate
        Vector m_vecOffsetLoc; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_AgeNoise because it is not a standard-layout class
    static_assert(sizeof(C_INIT_AgeNoise) == 0x1f0);
};
