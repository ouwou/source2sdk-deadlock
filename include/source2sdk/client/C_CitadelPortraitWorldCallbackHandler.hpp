#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x560
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_CitadelPortraitWorldCallbackHandler : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x558[0x8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_CitadelPortraitWorldCallbackHandler) == 0x560);
};
