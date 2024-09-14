#pragma once
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
    class CCitadelModifier;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Unstoppable : public server::CCitadelModifier
    {
    public:
        // m_vecCheckedModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CCitadelModifier*> m_vecCheckedModifiers;
        char m_vecCheckedModifiers[0x18]; // 0xc0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Unstoppable because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Unstoppable) == 0xd8);
};
