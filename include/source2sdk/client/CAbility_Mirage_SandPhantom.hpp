#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    #pragma pack(push, 1)
    class CAbility_Mirage_SandPhantom : public client::C_CitadelBaseAbility
    {
    public:
        // m_vecVictimModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<client::CCitadelModifier>> m_vecVictimModifiers;
        char m_vecVictimModifiers[0x18]; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc90[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_SandPhantom because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_SandPhantom) == 0xd00);
};
