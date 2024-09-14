#pragma once
#include "source2sdk/client/CCitadelBaseTriggerAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelBaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_TangoTether_Trigger : public client::CCitadelBaseTriggerAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x4]; // 0xc80
        // m_hBaseAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hBaseAbility;
        char m_hBaseAbility[0x4]; // 0xc84        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TangoTether_Trigger because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TangoTether_Trigger) == 0xc88);
};
