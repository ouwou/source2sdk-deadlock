#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd10
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Synth_Affliction : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x70]; // 0xc98
        client::ParticleIndex_t m_hAOEParticle; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Affliction because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Affliction) == 0xd10);
};
