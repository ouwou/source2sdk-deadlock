#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCitadelModifier;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Unstoppable : public client::CCitadelModifier
    {
    public:
        // m_vecCheckedModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CCitadelModifier*> m_vecCheckedModifiers;
        char m_vecCheckedModifiers[0x18]; // 0xc0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Unstoppable because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Unstoppable) == 0xd8);
};
