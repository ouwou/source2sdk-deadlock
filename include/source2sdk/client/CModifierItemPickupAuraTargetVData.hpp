#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x620
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierItemPickupAuraTargetVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Timers"
        float m_PickupTimer; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4]; // 0x60c
        // metadata: MPropertyGroupName "Modifiers"
        // m_PickupTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PickupTimerModifier;
        char m_PickupTimerModifier[0x10]; // 0x610        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierItemPickupAuraTargetVData because it is not a standard-layout class
    static_assert(sizeof(CModifierItemPickupAuraTargetVData) == 0x620);
};
