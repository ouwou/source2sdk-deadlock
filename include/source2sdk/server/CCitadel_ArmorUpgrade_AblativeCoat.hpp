#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xba8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iCurrentResistValue"
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_AblativeCoat : public server::CCitadel_Item
    {
    public:
        entity2::GameTime_t m_flLastDamageTime; // 0xaf8        
        // metadata: MNetworkEnable
        int32_t m_iCurrentResistValue; // 0xafc        
        [[maybe_unused]] std::uint8_t pad_0xb00[0xa8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_AblativeCoat because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_ArmorUpgrade_AblativeCoat) == 0xba8);
};
