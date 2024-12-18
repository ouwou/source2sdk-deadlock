#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nBonusTechPower"
    #pragma pack(push, 1)
    class CAbility_Synth_Affliction : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nBonusTechPower; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0xac]; // 0xafc
        client::ParticleIndex_t m_hAOEParticle; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Affliction because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Affliction) == 0xbb0);
};
