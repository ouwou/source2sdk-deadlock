#pragma once
#include "source2sdk/client/AbilitySectionType_t.hpp"
#include "source2sdk/client/SectionAttributes_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyArrayElementNameKey "m_eAbilitySectionType"
    #pragma pack(push, 1)
    struct ItemSectionInfo_t
    {
    public:
        client::AbilitySectionType_t m_eAbilitySectionType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyAutoExpandSelf
        // m_vecSectionAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SectionAttributes_t> m_vecSectionAttributes;
        char m_vecSectionAttributes[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ItemSectionInfo_t, m_eAbilitySectionType) == 0x0);
    static_assert(offsetof(ItemSectionInfo_t, m_vecSectionAttributes) == 0x8);
    
    static_assert(sizeof(ItemSectionInfo_t) == 0x20);
};
