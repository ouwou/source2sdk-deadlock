#pragma once
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
    // Size: 0xbb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nNumStacks"
    #pragma pack(push, 1)
    class CItem_RestorativeLocket : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb08[0xa8]; // 0xb08
        // metadata: MNetworkEnable
        int32_t m_nNumStacks; // 0xbb0        
        [[maybe_unused]] std::uint8_t pad_0xbb4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem_RestorativeLocket because it is not a standard-layout class
    static_assert(sizeof(CItem_RestorativeLocket) == 0xbb8);
};
