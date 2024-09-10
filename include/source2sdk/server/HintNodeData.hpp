#pragma once
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/server/HintIgnoreFacing_t.hpp"
#include "source2sdk/server/HintPriority_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class HintNodeData
    {
    public:
        CUtlSymbolLarge strEntityName; // 0x0        
        int16_t nHintType; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2]; // 0xa
        int32_t nNodeID; // 0xc        
        CUtlSymbolLarge strGroup; // 0x10        
        int32_t iDisabled; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        CUtlSymbolLarge iszGenericType; // 0x20        
        server::HintIgnoreFacing_t fIgnoreFacing; // 0x28        
        client::NPC_STATE minState; // 0x2c        
        client::NPC_STATE maxState; // 0x30        
        int32_t nRadius; // 0x34        
        server::HintPriority_t ePriority; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HintNodeData, strEntityName) == 0x0);
    static_assert(offsetof(HintNodeData, nHintType) == 0x8);
    static_assert(offsetof(HintNodeData, nNodeID) == 0xc);
    static_assert(offsetof(HintNodeData, strGroup) == 0x10);
    static_assert(offsetof(HintNodeData, iDisabled) == 0x18);
    static_assert(offsetof(HintNodeData, iszGenericType) == 0x20);
    static_assert(offsetof(HintNodeData, fIgnoreFacing) == 0x28);
    static_assert(offsetof(HintNodeData, minState) == 0x2c);
    static_assert(offsetof(HintNodeData, maxState) == 0x30);
    static_assert(offsetof(HintNodeData, nRadius) == 0x34);
    static_assert(offsetof(HintNodeData, ePriority) == 0x38);
    
    static_assert(sizeof(HintNodeData) == 0x40);
};
