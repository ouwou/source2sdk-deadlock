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
    // Size: 0x1748
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityGooGrenadeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GooGrenadeImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GooGrenadeImpactModifier;
        char m_GooGrenadeImpactModifier[0x10]; // 0x1540        
        // m_GooGrenadePuddleAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GooGrenadePuddleAuraModifier;
        char m_GooGrenadePuddleAuraModifier[0x10]; // 0x1550        
        // metadata: MPropertyStartGroup "Particles"
        // m_GooGrenadeSkipParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle;
        char m_GooGrenadeSkipParticle[0xe0]; // 0x1560        
        // m_GooGrenadeExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle;
        char m_GooGrenadeExplodeParticle[0xe0]; // 0x1640        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_GrenadeHitImpactSound; // 0x1720        
        CSoundEventName m_GrenadeMissImpactSound; // 0x1730        
        // metadata: MPropertyStartGroup "BounceSettings"
        float m_flMinRestitution; // 0x1740        
        float m_flMaxRestitution; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityGooGrenadeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityGooGrenadeVData) == 0x1748);
};
