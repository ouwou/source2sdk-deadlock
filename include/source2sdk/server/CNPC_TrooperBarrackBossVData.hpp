#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CNPC_TrooperBossVData.hpp"
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
    // Size: 0x1830
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperBarrackBossVData : public server::CNPC_TrooperBossVData
    {
    public:
        float m_flBackDoorProtectionRange; // 0x17f8        
        [[maybe_unused]] std::uint8_t pad_0x17fc[0x4]; // 0x17fc
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x1800        
        // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier;
        char m_BackdoorBulletResistModifier[0x10]; // 0x1810        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1820        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBarrackBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBarrackBossVData) == 0x1830);
};
