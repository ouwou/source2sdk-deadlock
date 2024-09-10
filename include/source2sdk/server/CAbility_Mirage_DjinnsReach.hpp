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
    // Size: 0xc70
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Mirage_DjinnsReach : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_ChannelParticle; // 0xad8        
        Vector m_vInitialCasterForward; // 0xadc        
        [[maybe_unused]] std::uint8_t pad_0xae8[0x188];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_DjinnsReach because it is not a standard-layout class
    
    static_assert(sizeof(CAbility_Mirage_DjinnsReach) == 0xc70);
};
