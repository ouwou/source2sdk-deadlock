#pragma once
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"
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
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_QuickSilver_Watcher : public server::CCitadel_Modifier_BaseEventProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x170[0xa8]; // 0x170
        bool m_bProcNextHit; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x219[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_QuickSilver_Watcher because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_QuickSilver_Watcher) == 0x220);
};
