#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1560
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityVacuumVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_VacuumAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_VacuumAuraModifier;
        char m_VacuumAuraModifier[0x10]; // 0x1540        
        // metadata: MPropertyStartGroup "+Vacuum Properties"
        float m_flAirSpeedMax; // 0x1550        
        float m_flFallSpeedMax; // 0x1554        
        float m_flAirDrag; // 0x1558        
        float m_flMaxMovespeed; // 0x155c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityVacuumVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityVacuumVData) == 0x1560);
};
