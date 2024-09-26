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
    // Size: 0xd08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iStacks"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_SiphonBullets : public client::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iStacks; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SiphonBullets because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_SiphonBullets) == 0xd08);
};
