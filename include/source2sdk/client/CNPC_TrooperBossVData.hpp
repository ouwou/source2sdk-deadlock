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
    // Size: 0x17f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBossVData : public client::CAI_NPC_TrooperVData
    {
    public:
        bool m_bMitigateDamageFromPlayers; // 0x17b8        
        [[maybe_unused]] std::uint8_t pad_0x17b9[0x3]; // 0x17b9
        float m_flPlayerAutoAttackRange; // 0x17bc        
        float m_flMinMeleeAttackTime; // 0x17c0        
        float m_flInvulRange; // 0x17c4        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sAngryStart; // 0x17c8        
        CSoundEventName m_sAngryLoop; // 0x17d8        
        CSoundEventName m_sAngryStop; // 0x17e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBossVData) == 0x17f8);
};
