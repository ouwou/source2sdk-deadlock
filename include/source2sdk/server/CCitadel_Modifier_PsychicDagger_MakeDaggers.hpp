#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t.hpp"
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
    // Size: 0x390
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_PsychicDagger_MakeDaggers : public server::CCitadelModifier
    {
    public:
        int32_t m_iCurrentProjectile; // 0xc0        
        int32_t m_nDaggerCount; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x230]; // 0xc8
        entity2::GameTime_t m_flLastDaggerSpawn; // 0x2f8        
        entity2::GameTime_t m_flLastDaggerShoot; // 0x2fc        
        bool m_bIsSpawning; // 0x300        
        bool m_bInterrupted; // 0x301        
        [[maybe_unused]] std::uint8_t pad_0x302[0x6]; // 0x302
        // m_vecDaggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t> m_vecDaggers;
        char m_vecDaggers[0x18]; // 0x308        
        [[maybe_unused]] std::uint8_t pad_0x320[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PsychicDagger_MakeDaggers because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_PsychicDagger_MakeDaggers) == 0x390);
};
