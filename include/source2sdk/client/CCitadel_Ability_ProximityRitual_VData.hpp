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
    // Size: 0x16d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual_VData : public client::CitadelAbilityVData
    {
    public:
        float m_flThinkInterval; // 0x14f0        
        [[maybe_unused]] std::uint8_t pad_0x14f4[0x4]; // 0x14f4
        // metadata: MPropertyStartGroup "Visuals"
        // m_UnitTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle;
        char m_UnitTargetParticle[0xe0]; // 0x14f8        
        // m_PredatoryStatueModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel;
        char m_PredatoryStatueModel[0xe0]; // 0x15d8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PredatoryStatueModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PredatoryStatueModifier;
        char m_PredatoryStatueModifier[0x10]; // 0x16b8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flHeavyMeleeDmg; // 0x16c8        
        float m_flLightMeleeDmg; // 0x16cc        
        float m_flAbilityDamageScale; // 0x16d0        
        float m_flNPCDamageMax; // 0x16d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual_VData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_ProximityRitual_VData) == 0x16d8);
};
