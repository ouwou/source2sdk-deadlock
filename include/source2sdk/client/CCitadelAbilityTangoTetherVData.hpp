#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1b50
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelAbilityTangoTetherVData : public client::CitadelAbilityVData
    {
    public:
        float m_flJumpFallSpeedMax; // 0x1528        
        float m_flJumpAirDrag; // 0x152c        
        float m_flJumpAirSpeedMax; // 0x1530        
        float m_flJumpSpeed; // 0x1534        
        float m_flJumpPitch; // 0x1538        
        float m_flDashSpeed; // 0x153c        
        float m_flDashCloseEnoughToTarget; // 0x1540        
        float m_flDashLockOntoTargetDist; // 0x1544        
        float m_flVelocityTurnSpringStrength; // 0x1548        
        client::CRemapFloat m_flAngleToSpeedScale; // 0x154c        
        float m_flBackswingDuration; // 0x155c        
        float m_flAnimToStrikePointTime; // 0x1560        
        float m_flGrappleShotFloatTime; // 0x1564        
        float m_flGrappleShotDelayToFlyOnHit; // 0x1568        
        float m_flGrappleSpeed; // 0x156c        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_TetherModifier;
        char m_TetherModifier[0x10]; // 0x1570        
        // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_GrappleTargetModifier;
        char m_GrappleTargetModifier[0x10]; // 0x1580        
        // metadata: MPropertyStartGroup "Visuals"
        // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
        char m_LeapParticle[0xe0]; // 0x1590        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x1670        
        // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
        char m_SlashParticle[0xe0]; // 0x1750        
        // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
        char m_BulletGrappleTracerParticle[0xe0]; // 0x1830        
        // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
        char m_EnemyGrappleParticle[0xe0]; // 0x1910        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDamageTarget; // 0x19f0        
        CSoundEventName m_strStartDash; // 0x1a00        
        CSoundEventName m_strStartAttack; // 0x1a10        
        CSoundEventName m_strGrappleHitTarget; // 0x1a20        
        CSoundEventName m_strGrappleHitWorld; // 0x1a30        
        CSoundEventName m_strGrappleHitNothing; // 0x1a40        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a50        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1ad0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityTangoTetherVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadelAbilityTangoTetherVData) == 0x1b50);
};
