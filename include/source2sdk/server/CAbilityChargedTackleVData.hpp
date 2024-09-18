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
    // Size: 0x1670
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityChargedTackleVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_ChargePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargePreviewParticle;
        char m_ChargePreviewParticle[0xe0]; // 0x1540        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ChargePrepareModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ChargePrepareModifier;
        char m_ChargePrepareModifier[0x10]; // 0x1620        
        // m_ChargeActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ChargeActiveModifier;
        char m_ChargeActiveModifier[0x10]; // 0x1630        
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x1640        
        // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DragModifier;
        char m_DragModifier[0x10]; // 0x1650        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strHitSound; // 0x1660        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityChargedTackleVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityChargedTackleVData) == 0x1670);
};
