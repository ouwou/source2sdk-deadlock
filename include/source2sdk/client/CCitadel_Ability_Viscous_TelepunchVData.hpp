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
    // Size: 0x1a00
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Viscous_TelepunchVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_PortalParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PortalParticle;
        char m_PortalParticle[0xe0]; // 0x1528        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1608        
        // m_PunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PunchParticle;
        char m_PunchParticle[0xe0]; // 0x16e8        
        // m_WallPunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallPunchParticle;
        char m_WallPunchParticle[0xe0]; // 0x17c8        
        // m_CeilingPunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CeilingPunchParticle;
        char m_CeilingPunchParticle[0xe0]; // 0x18a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_EnemyPortalSound; // 0x1988        
        CSoundEventName m_SelfPortalSound; // 0x1998        
        CSoundEventName m_WindupSound; // 0x19a8        
        CSoundEventName m_PunchSound; // 0x19b8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PunchRollSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PunchRollSlowModifier;
        char m_PunchRollSlowModifier[0x10]; // 0x19c8        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x19d8        
        // metadata: MPropertyStartGroup "+Telepunch Parameters"
        float m_flEnemyPortalTelegraphTime; // 0x19e8        
        float m_flSelfPortalTelegraphTime; // 0x19ec        
        float m_flWindupTime; // 0x19f0        
        float m_flAttackTime; // 0x19f4        
        float m_flGroundTraceOnPlayerHitDistance; // 0x19f8        
        float m_flPlayerCheckSphereRadius; // 0x19fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Viscous_TelepunchVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Viscous_TelepunchVData) == 0x1a00);
};
