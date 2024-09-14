#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x200
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public client::CCitadelModifier
    {
    public:
        bool m_bAppliesSlow; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        // m_hFirstPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFirstPartner;
        char m_hFirstPartner[0x4]; // 0xc4        
        // m_hSecondPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSecondPartner;
        char m_hSecondPartner[0x4]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4]; // 0xcc
        // m_vecPartners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecPartners;
        char m_vecPartners[0x18]; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xe8[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_DjinnsReach_Debuff because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Mirage_DjinnsReach_Debuff) == 0x200);
};
