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
    // Size: 0x1690
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBossVData : public server::CAI_NPC_TrooperVData
    {
    public:
        bool m_bMitigateDamageFromPlayers; // 0x1620        
        bool m_bBarracksGuardian; // 0x1621        
        [[maybe_unused]] std::uint8_t pad_0x1622[0x2]; // 0x1622
        float m_flPlayerAutoAttackRange; // 0x1624        
        float m_flMinMeleeAttackTime; // 0x1628        
        [[maybe_unused]] std::uint8_t pad_0x162c[0x4]; // 0x162c
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x1630        
        // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier;
        char m_BackdoorBulletResistModifier[0x10]; // 0x1640        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1650        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sAngryStart; // 0x1660        
        CSoundEventName m_sAngryLoop; // 0x1670        
        CSoundEventName m_sAngryStop; // 0x1680        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBossVData) == 0x1690);
};
