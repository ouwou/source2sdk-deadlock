#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
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
    // Size: 0xd78
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
    // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
    // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
    #pragma pack(push, 1)
    class C_AI_BaseNPC : public client::C_BaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xd70        
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xd74        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xd75        
        [[maybe_unused]] std::uint8_t pad_0xd76[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_AI_BaseNPC because it is not a standard-layout class
    static_assert(sizeof(C_AI_BaseNPC) == 0xd78);
};
