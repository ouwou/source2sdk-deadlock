#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
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
    // Size: 0x17a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_IceBeamVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
        char m_BeamParticle[0xe0]; // 0x1568        
        // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
        char m_HitParticle[0xe0]; // 0x1648        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1728        
        // m_BuildupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildupModifier;
        char m_BuildupModifier[0x10]; // 0x1738        
        // m_BuildupProcModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuildupProcModifier;
        char m_BuildupProcModifier[0x10]; // 0x1748        
        // metadata: MPropertyStartGroup "Sound"
        CSoundEventName m_BeamStartSound; // 0x1758        
        CSoundEventName m_BeamStopSound; // 0x1768        
        CSoundEventName m_BeamPointStartLoopSound; // 0x1778        
        CSoundEventName m_BeamPointEndLoopSound; // 0x1788        
        CSoundEventName m_BeamPointClosestLoopSound; // 0x1798        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IceBeamVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IceBeamVData) == 0x17a8);
};
