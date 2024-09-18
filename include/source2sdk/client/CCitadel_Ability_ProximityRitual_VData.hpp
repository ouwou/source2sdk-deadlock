#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x1ac0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_UnitTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle;
        char m_UnitTargetParticle[0xe0]; // 0x1540        
        // m_PredatoryStatueModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel;
        char m_PredatoryStatueModel[0xe0]; // 0x1620        
        // m_CatReappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle;
        char m_CatReappearParticle[0xe0]; // 0x1700        
        // m_CatDisappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatDisappearParticle;
        char m_CatDisappearParticle[0xe0]; // 0x17e0        
        // m_CatEyesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle;
        char m_CatEyesParticle[0xe0]; // 0x18c0        
        // m_CatSummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatSummonParticle;
        char m_CatSummonParticle[0xe0]; // 0x19a0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRecallSound; // 0x1a80        
        CSoundEventName m_strKilledSound; // 0x1a90        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PredatoryStatueModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PredatoryStatueModifier;
        char m_PredatoryStatueModifier[0x10]; // 0x1aa0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flHeavyMeleeDmg; // 0x1ab0        
        float m_flLightMeleeDmg; // 0x1ab4        
        float m_flAbilityDamageScale; // 0x1ab8        
        float m_flNPCDamageMax; // 0x1abc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ProximityRitual_VData) == 0x1ac0);
};
