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
    // Size: 0x1718
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityLashFlogVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_FlogParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlogParticle;
        char m_FlogParticle[0xe0]; // 0x1548        
        // metadata: MPropertyGroupName "Visuals"
        // m_FlogLifeLeachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlogLifeLeachParticle;
        char m_FlogLifeLeachParticle[0xe0]; // 0x1628        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FlogDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_FlogDebuffModifier;
        char m_FlogDebuffModifier[0x10]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashFlogVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityLashFlogVData) == 0x1718);
};
