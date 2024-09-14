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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x160
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChargeDragEnemy : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70]; // 0xc0
        QAngle m_qRelativeOffset; // 0x130        
        float m_flRelativeDist; // 0x13c        
        float m_flMaxDist; // 0x140        
        Vector m_vecOffsetDir; // 0x144        
        Vector m_vecStartPosition; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x15c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChargeDragEnemy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChargeDragEnemy) == 0x160);
};
