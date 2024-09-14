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
    // Size: 0xbf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nWeaponPower"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_WeaponEater : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb08[0xe0]; // 0xb08
        // metadata: MNetworkEnable
        int32_t m_nWeaponPower; // 0xbe8        
        [[maybe_unused]] std::uint8_t pad_0xbec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_WeaponEater because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_WeaponEater) == 0xbf0);
};
