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
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    #pragma pack(push, 1)
    class C_NPC_FieldSentry : public client::C_NPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb50[0x4]; // 0xb50
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xb54        
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_FieldSentry because it is not a standard-layout class
    static_assert(sizeof(C_NPC_FieldSentry) == 0xb60);
};
