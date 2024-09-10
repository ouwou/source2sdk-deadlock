#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x7c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TechCleaveVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_CleavePlayerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CleavePlayerParticle;
        char m_CleavePlayerParticle[0xe0]; // 0x5f8        
        // m_CleaveTrooperParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CleaveTrooperParticle;
        char m_CleaveTrooperParticle[0xe0]; // 0x6d8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sVictimSound; // 0x7b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TechCleaveVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_TechCleaveVData) == 0x7c8);
};