#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd00
    // Has VTable
    #pragma pack(push, 1)
    class CItemSilenceGlyph : public client::CCitadel_Item
    {
    public:
        // m_vecProjectileHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecProjectileHitTargets;
        char m_vecProjectileHitTargets[0x18]; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemSilenceGlyph because it is not a standard-layout class
    static_assert(sizeof(CItemSilenceGlyph) == 0xd00);
};
