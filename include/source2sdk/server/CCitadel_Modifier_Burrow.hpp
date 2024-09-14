#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CTriggerBurrowUnderground;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x218
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Burrow : public server::CCitadelModifier
    {
    public:
        // m_pUndergroundTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CTriggerBurrowUnderground> m_pUndergroundTrigger;
        char m_pUndergroundTrigger[0x4]; // 0xc0        
        entity2::GameTime_t m_flLastDamageTime; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Burrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Burrow) == 0x218);
};
