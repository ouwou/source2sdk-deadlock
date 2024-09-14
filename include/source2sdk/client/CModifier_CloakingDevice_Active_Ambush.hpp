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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_CloakingDevice_Active_Ambush : public client::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_nAmbushParticle; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_CloakingDevice_Active_Ambush because it is not a standard-layout class
    static_assert(sizeof(CModifier_CloakingDevice_Active_Ambush) == 0xc8);
};
