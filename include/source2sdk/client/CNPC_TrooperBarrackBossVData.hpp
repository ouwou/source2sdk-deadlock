#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CNPC_TrooperBossVData.hpp"
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
    class CNPC_TrooperBarrackBossVData : public client::CNPC_TrooperBossVData
    {
    public:
        float m_flBackDoorProtectionRange; // 0x1698        
        [[maybe_unused]] std::uint8_t pad_0x169c[0x4]; // 0x169c
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x16a0        
        // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BackdoorBulletResistModifier;
        char m_BackdoorBulletResistModifier[0x10]; // 0x16b0        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x16c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBarrackBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBarrackBossVData) == 0x16d0);
};
