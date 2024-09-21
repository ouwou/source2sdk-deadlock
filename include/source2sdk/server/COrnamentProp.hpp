#pragma once
#include "source2sdk/server/CDynamicProp.hpp"
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
    // Size: 0xc60
    // Has VTable
    #pragma pack(push, 1)
    class COrnamentProp : public server::CDynamicProp
    {
    public:
        CUtlSymbolLarge m_initialOwner; // 0xc58        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetAttached; // 0x0
        // void InputDetach; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in COrnamentProp because it is not a standard-layout class
    static_assert(sizeof(COrnamentProp) == 0xc60);
};
