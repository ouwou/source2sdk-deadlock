#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x1988
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
        char m_ExplodeParticle[0xe0]; // 0x1548        
        // m_BurrowStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowStartParticle;
        char m_BurrowStartParticle[0xe0]; // 0x1628        
        // m_BurrowEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowEndParticle;
        char m_BurrowEndParticle[0xe0]; // 0x1708        
        // m_BurrowInGroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowInGroundParticle;
        char m_BurrowInGroundParticle[0xe0]; // 0x17e8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BurrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BurrowModifier;
        char m_BurrowModifier[0x10]; // 0x18c8        
        // m_SpinModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SpinModifier;
        char m_SpinModifier[0x10]; // 0x18d8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strBurrowEndSound; // 0x18e8        
        // metadata: MPropertyStartGroup "+Burrow Properties"
        float m_flChannelEndEnemyPopUpForce; // 0x18f8        
        float m_flChannelEndEnemyPopUpCylinderHeight; // 0x18fc        
        // metadata: MPropertyDescription "Spin Camera Controller that matches the modifier for client"
        client::CitadelCameraOperationsSequence_t m_cameraSpinStart; // 0x1900        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_BurrowVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_BurrowVData) == 0x1988);
};
