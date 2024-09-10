#pragma once
#include "source2sdk/client/FixAngleSet_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "FixAngleSet_t nType"
    // static metadata: MNetworkVarNames "QAngle qAngle"
    // static metadata: MNetworkVarNames "uint32 nIndex"
    #pragma pack(push, 1)
    struct ViewAngleServerChange_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        client::FixAngleSet_t nType; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x3]; // 0x31
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        QAngle qAngle; // 0x34        
        // metadata: MNetworkEnable
        uint32_t nIndex; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ViewAngleServerChange_t, nType) == 0x30);
    static_assert(offsetof(ViewAngleServerChange_t, qAngle) == 0x34);
    static_assert(offsetof(ViewAngleServerChange_t, nIndex) == 0x40);
    
    static_assert(sizeof(ViewAngleServerChange_t) == 0x48);
};
