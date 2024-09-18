#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/MoveType_t.hpp"
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
    // Size: 0x610
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierVData_SetMoveType : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyDescription "The move type to switch to.  Some move types will have weird behaviors when swapped to, ie: MOVETYPE_SYNC"
        client::MoveType_t m_nMoveType; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x609[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierVData_SetMoveType because it is not a standard-layout class
    static_assert(sizeof(CModifierVData_SetMoveType) == 0x610);
};
