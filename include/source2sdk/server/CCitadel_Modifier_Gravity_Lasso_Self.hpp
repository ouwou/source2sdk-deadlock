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
    // Size: 0x2a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Gravity_Lasso_Self : public server::CCitadelModifier
    {
    public:
        bool m_bHasUsedBouncePad; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x7]; // 0xc1
        // m_vCastTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vCastTargets;
        char m_vCastTargets[0x18]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xe0[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Gravity_Lasso_Self because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Gravity_Lasso_Self) == 0x2a0);
};
