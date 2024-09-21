#pragma once
#include "source2sdk/client/C_NPC_SimpleAnimatingAI.hpp"
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
    // Size: 0xb60
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "Vector m_vecUnitStatusOffset"
    #pragma pack(push, 1)
    class C_NPC_BaseDefenseSentry : public client::C_NPC_SimpleAnimatingAI
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vecUnitStatusOffset; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_BaseDefenseSentry because it is not a standard-layout class
    static_assert(sizeof(C_NPC_BaseDefenseSentry) == 0xb60);
};
