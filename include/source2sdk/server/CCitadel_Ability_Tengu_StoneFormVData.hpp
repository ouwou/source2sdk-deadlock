#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0x1930
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_StoneFormVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1560        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x1640        
        // m_StoneFormParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StoneFormParticle;
        char m_StoneFormParticle[0xe0]; // 0x1720        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_CastTargetSound; // 0x1800        
        CSoundEventName m_strImpactSound; // 0x1810        
        CSoundEventName m_strFallCollideImpactSound; // 0x1820        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_DragModifier;
        char m_DragModifier[0x10]; // 0x1830        
        // metadata: MPropertyDescription "Model"
        // m_strTrueFormModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strTrueFormModel;
        char m_strTrueFormModel[0xe0]; // 0x1840        
        // metadata: MPropertyStartGroup "+Stone Form Params"
        float m_flLandHoldTime; // 0x1920        
        float m_flRisingTime; // 0x1924        
        float m_flCollideRadius; // 0x1928        
        [[maybe_unused]] std::uint8_t pad_0x192c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneFormVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_StoneFormVData) == 0x1930);
};
