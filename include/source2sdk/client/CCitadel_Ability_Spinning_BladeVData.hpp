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
    // Size: 0x1760
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Spinning_BladeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1540        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CatchIndicator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatchIndicator;
        char m_CatchIndicator[0xe0]; // 0x1550        
        // m_CatchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatchParticle;
        char m_CatchParticle[0xe0]; // 0x1630        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strThrowSound; // 0x1710        
        CSoundEventName m_strReturnSound; // 0x1720        
        CSoundEventName m_strCatchSound; // 0x1730        
        CSoundEventName m_strFailSound; // 0x1740        
        CSoundEventName m_strHitSound; // 0x1750        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Spinning_BladeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Spinning_BladeVData) == 0x1760);
};
