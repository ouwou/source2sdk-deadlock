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
    class CCitadel_CatAnimating;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelModifier_CatTarget : public server::CCitadelModifier
    {
    public:
        // m_hCat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_CatAnimating> m_hCat;
        char m_hCat[0x4]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifier_CatTarget because it is not a standard-layout class
    
    static_assert(sizeof(CCitadelModifier_CatTarget) == 0x108);
};
