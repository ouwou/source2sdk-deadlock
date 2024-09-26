#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x1ba8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_PredatoryStatueModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel;
        char m_PredatoryStatueModel[0xe0]; // 0x1548        
        // m_CatReappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle;
        char m_CatReappearParticle[0xe0]; // 0x1628        
        // m_CatDisappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatDisappearParticle;
        char m_CatDisappearParticle[0xe0]; // 0x1708        
        // m_CatEyesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle;
        char m_CatEyesParticle[0xe0]; // 0x17e8        
        // m_CatSummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatSummonParticle;
        char m_CatSummonParticle[0xe0]; // 0x18c8        
        // m_CatRecallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatRecallParticle;
        char m_CatRecallParticle[0xe0]; // 0x19a8        
        // m_RecallLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RecallLineParticle;
        char m_RecallLineParticle[0xe0]; // 0x1a88        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRecallSound; // 0x1b68        
        CSoundEventName m_strKilledSound; // 0x1b78        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PredatoryStatueModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PredatoryStatueModifier;
        char m_PredatoryStatueModifier[0x10]; // 0x1b88        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flHeavyMeleeDmg; // 0x1b98        
        float m_flLightMeleeDmg; // 0x1b9c        
        float m_flAbilityDamageScale; // 0x1ba0        
        float m_flNPCDamageScale; // 0x1ba4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ProximityRitual_VData) == 0x1ba8);
};
