#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x7d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Killing_Blow_GlowVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ShivOnlyDeathStatus has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShivOnlyDeathStatus;
        char m_ShivOnlyDeathStatus[0xe0]; // 0x5f8        
        // m_ShivOnlyDeathTrail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShivOnlyDeathTrail;
        char m_ShivOnlyDeathTrail[0xe0]; // 0x6d8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strShivOnlyActivateSound; // 0x7b8        
        CSoundEventName m_strShivOnlyLoopSound; // 0x7c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Killing_Blow_GlowVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Killing_Blow_GlowVData) == 0x7d8);
};
