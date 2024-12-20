#pragma once
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
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
    // Size: 0xcb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    #pragma pack(push, 1)
    class C_NPC_ShieldedSentry : public client::C_NPC_SimpleAnimatingAI
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xca0[0x4]; // 0xca0
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xca4        
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xca8        
        [[maybe_unused]] std::uint8_t pad_0xcac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_ShieldedSentry because it is not a standard-layout class
    static_assert(sizeof(C_NPC_ShieldedSentry) == 0xcb0);
};
