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
    // Size: 0x1638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_StaticChargeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1548        
        // metadata: MPropertyGroupName "Modifiers"
        // m_StaticChargeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_StaticChargeModifier;
        char m_StaticChargeModifier[0x10]; // 0x1628        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StaticChargeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StaticChargeVData) == 0x1638);
};
