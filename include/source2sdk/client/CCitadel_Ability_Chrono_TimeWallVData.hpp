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
    // Size: 0x18d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Chrono_TimeWallVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AuraModifier;
        char m_AuraModifier[0x10]; // 0x1528        
        // metadata: MPropertyStartGroup "Visuals"
        // m_TimeWallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallParticle;
        char m_TimeWallParticle[0xe0]; // 0x1538        
        // m_TimeWallChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallChargeParticle;
        char m_TimeWallChargeParticle[0xe0]; // 0x1618        
        // m_TimeWallHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallHitParticle;
        char m_TimeWallHitParticle[0xe0]; // 0x16f8        
        // m_TimeWallHitTimerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TimeWallHitTimerParticle;
        char m_TimeWallHitTimerParticle[0xe0]; // 0x17d8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strWallCreated; // 0x18b8        
        CSoundEventName m_strChargeUpSound; // 0x18c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_TimeWallVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Chrono_TimeWallVData) == 0x18d8);
};
