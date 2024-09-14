#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x948
    // Has VTable
    #pragma pack(push, 1)
    class CTonemapTrigger : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_tonemapControllerName; // 0x938        
        CEntityHandle m_hTonemapController; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x944[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTonemapTrigger because it is not a standard-layout class
    static_assert(sizeof(CTonemapTrigger) == 0x948);
};
