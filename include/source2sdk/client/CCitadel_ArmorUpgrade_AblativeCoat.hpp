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
    // Size: 0xd40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iCurrentResistValue"
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_AblativeCoat : public client::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iCurrentResistValue; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_AblativeCoat because it is not a standard-layout class
    static_assert(sizeof(CCitadel_ArmorUpgrade_AblativeCoat) == 0xd40);
};
