#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xcc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_WarpStone : public client::CCitadel_Item
    {
    public:
        client::ParticleIndex_t m_nCastDelayParticleIndex; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc8c[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_WarpStone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_WarpStone) == 0xcc8);
};
