#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1498
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    #pragma pack(push, 1)
    class C_NPC_Boss_Tier2 : public client::C_AI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1460[0x8]; // 0x1460
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x1468        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutStart; // 0x146c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutEnd; // 0x1470        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBossTargetedEnemyChanged"
        // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTargetedEnemy;
        char m_hTargetedEnemy[0x4]; // 0x1474        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnLookTargetChanged"
        Vector m_vecElectricBeamLookTarget; // 0x1478        
        [[maybe_unused]] std::uint8_t pad_0x1484[0xc]; // 0x1484
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnElectricBeamCastsChanged"
        int32_t m_nElectricBeamCasts; // 0x1490        
        [[maybe_unused]] std::uint8_t pad_0x1494[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_Boss_Tier2 because it is not a standard-layout class
    static_assert(sizeof(C_NPC_Boss_Tier2) == 0x1498);
};
