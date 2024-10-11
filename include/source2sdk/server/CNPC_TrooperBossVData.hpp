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
    // Size: 0x16a0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBossVData : public server::CAI_NPC_TrooperVData
    {
    public:
        bool m_bMitigateDamageFromPlayers; // 0x1630        
        bool m_bBarracksGuardian; // 0x1631        
        [[maybe_unused]] std::uint8_t pad_0x1632[0x2]; // 0x1632
        float m_flPlayerAutoAttackRange; // 0x1634        
        float m_flMinMeleeAttackTime; // 0x1638        
        float m_flInvulRange; // 0x163c        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x1640        
        // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier;
        char m_BackdoorBulletResistModifier[0x10]; // 0x1650        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1660        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sAngryStart; // 0x1670        
        CSoundEventName m_sAngryLoop; // 0x1680        
        CSoundEventName m_sAngryStop; // 0x1690        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBossVData) == 0x16a0);
};
