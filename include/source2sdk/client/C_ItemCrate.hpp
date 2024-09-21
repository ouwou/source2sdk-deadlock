#pragma once
#include "source2sdk/client/C_PhysicsProp.hpp"
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
    // Size: 0xce0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkVarNames "int m_eLootType"
    #pragma pack(push, 1)
    class C_ItemCrate : public client::C_PhysicsProp
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_eLootType; // 0xcd8        
        [[maybe_unused]] std::uint8_t pad_0xcdc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ItemCrate because it is not a standard-layout class
    static_assert(sizeof(C_ItemCrate) == 0xce0);
};
