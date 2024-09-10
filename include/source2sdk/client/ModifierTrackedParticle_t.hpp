#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModifierTrackedParticle_t
    {
    public:
        client::ParticleIndex_t m_nParticleIndex; // 0x0        
        bool m_bDestroyImmediately; // 0x4        
        bool m_bStatusEffect; // 0x5        
        bool m_bScreenSpace; // 0x6        
        [[maybe_unused]] std::uint8_t pad_0x07[0x1]; // 0x7
        int16_t m_nStatusEffectPriority; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModifierTrackedParticle_t, m_nParticleIndex) == 0x0);
    static_assert(offsetof(ModifierTrackedParticle_t, m_bDestroyImmediately) == 0x4);
    static_assert(offsetof(ModifierTrackedParticle_t, m_bStatusEffect) == 0x5);
    static_assert(offsetof(ModifierTrackedParticle_t, m_bScreenSpace) == 0x6);
    static_assert(offsetof(ModifierTrackedParticle_t, m_nStatusEffectPriority) == 0x8);
    
    static_assert(sizeof(ModifierTrackedParticle_t) == 0xc);
};
