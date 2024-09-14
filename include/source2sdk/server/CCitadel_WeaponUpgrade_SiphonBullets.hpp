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
    // Size: 0xb80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iStacks"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_SiphonBullets : public server::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iStacks; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SiphonBullets because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_SiphonBullets) == 0xb80);
};
