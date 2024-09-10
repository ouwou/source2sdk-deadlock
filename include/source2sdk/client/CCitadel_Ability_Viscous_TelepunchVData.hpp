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
    // Size: 0x19c8
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
        char m_PortalParticle[0xe0]; // 0x14f0        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x15d0        
        // m_PunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PunchParticle;
        char m_PunchParticle[0xe0]; // 0x16b0        
        // m_WallPunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallPunchParticle;
        char m_WallPunchParticle[0xe0]; // 0x1790        
        // m_CeilingPunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CeilingPunchParticle;
        char m_CeilingPunchParticle[0xe0]; // 0x1870        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_EnemyPortalSound; // 0x1950        
        CSoundEventName m_SelfPortalSound; // 0x1960        
        CSoundEventName m_WindupSound; // 0x1970        
        CSoundEventName m_PunchSound; // 0x1980        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PunchRollSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PunchRollSlowModifier;
        char m_PunchRollSlowModifier[0x10]; // 0x1990        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x19a0        
        // metadata: MPropertyStartGroup "+Telepunch Parameters"
        float m_flEnemyPortalTelegraphTime; // 0x19b0        
        float m_flSelfPortalTelegraphTime; // 0x19b4        
        float m_flWindupTime; // 0x19b8        
        float m_flAttackTime; // 0x19bc        
        float m_flGroundTraceOnPlayerHitDistance; // 0x19c0        
        float m_flPlayerCheckSphereRadius; // 0x19c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Viscous_TelepunchVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Viscous_TelepunchVData) == 0x19c8);
};
