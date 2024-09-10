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
    // Size: 0x1660
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHookVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SelfModifier;
        char m_SelfModifier[0x10]; // 0x14f0        
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x1500        
        // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BulletAmpModifier;
        char m_BulletAmpModifier[0x10]; // 0x1510        
        // m_ShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier;
        char m_ShieldModifier[0x10]; // 0x1520        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
        char m_HookOutParticle[0xe0]; // 0x1530        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHookSuccessSound; // 0x1610        
        CSoundEventName m_strHookAllySound; // 0x1620        
        CSoundEventName m_strHookMissSound; // 0x1630        
        CSoundEventName m_strHookImpactGeoSound; // 0x1640        
        CSoundEventName m_SelfBuffCastSound; // 0x1650        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityHookVData) == 0x1660);
};
