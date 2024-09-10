#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x1588
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_AblativeCoatVData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RestoreEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RestoreEffectModifier;
        char m_RestoreEffectModifier[0x10]; // 0x1538        
        // m_OnTakeDamageEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_OnTakeDamageEffectModifier;
        char m_OnTakeDamageEffectModifier[0x10]; // 0x1548        
        // m_OnBreakEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_OnBreakEffectModifier;
        char m_OnBreakEffectModifier[0x10]; // 0x1558        
        // m_ResistBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ResistBuffModifier;
        char m_ResistBuffModifier[0x10]; // 0x1568        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOnTakeDamageEffectDuration; // 0x1578        
        float m_flOnBreakEffectDuration; // 0x157c        
        float m_flOnRestoreEffectDuration; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1584[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_AblativeCoatVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_ArmorUpgrade_AblativeCoatVData) == 0x1588);
};
