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
    // Size: 0x18a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_BurrowVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x14f0        
        // m_BurrowStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowStartParticle;
        char m_BurrowStartParticle[0xe0]; // 0x15d0        
        // m_BurrowEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowEndParticle;
        char m_BurrowEndParticle[0xe0]; // 0x16b0        
        // m_BurrowInGroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowInGroundParticle;
        char m_BurrowInGroundParticle[0xe0]; // 0x1790        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BurrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BurrowModifier;
        char m_BurrowModifier[0x10]; // 0x1870        
        // m_SpinModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SpinModifier;
        char m_SpinModifier[0x10]; // 0x1880        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strBurrowEndSound; // 0x1890        
        // metadata: MPropertyStartGroup "+Burrow Properties"
        float m_flChannelEndEnemyPopUpForce; // 0x18a0        
        float m_flChannelEndEnemyPopUpCylinderHeight; // 0x18a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_BurrowVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_BurrowVData) == 0x18a8);
};
