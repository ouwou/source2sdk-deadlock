#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChargeDragEnemy : public client::CCitadelModifier
    {
    public:
        QAngle m_qRelativeOffset; // 0xc0        
        float m_flRelativeDist; // 0xcc        
        float m_flMaxDist; // 0xd0        
        Vector m_vecOffsetDir; // 0xd4        
        Vector m_vecStartPosition; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChargeDragEnemy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChargeDragEnemy) == 0xf0);
};
