#pragma once
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2e0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Camouflage_Invis : public server::CCitadel_Modifier_Invis
    {
    public:
        Vector m_vCastPosition; // 0x260        
        [[maybe_unused]] std::uint8_t pad_0x26c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Camouflage_Invis because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Camouflage_Invis) == 0x2e0);
};
