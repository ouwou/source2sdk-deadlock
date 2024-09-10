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
    // Size: 0x17f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityNanoPounceVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle;
        char m_ChannelParticle[0xe0]; // 0x14f0        
        // m_ExplodeSlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeSlowParticle;
        char m_ExplodeSlowParticle[0xe0]; // 0x15d0        
        // m_LaunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle;
        char m_LaunchParticle[0xe0]; // 0x16b0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1790        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x17a0        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x17b0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flPounceDistanceFromTarget; // 0x17c0        
        float m_flPounceTargetOffset; // 0x17c4        
        float m_flPounceToTargetMinStartTime; // 0x17c8        
        float m_flPounceToTargetMaxStartTime; // 0x17cc        
        float m_flPounceToEnemyMaxTime; // 0x17d0        
        float m_flPounceUpForce; // 0x17d4        
        float m_flPounceXYForce; // 0x17d8        
        float m_flPounceNearbyForceFactor; // 0x17dc        
        float m_flPounceMinSpeed; // 0x17e0        
        float m_flPounceToTargetDist; // 0x17e4        
        float m_flAllyMinTargetRange; // 0x17e8        
        [[maybe_unused]] std::uint8_t pad_0x17ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityNanoPounceVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityNanoPounceVData) == 0x17f0);
};
