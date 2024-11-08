#pragma once
#include "source2sdk/client/CAI_NPC_TrooperVData.hpp"
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
    // Size: 0x16d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBossVData : public client::CAI_NPC_TrooperVData
    {
    public:
        bool m_bMitigateDamageFromPlayers; // 0x1690        
        [[maybe_unused]] std::uint8_t pad_0x1691[0x3]; // 0x1691
        float m_flPlayerAutoAttackRange; // 0x1694        
        float m_flMinMeleeAttackTime; // 0x1698        
        float m_flInvulRange; // 0x169c        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sAngryStart; // 0x16a0        
        CSoundEventName m_sAngryLoop; // 0x16b0        
        CSoundEventName m_sAngryStop; // 0x16c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBossVData) == 0x16d0);
};
