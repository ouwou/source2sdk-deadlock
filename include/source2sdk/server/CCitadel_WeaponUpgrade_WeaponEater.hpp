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
    // Size: 0xc00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nWeaponPower"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_WeaponEater : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb18[0xe0]; // 0xb18
        // metadata: MNetworkEnable
        int32_t m_nWeaponPower; // 0xbf8        
        [[maybe_unused]] std::uint8_t pad_0xbfc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_WeaponEater because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_WeaponEater) == 0xc00);
};
