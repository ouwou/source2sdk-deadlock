#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has VTable
    #pragma pack(push, 1)
    class INavSmartGoal
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hNPC;
        char m_hNPC[0x4]; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(INavSmartGoal, m_hNPC) == 0x8);
    
    static_assert(sizeof(INavSmartGoal) == 0x10);
};
