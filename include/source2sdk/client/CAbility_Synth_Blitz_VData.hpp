#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x1658
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Synth_Blitz_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BlitzModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BlitzModifier;
        char m_BlitzModifier[0x10]; // 0x1548        
        // m_TechAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TechAmpModifier;
        char m_TechAmpModifier[0x10]; // 0x1558        
        // metadata: MPropertyStartGroup "Visuals"
        // m_SlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlowParticle;
        char m_SlowParticle[0xe0]; // 0x1568        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strProcSound; // 0x1648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Blitz_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Blitz_VData) == 0x1658);
};
