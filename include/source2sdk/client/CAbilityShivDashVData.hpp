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
    // Size: 0x1858
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityShivDashVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DashModifier;
        char m_DashModifier[0x10]; // 0x1560        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
        char m_DashImpactEffect[0xe0]; // 0x1570        
        // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
        char m_DashSwingEffect[0xe0]; // 0x1650        
        // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
        char m_DashLineEffect[0xe0]; // 0x1730        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDashStartWithTargets; // 0x1810        
        CSoundEventName m_strDashStartEcho; // 0x1820        
        CSoundEventName m_strDashStartMiss; // 0x1830        
        CSoundEventName m_strDashHitEnemy; // 0x1840        
        // metadata: MPropertyStartGroup "+Dash Properties"
        float m_flEchoDelay; // 0x1850        
        [[maybe_unused]] std::uint8_t pad_0x1854[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityShivDashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityShivDashVData) == 0x1858);
};
