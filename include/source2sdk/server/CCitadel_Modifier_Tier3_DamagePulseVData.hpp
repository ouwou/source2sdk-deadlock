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
    // Size: 0x6f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Tier3_DamagePulseVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle;
        char m_TargetParticle[0xe0]; // 0x5f8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strPulseTickSound; // 0x6d8        
        // metadata: MPropertyStartGroup "Gameplay"
        int32_t m_iMaxTargets; // 0x6e8        
        float m_flRadius; // 0x6ec        
        float m_flDamagePerPulse; // 0x6f0        
        float m_flTickRate; // 0x6f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Tier3_DamagePulseVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Tier3_DamagePulseVData) == 0x6f8);
};
