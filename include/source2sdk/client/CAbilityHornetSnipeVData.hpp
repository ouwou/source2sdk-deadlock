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
    // Size: 0x18e8
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
        char m_AssassinateShotParticle[0xe0]; // 0x1528        
        // m_AssassinateShotParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly;
        char m_AssassinateShotParticleOwnerOnly[0xe0]; // 0x1608        
        // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
        char m_LaserSightParticle[0xe0]; // 0x16e8        
        // m_LaserSightParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly;
        char m_LaserSightParticleOwnerOnly[0xe0]; // 0x17c8        
        // metadata: MPropertyGroupName "Modifiers"
        // m_SnipeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SnipeModifier;
        char m_SnipeModifier[0x10]; // 0x18a8        
        // m_BuffOnKillModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffOnKillModifier;
        char m_BuffOnKillModifier[0x10]; // 0x18b8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSnipeImpactSound; // 0x18c8        
        // metadata: MPropertyStartGroup "+Snipe Properties"
        float m_flMinScopeTimeToShoot; // 0x18d8        
        float m_flScopeTimeToFullPower; // 0x18dc        
        float m_flScopeMinPowerFrac; // 0x18e0        
        float m_flFadeToBlackTime; // 0x18e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHornetSnipeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHornetSnipeVData) == 0x18e8);
};
