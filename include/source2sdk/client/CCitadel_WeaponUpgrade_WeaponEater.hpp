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
    // Size: 0xd70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nWeaponPower"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_WeaponEater : public client::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc88[0xe0]; // 0xc88
        // metadata: MNetworkEnable
        int32_t m_nWeaponPower; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd6c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_WeaponEater because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_WeaponUpgrade_WeaponEater) == 0xd70);
};
