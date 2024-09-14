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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ColdFrontAOE : public server::CCitadelModifier
    {
    public:
        // m_vecDamagedTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CBaseEntity*> m_vecDamagedTargets;
        char m_vecDamagedTargets[0x18]; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xd8[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ColdFrontAOE because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ColdFrontAOE) == 0x1b8);
};
