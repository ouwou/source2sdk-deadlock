#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetUserEvent : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "input value"
        particleslib::CPerParticleFloatInput m_flInput; // 0x1c0        
        // metadata: MPropertyFriendlyName "rising edge value"
        particleslib::CPerParticleFloatInput m_flRisingEdge; // 0x320        
        // metadata: MPropertyFriendlyName "rising edge event type"
        particles::EventTypeSelection_t m_nRisingEventType; // 0x480        
        [[maybe_unused]] std::uint8_t pad_0x484[0x4]; // 0x484
        // metadata: MPropertyFriendlyName "falling edge value"
        particleslib::CPerParticleFloatInput m_flFallingEdge; // 0x488        
        // metadata: MPropertyFriendlyName "falling edge event type"
        particles::EventTypeSelection_t m_nFallingEventType; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetUserEvent because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetUserEvent) == 0x5f0);
};
