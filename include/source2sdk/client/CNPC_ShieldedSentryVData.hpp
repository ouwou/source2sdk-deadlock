#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CNPC_SimpleAnimatingAIVData.hpp"
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
    // Size: 0x448
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_ShieldedSentryVData : public client::CNPC_SimpleAnimatingAIVData
    {
    public:
        float m_flZShootPostionOffset; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x10c[0x4]; // 0x10c
        // metadata: MPropertyStartGroup "Visuals"
        // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
        char m_LaserSightParticle[0xe0]; // 0x110        
        // m_KillExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillExplosionParticle;
        char m_KillExplosionParticle[0xe0]; // 0x1f0        
        // m_AutoDestructParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AutoDestructParticle;
        char m_AutoDestructParticle[0xe0]; // 0x2d0        
        // metadata: MPropertyGroupName "Modifiers"
        // m_DeployProgressModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DeployProgressModifier;
        char m_DeployProgressModifier[0x10]; // 0x3b0        
        // m_NearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_NearDeathModifier;
        char m_NearDeathModifier[0x10]; // 0x3c0        
        // m_IntrinsicModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_IntrinsicModifier;
        char m_IntrinsicModifier[0x10]; // 0x3d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sSpawnSound; // 0x3e0        
        CSoundEventName m_sKillExplosionSound; // 0x3f0        
        CSoundEventName m_sTargetAcquiredLocalSound; // 0x400        
        CSoundEventName m_sTargetAcquiredSound; // 0x410        
        // metadata: MPropertyStartGroup "Stats"
        float m_flIdleTurnSpeed; // 0x420        
        float m_flIdleTurnAngles; // 0x424        
        float m_flTrooperTakeDamageMult; // 0x428        
        float m_flNeutralTakeDamageMulti; // 0x42c        
        float m_flNotifyEventTime; // 0x430        
        float m_flNearDeathDuration; // 0x434        
        float m_flMinimapRevealTime; // 0x438        
        float m_flMinLifetime; // 0x43c        
        float m_flAttackThinkTime; // 0x440        
        [[maybe_unused]] std::uint8_t pad_0x444[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_ShieldedSentryVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_ShieldedSentryVData) == 0x448);
};
