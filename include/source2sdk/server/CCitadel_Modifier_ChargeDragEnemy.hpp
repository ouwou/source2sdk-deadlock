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
    // Size: 0x168
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChargeDragEnemy : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        QAngle m_qRelativeOffset; // 0x138        
        float m_flRelativeDist; // 0x144        
        float m_flMaxDist; // 0x148        
        Vector m_vecOffsetDir; // 0x14c        
        Vector m_vecStartPosition; // 0x158        
        [[maybe_unused]] std::uint8_t pad_0x164[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChargeDragEnemy because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ChargeDragEnemy) == 0x168);
};
