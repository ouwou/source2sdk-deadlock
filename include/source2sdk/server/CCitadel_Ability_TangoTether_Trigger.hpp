#pragma once
#include "source2sdk/server/CCitadelBaseTriggerAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TangoTether_Trigger : public server::CCitadelBaseTriggerAbility
    {
    public:
        // m_hBaseAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hBaseAbility;
        char m_hBaseAbility[0x4]; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TangoTether_Trigger because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TangoTether_Trigger) == 0xb00);
};
