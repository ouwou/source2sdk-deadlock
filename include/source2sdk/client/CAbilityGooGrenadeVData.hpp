#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1750
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityGooGrenadeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GooGrenadeImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GooGrenadeImpactModifier;
        char m_GooGrenadeImpactModifier[0x10]; // 0x1548        
        // m_GooGrenadePuddleAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GooGrenadePuddleAuraModifier;
        char m_GooGrenadePuddleAuraModifier[0x10]; // 0x1558        
        // metadata: MPropertyStartGroup "Particles"
        // m_GooGrenadeSkipParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle;
        char m_GooGrenadeSkipParticle[0xe0]; // 0x1568        
        // m_GooGrenadeExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle;
        char m_GooGrenadeExplodeParticle[0xe0]; // 0x1648        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_GrenadeHitImpactSound; // 0x1728        
        CSoundEventName m_GrenadeMissImpactSound; // 0x1738        
        // metadata: MPropertyStartGroup "BounceSettings"
        float m_flMinRestitution; // 0x1748        
        float m_flMaxRestitution; // 0x174c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityGooGrenadeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityGooGrenadeVData) == 0x1750);
};
