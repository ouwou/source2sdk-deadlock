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
    // Size: 0x330
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_FieldSentryVData : public client::CNPC_SimpleAnimatingAIVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
        char m_LaserSightParticle[0xe0]; // 0x108        
        // m_KillExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillExplosionParticle;
        char m_KillExplosionParticle[0xe0]; // 0x1e8        
        // metadata: MPropertyGroupName "Modifiers"
        // m_DeployProgressModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DeployProgressModifier;
        char m_DeployProgressModifier[0x10]; // 0x2c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sSpawnSound; // 0x2d8        
        CSoundEventName m_sKillExplosionSound; // 0x2e8        
        CSoundEventName m_sTargetAcquiredLocalSound; // 0x2f8        
        CSoundEventName m_sTargetAcquiredSound; // 0x308        
        // metadata: MPropertyStartGroup "Stats"
        float m_flIdleTurnSpeed; // 0x318        
        float m_flIdleTurnAngles; // 0x31c        
        float m_flTrooperTakeDamageMult; // 0x320        
        float m_flNeutralTakeDamageMulti; // 0x324        
        float m_flNotifyEventTime; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x32c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_FieldSentryVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_FieldSentryVData) == 0x330);
};
