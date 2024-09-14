#pragma once
#include "source2sdk/server/CRulePointEntity.hpp"
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
    // Size: 0x790
    // Has VTable
    #pragma pack(push, 1)
    class CGamePlayerEquip : public server::CRulePointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x778[0x18];
        // Datamap fields:
        // CUtlString weapon%d[32]; // 0x7fffffff
        // void InputTriggerForAllPlayers; // 0x0
        // CUtlSymbolLarge InputTriggerForActivatedPlayer; // 0x0
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CGamePlayerEquip) == 0x790);
};
