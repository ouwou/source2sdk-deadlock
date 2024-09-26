#pragma once
#include "source2sdk/client/C_EconEntity.hpp"
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
    // Size: 0xe90
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_EconWearable : public client::C_EconEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xe88[0x8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_EconWearable) == 0xe90);
};
