#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Mirage_SandPhantom : public client::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_particleStart; // 0xc0        
        client::ParticleIndex_t m_particleEnd; // 0xc4        
        client::ParticleIndex_t m_particleTrail; // 0xc8        
        Vector m_vecStartPosition; // 0xcc        
        float m_flStartDelay; // 0xd8        
        Vector m_vecApplyOffset; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xe8[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Mirage_SandPhantom because it is not a standard-layout class
    static_assert(sizeof(CModifier_Mirage_SandPhantom) == 0x158);
};
