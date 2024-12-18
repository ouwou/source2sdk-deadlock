#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x9c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_PetrifyVData : public server::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DebuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffParticle;
        char m_DebuffParticle[0xe0]; // 0x710        
        // m_BuffStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffStartParticle;
        char m_BuffStartParticle[0xe0]; // 0x7f0        
        // m_BuffEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffEndParticle;
        char m_BuffEndParticle[0xe0]; // 0x8d0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PostSleepModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PostSleepModifier;
        char m_PostSleepModifier[0x10]; // 0x9b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PetrifyVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_PetrifyVData) == 0x9c0);
};
