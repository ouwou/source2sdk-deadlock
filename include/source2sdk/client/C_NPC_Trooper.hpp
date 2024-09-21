#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x14e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
    // static metadata: MNetworkVarNames "float m_flHealingChargeParticlePct"
    #pragma pack(push, 1)
    class C_NPC_Trooper : public client::C_AI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x1498        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTargetedEnemyChanged"
        // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTargetedEnemy;
        char m_hTargetedEnemy[0x4]; // 0x149c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHealingChargeChanged"
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        float m_flHealingChargeParticlePct; // 0x14a0        
        [[maybe_unused]] std::uint8_t pad_0x14a4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_Trooper because it is not a standard-layout class
    static_assert(sizeof(C_NPC_Trooper) == 0x14e0);
};
