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
    // Size: 0xd00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nKillsEarned"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_GlassCannon : public client::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nKillsEarned; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_GlassCannon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_GlassCannon) == 0xd00);
};
