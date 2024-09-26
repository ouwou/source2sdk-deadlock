#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"
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
    // Size: 0x14e8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
    // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
    #pragma pack(push, 1)
    class C_NPC_Boss_Tier3 : public client::C_AI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x14a0        
        [[maybe_unused]] std::uint8_t pad_0x14a4[0x4]; // 0x14a4
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnT3Targeting1Changed"
        QAngle m_angTargeting1; // 0x14a8        
        [[maybe_unused]] std::uint8_t pad_0x14b4[0xc]; // 0x14b4
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnT3Targeting2Changed"
        QAngle m_angTargeting2; // 0x14c0        
        [[maybe_unused]] std::uint8_t pad_0x14cc[0xc]; // 0x14cc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
        int32_t m_nElectricBeamCasts; // 0x14d8        
        // metadata: MNetworkEnable
        client::ETier3State_t m_eAliveState; // 0x14dc        
        // metadata: MNetworkEnable
        client::ETier3Phase_t m_ePhase; // 0x14e0        
        [[maybe_unused]] std::uint8_t pad_0x14e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_Boss_Tier3 because it is not a standard-layout class
    static_assert(sizeof(C_NPC_Boss_Tier3) == 0x14e8);
};
