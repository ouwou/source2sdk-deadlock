#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1960
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHornetSnipeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_AssassinateShotParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticle;
        char m_AssassinateShotParticle[0xe0]; // 0x1550        
        // m_AssassinateShotParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly;
        char m_AssassinateShotParticleOwnerOnly[0xe0]; // 0x1630        
        // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
        char m_LaserSightParticle[0xe0]; // 0x1710        
        // m_LaserSightParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly;
        char m_LaserSightParticleOwnerOnly[0xe0]; // 0x17f0        
        // metadata: MPropertyGroupName "Modifiers"
        // m_SnipeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SnipeModifier;
        char m_SnipeModifier[0x10]; // 0x18d0        
        // m_BuffOnKillModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffOnKillModifier;
        char m_BuffOnKillModifier[0x10]; // 0x18e0        
        // m_GlowEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GlowEnemyModifier;
        char m_GlowEnemyModifier[0x10]; // 0x18f0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSnipeImpactSound; // 0x1900        
        CSoundEventName m_strZoomIn; // 0x1910        
        CSoundEventName m_strZoomOut; // 0x1920        
        // metadata: MPropertyStartGroup "+Snipe Properties"
        float m_flMinScopeTimeToShoot; // 0x1930        
        float m_flScopeTimeToFullPower; // 0x1934        
        float m_flScopeMinPowerFrac; // 0x1938        
        float m_flFadeToBlackTime; // 0x193c        
        float m_flFoVChangeTime; // 0x1940        
        [[maybe_unused]] std::uint8_t pad_0x1944[0x4]; // 0x1944
        // m_ScopeFoV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ScopeFoV;
        char m_ScopeFoV[0x18]; // 0x1948        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHornetSnipeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHornetSnipeVData) == 0x1960);
};
