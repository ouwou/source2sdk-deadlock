#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x768
    // Has VTable
    #pragma pack(push, 1)
    class CConditionalCollidable : public server::CBaseModelEntity
    {
    public:
        // Datamap fields:
        // CUtlSymbolLarge interactAs; // 0x7fffffff
        // CUtlSymbolLarge interactWith; // 0x7fffffff
        // CUtlSymbolLarge interactExclude; // 0x7fffffff
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CConditionalCollidable) == 0x768);
};
