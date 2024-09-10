#pragma once
#include "source2sdk/client/SquadSlotId_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SquadModeInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // m_vecSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotId_t> m_vecSlots;
        char m_vecSlots[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SquadModeInfo_t, m_vecSlots) == 0x10);
    
    static_assert(sizeof(SquadModeInfo_t) == 0x28);
};
