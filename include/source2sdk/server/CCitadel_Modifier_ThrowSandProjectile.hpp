#pragma once
#include "source2sdk/server/CCitadel_Modifier_Intrinsic_Base.hpp"
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
    // Size: 0x190
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ThrowSandProjectile : public server::CCitadel_Modifier_Intrinsic_Base
    {
    public:
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xd8[0xa8]; // 0xd8
        Vector m_vInitialCastPosition; // 0x180        
        [[maybe_unused]] std::uint8_t pad_0x18c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ThrowSandProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ThrowSandProjectile) == 0x190);
};
