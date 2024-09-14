#pragma once
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelModifier;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_UltCombo_Target : public server::CCitadel_Modifier_Stunned
    {
    public:
        QAngle m_angles; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4]; // 0xd4
        server::CCitadelModifier* m_pAttachmentModifier; // 0xd8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_UltCombo_Target because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_UltCombo_Target) == 0xe0);
};
