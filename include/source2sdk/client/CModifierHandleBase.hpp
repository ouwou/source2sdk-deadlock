#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "uint64 m_hStableHandle"
    #pragma pack(push, 1)
    class CModifierHandleBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "modifier_handle"
        uint64_t m_hStableHandle; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8];
        
        // Datamap fields:
        // void CModifierHandleBase; // 0x0
        // void m_hRuntimeListHandle; // 0x10
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModifierHandleBase, m_hStableHandle) == 0x8);
    
    static_assert(sizeof(CModifierHandleBase) == 0x18);
};
