#pragma once
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
    // Size: 0x200
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TrapperPoisonJar_Aura : public server::CCitadelModifierAura
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xe0[0x120];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_TrapperPoisonJar_Aura) == 0x200);
};
