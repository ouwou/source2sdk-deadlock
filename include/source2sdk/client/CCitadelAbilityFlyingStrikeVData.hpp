#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x1bc0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelAbilityFlyingStrikeVData : public client::CCitadelYamatoBaseVData
    {
    public:
        // metadata: MPropertyStartGroup "+Cast Properties"
        float m_flJumpFallSpeedMax; // 0x1550        
        float m_flJumpAirDrag; // 0x1554        
        float m_flJumpAirSpeedMax; // 0x1558        
        // metadata: MPropertyStartGroup "+Flying to Target Properties"
        // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
        float m_flOnCancelVerticalSpeedBonus; // 0x155c        
        float m_flFlyingCloseEnoughToTarget; // 0x1560        
        [[maybe_unused]] std::uint8_t pad_0x1564[0x4]; // 0x1564
        CPiecewiseCurve m_curveSpeedScale; // 0x1568        
        // metadata: MPropertyStartGroup "+Attack Properties"
        float m_flAnimToStrikePointTime; // 0x15a8        
        float m_flAnimToStrikeArrivalBias; // 0x15ac        
        // metadata: MPropertyStartGroup "+Grapple Properties"
        float m_flGrappleShotFloatTime; // 0x15b0        
        float m_flGrappleShotDelayToFlyOnHit; // 0x15b4        
        float m_flGrappleSpeed; // 0x15b8        
        [[maybe_unused]] std::uint8_t pad_0x15bc[0x4]; // 0x15bc
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x15c0        
        // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_GrappleTargetModifier;
        char m_GrappleTargetModifier[0x10]; // 0x15d0        
        // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_WeaponBuffModifier;
        char m_WeaponBuffModifier[0x10]; // 0x15e0        
        // metadata: MPropertyStartGroup "Visuals"
        // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
        char m_LeapParticle[0xe0]; // 0x15f0        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x16d0        
        // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
        char m_SlashParticle[0xe0]; // 0x17b0        
        // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
        char m_BulletGrappleTracerParticle[0xe0]; // 0x1890        
        // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
        char m_EnemyGrappleParticle[0xe0]; // 0x1970        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDamageTarget; // 0x1a50        
        CSoundEventName m_strStartFlyingToTarget; // 0x1a60        
        CSoundEventName m_strStartAttack; // 0x1a70        
        CSoundEventName m_strGrappleHitTarget; // 0x1a80        
        CSoundEventName m_strGrappleHitWorld; // 0x1a90        
        CSoundEventName m_strGrappleHitNothing; // 0x1aa0        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1ab0        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1b38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityFlyingStrikeVData) == 0x1bc0);
};
