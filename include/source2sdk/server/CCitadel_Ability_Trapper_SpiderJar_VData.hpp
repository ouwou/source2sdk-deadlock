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
    // Size: 0x1738
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Trapper_SpiderJar_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SpiderExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpiderExplodeParticle;
        char m_SpiderExplodeParticle[0xe0]; // 0x1568        
        // m_JarExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JarExplodeParticle;
        char m_JarExplodeParticle[0xe0]; // 0x1648        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SpiritStealDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SpiritStealDebuffModifier;
        char m_SpiritStealDebuffModifier[0x10]; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Trapper_SpiderJar_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Trapper_SpiderJar_VData) == 0x1738);
};
