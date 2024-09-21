#pragma once
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/server/CItem.hpp"
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
    // Size: 0xa88
    // Has VTable
    #pragma pack(push, 1)
    class CScriptItem : public server::CItem
    {
    public:
        client::MoveType_t m_MoveTypeOverride; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xa81[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptItem because it is not a standard-layout class
    static_assert(sizeof(CScriptItem) == 0xa88);
};
