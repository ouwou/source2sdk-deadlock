#pragma once
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"
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
    // Size: 0x140
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ThrowSandProjectile : public client::CCitadel_Modifier_Intrinsic_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70]; // 0xc0
        Vector m_vInitialCastPosition; // 0x130        
        client::ParticleIndex_t m_iParticleEffect; // 0x13c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ThrowSandProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ThrowSandProjectile) == 0x140);
};
