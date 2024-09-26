#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x1780
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_CheatDeathVData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DamagePulseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagePulseParticle;
        char m_DamagePulseParticle[0xe0]; // 0x1590        
        // m_DamageTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamageTargetParticle;
        char m_DamageTargetParticle[0xe0]; // 0x1670        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sHealPulseSound; // 0x1750        
        CSoundEventName m_sHealAndDamagePulseSound; // 0x1760        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DeathImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DeathImmuneModifier;
        char m_DeathImmuneModifier[0x10]; // 0x1770        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_CheatDeathVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_CheatDeathVData) == 0x1780);
};
