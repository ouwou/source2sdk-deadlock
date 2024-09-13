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
    // Size: 0x208
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public server::CCitadelModifier
    {
    public:
        bool m_bAppliesSlow; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x3]; // 0xc9
        // m_hFirstPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFirstPartner;
        char m_hFirstPartner[0x4]; // 0xcc        
        // m_hSecondPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSecondPartner;
        char m_hSecondPartner[0x4]; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4]; // 0xd4
        // m_vecPartners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecPartners;
        char m_vecPartners[0x18]; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xf0[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_DjinnsReach_Debuff because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Mirage_DjinnsReach_Debuff) == 0x208);
};
