#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x1670
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_UtilityUpgrade_AOESmokeBombVData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastCompleteParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastCompleteParticle;
        char m_CastCompleteParticle[0xe0]; // 0x1570        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strBuffGainedSound; // 0x1650        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_InvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_InvisModifier;
        char m_InvisModifier[0x10]; // 0x1660        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_AOESmokeBombVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_UtilityUpgrade_AOESmokeBombVData) == 0x1670);
};
