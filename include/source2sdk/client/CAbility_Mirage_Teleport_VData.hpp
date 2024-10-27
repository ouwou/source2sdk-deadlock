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
    // Size: 0x1770
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Mirage_Teleport_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x1550        
        // m_ImmunityModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ImmunityModifier;
        char m_ImmunityModifier[0x10]; // 0x1560        
        // m_FireRateModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FireRateModifier;
        char m_FireRateModifier[0x10]; // 0x1570        
        // metadata: MPropertyStartGroup "Visuals"
        // m_TeleportStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportStartParticle;
        char m_TeleportStartParticle[0xe0]; // 0x1580        
        // m_TeleportEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportEndParticle;
        char m_TeleportEndParticle[0xe0]; // 0x1660        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strArriveSound; // 0x1740        
        CSoundEventName m_strDepartSound; // 0x1750        
        CSoundEventName m_strChannelDestinationSound; // 0x1760        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_Teleport_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_Teleport_VData) == 0x1770);
};
