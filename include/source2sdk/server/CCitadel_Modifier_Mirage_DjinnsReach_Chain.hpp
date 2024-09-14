#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x148
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_DjinnsReach_Chain : public server::CCitadelModifier
    {
    public:
        Vector m_vecOrigin; // 0xc0        
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0xcc        
        bool m_bMakeChainParticle; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd1[0x77];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_DjinnsReach_Chain because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Mirage_DjinnsReach_Chain) == 0x148);
};
