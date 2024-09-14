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
    class CCitadelBulletTimeWarp;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x180
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TimeWall_Aura : public server::CCitadelModifierAura
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xe0[0x70]; // 0xe0
        // m_vecTimeWarps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CCitadelBulletTimeWarp>> m_vecTimeWarps;
        char m_vecTimeWarps[0x18]; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x168[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TimeWall_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TimeWall_Aura) == 0x180);
};
