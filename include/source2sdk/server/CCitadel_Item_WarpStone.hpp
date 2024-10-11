#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"
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
    // Size: 0xb50
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_WarpStone : public server::CCitadel_Item
    {
    public:
        client::ParticleIndex_t m_nCastDelayParticleIndex; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_WarpStone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_WarpStone) == 0xb50);
};
