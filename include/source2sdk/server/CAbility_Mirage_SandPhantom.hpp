#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb70
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Mirage_SandPhantom : public server::CCitadelBaseAbility
    {
    public:
        // m_vecVictimModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecVictimModifiers;
        char m_vecVictimModifiers[0x18]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xb00[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_SandPhantom because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_SandPhantom) == 0xb70);
};
