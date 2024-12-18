#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
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
    // Size: 0x1788
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelAbilityTangoTetherVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_TetherModifier;
        char m_TetherModifier[0x10]; // 0x1568        
        // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_GrappleTargetModifier;
        char m_GrappleTargetModifier[0x10]; // 0x1578        
        // metadata: MPropertyStartGroup "Visuals"
        // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
        char m_BulletGrappleTracerParticle[0xe0]; // 0x1588        
        // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
        char m_EnemyGrappleParticle[0xe0]; // 0x1668        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDamageTarget; // 0x1748        
        CSoundEventName m_strGrappleHitTarget; // 0x1758        
        CSoundEventName m_strGrappleHitWorld; // 0x1768        
        CSoundEventName m_strGrappleHitNothing; // 0x1778        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityTangoTetherVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityTangoTetherVData) == 0x1788);
};
