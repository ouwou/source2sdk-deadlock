#pragma once
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0x1b18
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelAbilityTangoTetherVData : public server::CitadelAbilityVData
    {
    public:
        float m_flJumpFallSpeedMax; // 0x14f0        
        float m_flJumpAirDrag; // 0x14f4        
        float m_flJumpAirSpeedMax; // 0x14f8        
        float m_flJumpSpeed; // 0x14fc        
        float m_flJumpPitch; // 0x1500        
        float m_flDashSpeed; // 0x1504        
        float m_flDashCloseEnoughToTarget; // 0x1508        
        float m_flDashLockOntoTargetDist; // 0x150c        
        float m_flVelocityTurnSpringStrength; // 0x1510        
        client::CRemapFloat m_flAngleToSpeedScale; // 0x1514        
        float m_flBackswingDuration; // 0x1524        
        float m_flAnimToStrikePointTime; // 0x1528        
        float m_flGrappleShotFloatTime; // 0x152c        
        float m_flGrappleShotDelayToFlyOnHit; // 0x1530        
        float m_flGrappleSpeed; // 0x1534        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_TetherModifier;
        char m_TetherModifier[0x10]; // 0x1538        
        // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_GrappleTargetModifier;
        char m_GrappleTargetModifier[0x10]; // 0x1548        
        // metadata: MPropertyStartGroup "Visuals"
        // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
        char m_LeapParticle[0xe0]; // 0x1558        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x1638        
        // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
        char m_SlashParticle[0xe0]; // 0x1718        
        // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
        char m_BulletGrappleTracerParticle[0xe0]; // 0x17f8        
        // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
        char m_EnemyGrappleParticle[0xe0]; // 0x18d8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDamageTarget; // 0x19b8        
        CSoundEventName m_strStartDash; // 0x19c8        
        CSoundEventName m_strStartAttack; // 0x19d8        
        CSoundEventName m_strGrappleHitTarget; // 0x19e8        
        CSoundEventName m_strGrappleHitWorld; // 0x19f8        
        CSoundEventName m_strGrappleHitNothing; // 0x1a08        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a18        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1a98        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityTangoTetherVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadelAbilityTangoTetherVData) == 0x1b18);
};
