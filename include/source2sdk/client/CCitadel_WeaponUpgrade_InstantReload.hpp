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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc90
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_InstantReload : public client::CCitadel_Item
    {
    public:
        bool m_bIsManualReloading; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_InstantReload because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_InstantReload) == 0xc90);
};
