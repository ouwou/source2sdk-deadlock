#pragma once
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAI.hpp"
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
    // Size: 0xd60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    #pragma pack(push, 1)
    class CNPC_TeslaCoil : public server::CNPC_SimpleAnimatingAI
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xd48[0x4]; // 0xd48
        float m_flDeployTime; // 0xd4c        
        [[maybe_unused]] std::uint8_t pad_0xd50[0x10];
        
        // Datamap fields:
        // float m_flLifeTime; // 0xd54
        // void m_flSpawnTime; // 0xd50
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TeslaCoil because it is not a standard-layout class
    static_assert(sizeof(CNPC_TeslaCoil) == 0xd60);
};
