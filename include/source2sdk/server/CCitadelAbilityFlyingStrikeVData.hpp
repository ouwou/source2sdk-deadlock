#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"
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
    // Size: 0x1c00
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelAbilityFlyingStrikeVData : public server::CCitadelYamatoBaseVData
    {
    public:
        // metadata: MPropertyStartGroup "+Cast Properties"
        float m_flJumpFallSpeedMax; // 0x1570        
        float m_flJumpAirDrag; // 0x1574        
        float m_flJumpAirSpeedMax; // 0x1578        
        // metadata: MPropertyStartGroup "+Flying to Target Properties"
        // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
        float m_flOnCancelVerticalSpeedBonus; // 0x157c        
        float m_flFlyingCloseEnoughToTarget; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1584[0x4]; // 0x1584
        CPiecewiseCurve m_curveSpeedScale; // 0x1588        
        // metadata: MPropertyStartGroup "+Attack Properties"
        float m_flAnimToStrikePointTime; // 0x15c8        
        float m_flAnimToStrikeArrivalBias; // 0x15cc        
        // metadata: MPropertyStartGroup "+Grapple Properties"
        float m_flGrappleShotFloatTime; // 0x15d0        
        float m_flGrappleShotDelayToFlyOnHit; // 0x15d4        
        float m_flGrappleSpeed; // 0x15d8        
        [[maybe_unused]] std::uint8_t pad_0x15dc[0x4]; // 0x15dc
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x15e0        
        // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_GrappleTargetModifier;
        char m_GrappleTargetModifier[0x10]; // 0x15f0        
        // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_WeaponBuffModifier;
        char m_WeaponBuffModifier[0x10]; // 0x1600        
        // metadata: MPropertyStartGroup "Visuals"
        // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
        char m_LeapParticle[0xe0]; // 0x1610        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x16f0        
        // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
        char m_SlashParticle[0xe0]; // 0x17d0        
        // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
        char m_BulletGrappleTracerParticle[0xe0]; // 0x18b0        
        // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
        char m_EnemyGrappleParticle[0xe0]; // 0x1990        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDamageTarget; // 0x1a70        
        CSoundEventName m_strStartFlyingToTarget; // 0x1a80        
        CSoundEventName m_strStartAttack; // 0x1a90        
        CSoundEventName m_strGrappleHitTarget; // 0x1aa0        
        CSoundEventName m_strGrappleHitWorld; // 0x1ab0        
        CSoundEventName m_strGrappleHitNothing; // 0x1ac0        
        CSoundEventName m_strGrappleLoop; // 0x1ad0        
        CSoundEventName m_strFlyingLoop; // 0x1ae0        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1af0        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1b78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityFlyingStrikeVData) == 0x1c00);
};
