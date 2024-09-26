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
    // Size: 0x1810
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_MobileResupplyVData : public server::CitadelAbilityVData
    {
    public:
        float m_flResupplyForceScale; // 0x1548        
        float m_flResupplyUp; // 0x154c        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strKilledSound; // 0x1550        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_AuraModifier;
        char m_AuraModifier[0x10]; // 0x1560        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DispenserModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_DispenserModel;
        char m_DispenserModel[0xe0]; // 0x1570        
        // m_SprayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprayParticle;
        char m_SprayParticle[0xe0]; // 0x1650        
        // m_DestroyedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyedParticle;
        char m_DestroyedParticle[0xe0]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_MobileResupplyVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_MobileResupplyVData) == 0x1810);
};
