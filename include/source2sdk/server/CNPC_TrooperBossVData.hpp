#pragma once
#include "source2sdk/server/CAI_NPC_TrooperVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1668
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBossVData : public server::CAI_NPC_TrooperVData
    {
    public:
        bool m_bMitigateDamageFromPlayers; // 0x15f8        
        bool m_bBarracksGuardian; // 0x15f9        
        [[maybe_unused]] std::uint8_t pad_0x15fa[0x2]; // 0x15fa
        float m_flPlayerAutoAttackRange; // 0x15fc        
        float m_flMinMeleeAttackTime; // 0x1600        
        [[maybe_unused]] std::uint8_t pad_0x1604[0x4]; // 0x1604
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x1608        
        // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier;
        char m_BackdoorBulletResistModifier[0x10]; // 0x1618        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1628        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sAngryStart; // 0x1638        
        CSoundEventName m_sAngryLoop; // 0x1648        
        CSoundEventName m_sAngryStop; // 0x1658        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_TrooperBossVData) == 0x1668);
};
