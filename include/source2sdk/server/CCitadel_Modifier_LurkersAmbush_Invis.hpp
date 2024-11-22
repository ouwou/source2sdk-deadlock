#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Invis.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x290
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_LurkersAmbush_Invis : public server::CCitadel_Modifier_Invis
    {
    public:
        // m_mapStartLookTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<server::CCitadelPlayerPawn*,entity2::GameTime_t> m_mapStartLookTime;
        char m_mapStartLookTime[0x28]; // 0x260        
        entity2::GameTime_t m_flStartSpotted; // 0x288        
        [[maybe_unused]] std::uint8_t pad_0x28c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LurkersAmbush_Invis because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_LurkersAmbush_Invis) == 0x290);
};
