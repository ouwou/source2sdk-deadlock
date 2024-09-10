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
    class CCitadel_RestorativeGooCube;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x3b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_RestorativeGoo : public server::CCitadelModifier
    {
    public:
        entity2::GameTime_t m_flEarliestBreakoutTime; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x2dc]; // 0xcc
        // m_hGooCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_RestorativeGooCube> m_hGooCube;
        char m_hGooCube[0x4]; // 0x3a8        
        float m_flBreakoutPercentage; // 0x3ac        
        [[maybe_unused]] std::uint8_t pad_0x3b0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RestorativeGoo because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_RestorativeGoo) == 0x3b8);
};
