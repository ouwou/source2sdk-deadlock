#pragma once
#include "source2sdk/server/CAI_NPC_TrooperVData.hpp"
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
    // Size: 0x1698
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBossVData : public server::CAI_NPC_TrooperVData
    {
    public:
        bool m_bMitigateDamageFromPlayers; // 0x1658        
        [[maybe_unused]] std::uint8_t pad_0x1659[0x3]; // 0x1659
        float m_flPlayerAutoAttackRange; // 0x165c        
        float m_flMinMeleeAttackTime; // 0x1660        
        float m_flInvulRange; // 0x1664        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sAngryStart; // 0x1668        
        CSoundEventName m_sAngryLoop; // 0x1678        
        CSoundEventName m_sAngryStop; // 0x1688        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBossVData) == 0x1698);
};
