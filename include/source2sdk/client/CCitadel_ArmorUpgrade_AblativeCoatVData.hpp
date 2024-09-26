#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x15e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_AblativeCoatVData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RestoreEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RestoreEffectModifier;
        char m_RestoreEffectModifier[0x10]; // 0x1590        
        // m_OnTakeDamageEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_OnTakeDamageEffectModifier;
        char m_OnTakeDamageEffectModifier[0x10]; // 0x15a0        
        // m_OnBreakEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_OnBreakEffectModifier;
        char m_OnBreakEffectModifier[0x10]; // 0x15b0        
        // m_ResistBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ResistBuffModifier;
        char m_ResistBuffModifier[0x10]; // 0x15c0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOnTakeDamageEffectDuration; // 0x15d0        
        float m_flOnBreakEffectDuration; // 0x15d4        
        float m_flOnRestoreEffectDuration; // 0x15d8        
        [[maybe_unused]] std::uint8_t pad_0x15dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_AblativeCoatVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_ArmorUpgrade_AblativeCoatVData) == 0x15e0);
};
