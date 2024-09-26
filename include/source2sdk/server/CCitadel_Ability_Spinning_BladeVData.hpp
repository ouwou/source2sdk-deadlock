#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1768
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Spinning_BladeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1548        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CatchIndicator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatchIndicator;
        char m_CatchIndicator[0xe0]; // 0x1558        
        // m_CatchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatchParticle;
        char m_CatchParticle[0xe0]; // 0x1638        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strThrowSound; // 0x1718        
        CSoundEventName m_strReturnSound; // 0x1728        
        CSoundEventName m_strCatchSound; // 0x1738        
        CSoundEventName m_strFailSound; // 0x1748        
        CSoundEventName m_strHitSound; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Spinning_BladeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Spinning_BladeVData) == 0x1768);
};
