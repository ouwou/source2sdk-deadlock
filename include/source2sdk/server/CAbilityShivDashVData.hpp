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
    // Size: 0x1820
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityShivDashVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DashModifier;
        char m_DashModifier[0x10]; // 0x1528        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
        char m_DashImpactEffect[0xe0]; // 0x1538        
        // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
        char m_DashSwingEffect[0xe0]; // 0x1618        
        // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
        char m_DashLineEffect[0xe0]; // 0x16f8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDashStartWithTargets; // 0x17d8        
        CSoundEventName m_strDashStartEcho; // 0x17e8        
        CSoundEventName m_strDashStartMiss; // 0x17f8        
        CSoundEventName m_strDashHitEnemy; // 0x1808        
        // metadata: MPropertyStartGroup "+Dash Properties"
        float m_flEchoDelay; // 0x1818        
        [[maybe_unused]] std::uint8_t pad_0x181c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityShivDashVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityShivDashVData) == 0x1820);
};
