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
    // Size: 0x1568
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Chrono_PulseGrenade_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PulseAreaModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PulseAreaModifier;
        char m_PulseAreaModifier[0x10]; // 0x1540        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHitSound; // 0x1550        
        // metadata: MPropertyStartGroup "Misc"
        CUtlString m_strDebuffStatName; // 0x1560        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_PulseGrenade_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Chrono_PulseGrenade_VData) == 0x1568);
};
