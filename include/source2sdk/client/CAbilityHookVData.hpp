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
    // Size: 0x16e0
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
        char m_SelfModifier[0x10]; // 0x1568        
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x1578        
        // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BulletAmpModifier;
        char m_BulletAmpModifier[0x10]; // 0x1588        
        // m_ShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier;
        char m_ShieldModifier[0x10]; // 0x1598        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
        char m_HookOutParticle[0xe0]; // 0x15a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHookSuccessSound; // 0x1688        
        CSoundEventName m_strHookAllySound; // 0x1698        
        CSoundEventName m_strHookMissSound; // 0x16a8        
        CSoundEventName m_strHookImpactGeoSound; // 0x16b8        
        CSoundEventName m_SelfBuffCastSound; // 0x16c8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTrooperHitRadius; // 0x16d8        
        [[maybe_unused]] std::uint8_t pad_0x16dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHookVData) == 0x16e0);
};
