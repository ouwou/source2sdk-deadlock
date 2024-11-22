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
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Gunslinger_DemonCarbine : public client::CCitadelModifier
    {
    public:
        int32_t m_nBulletCount; // 0xc0        
        float m_flElapsedPct; // 0xc4        
        client::ParticleIndex_t m_nFullyChargedParticle; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Gunslinger_DemonCarbine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Gunslinger_DemonCarbine) == 0x220);
};
