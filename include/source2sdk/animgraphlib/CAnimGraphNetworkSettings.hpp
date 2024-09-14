#pragma once
#include "source2sdk/animgraphlib/CAnimGraphSettingsGroup.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x28
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Networking"
    #pragma pack(push, 1)
    class CAnimGraphNetworkSettings : public animgraphlib::CAnimGraphSettingsGroup
    {
    public:
        // metadata: MPropertyFriendlyName "Enable Networking"
        bool m_bNetworkingEnabled; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAnimGraphNetworkSettings because it is not a standard-layout class
    static_assert(sizeof(CAnimGraphNetworkSettings) == 0x28);
};
