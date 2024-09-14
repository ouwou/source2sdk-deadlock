#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
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
    // Size: 0xb10
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_InstantReload : public server::CCitadel_Item
    {
    public:
        bool m_bIsManualReloading; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_InstantReload because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_InstantReload) == 0xb10);
};
