#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_TechCleave__DamageTaken_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TechCleave : public server::CCitadelModifier
    {
    public:
        // m_vDamageTakenEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CCitadel_Modifier_TechCleave__DamageTaken_t> m_vDamageTakenEvents;
        char m_vDamageTakenEvents[0x18]; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TechCleave because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TechCleave) == 0x110);
};
