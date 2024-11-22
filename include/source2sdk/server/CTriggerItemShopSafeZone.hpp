#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x9f0
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerItemShopSafeZone : public server::CBaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x980[0x20]; // 0x980
        entity2::CEntityIOOutput m_OnContested; // 0x9a0        
        entity2::CEntityIOOutput m_OnNotContested; // 0x9c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerItemShopSafeZone because it is not a standard-layout class
    static_assert(sizeof(CTriggerItemShopSafeZone) == 0x9f0);
};
