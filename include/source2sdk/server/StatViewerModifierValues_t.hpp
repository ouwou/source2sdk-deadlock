#pragma once
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_SourceModifierID"
    // static metadata: MNetworkVarNames "EModifierValue m_eValType"
    // static metadata: MNetworkVarNames "float m_flValue"
    #pragma pack(push, 1)
    struct StatViewerModifierValues_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        CUtlStringToken m_SourceModifierID; // 0x30        
        // metadata: MNetworkEnable
        client::EModifierValue m_eValType; // 0x34        
        // metadata: MNetworkEnable
        float m_flValue; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(StatViewerModifierValues_t, m_SourceModifierID) == 0x30);
    static_assert(offsetof(StatViewerModifierValues_t, m_eValType) == 0x34);
    static_assert(offsetof(StatViewerModifierValues_t, m_flValue) == 0x38);
    
    static_assert(sizeof(StatViewerModifierValues_t) == 0x40);
};
