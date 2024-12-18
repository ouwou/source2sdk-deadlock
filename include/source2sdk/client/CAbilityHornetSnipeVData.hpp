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
    // Size: 0x1970
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHornetSnipeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_AssassinateShotParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticle;
        char m_AssassinateShotParticle[0xe0]; // 0x1568        
        // m_AssassinateShotParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly;
        char m_AssassinateShotParticleOwnerOnly[0xe0]; // 0x1648        
        // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
        char m_LaserSightParticle[0xe0]; // 0x1728        
        // m_LaserSightParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly;
        char m_LaserSightParticleOwnerOnly[0xe0]; // 0x1808        
        // metadata: MPropertyGroupName "Modifiers"
        // m_SnipeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SnipeModifier;
        char m_SnipeModifier[0x10]; // 0x18e8        
        // m_BuffOnKillModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffOnKillModifier;
        char m_BuffOnKillModifier[0x10]; // 0x18f8        
        // m_GlowEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GlowEnemyModifier;
        char m_GlowEnemyModifier[0x10]; // 0x1908        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSnipeImpactSound; // 0x1918        
        CSoundEventName m_strZoomIn; // 0x1928        
        CSoundEventName m_strZoomOut; // 0x1938        
        // metadata: MPropertyStartGroup "+Snipe Properties"
        float m_flMinScopeTimeToShoot; // 0x1948        
        float m_flFadeToBlackTime; // 0x194c        
        float m_flFoVChangeTime; // 0x1950        
        [[maybe_unused]] std::uint8_t pad_0x1954[0x4]; // 0x1954
        // m_ScopeFoV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ScopeFoV;
        char m_ScopeFoV[0x18]; // 0x1958        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHornetSnipeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHornetSnipeVData) == 0x1970);
};
