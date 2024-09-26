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
    // Size: 0x16b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHookVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SelfModifier;
        char m_SelfModifier[0x10]; // 0x1548        
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x1558        
        // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BulletAmpModifier;
        char m_BulletAmpModifier[0x10]; // 0x1568        
        // m_ShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ShieldModifier;
        char m_ShieldModifier[0x10]; // 0x1578        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
        char m_HookOutParticle[0xe0]; // 0x1588        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHookSuccessSound; // 0x1668        
        CSoundEventName m_strHookAllySound; // 0x1678        
        CSoundEventName m_strHookMissSound; // 0x1688        
        CSoundEventName m_strHookImpactGeoSound; // 0x1698        
        CSoundEventName m_SelfBuffCastSound; // 0x16a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHookVData) == 0x16b8);
};
