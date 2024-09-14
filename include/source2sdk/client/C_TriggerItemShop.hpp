#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x840
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszSoundName"
    #pragma pack(push, 1)
    class C_TriggerItemShop : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSoundName; // 0x838        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerItemShop because it is not a standard-layout class
    static_assert(sizeof(C_TriggerItemShop) == 0x840);
};
