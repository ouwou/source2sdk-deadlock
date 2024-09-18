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
    // Size: 0x1650
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityLightningBallVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ZapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ZapModifier;
        char m_ZapModifier[0x10]; // 0x1540        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHitSound; // 0x1550        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strProjectileLoopingSound; // 0x1560        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ZapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapParticle;
        char m_ZapParticle[0xe0]; // 0x1570        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLightningBallVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityLightningBallVData) == 0x1650);
};
