#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_LurkersAmbush_Invis.hpp"
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
    // Size: 0x1688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Fathom_LurkersAmbush_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_ChargeUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpParticle;
        char m_ChargeUpParticle[0xe0]; // 0x1568        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_InvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadel_Modifier_LurkersAmbush_Invis> m_InvisModifier;
        char m_InvisModifier[0x10]; // 0x1648        
        // m_RegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RegenModifier;
        char m_RegenModifier[0x10]; // 0x1658        
        // m_ImmobilizeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ImmobilizeModifier;
        char m_ImmobilizeModifier[0x10]; // 0x1668        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSwapStarted; // 0x1678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_LurkersAmbush_VData) == 0x1688);
};
