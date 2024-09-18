#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
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
    class CModifierVData_SetModelScale : public client::CCitadelModifierVData
    {
    public:
        tier2::CRangeFloat m_flScale; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierVData_SetModelScale because it is not a standard-layout class
    static_assert(sizeof(CModifierVData_SetModelScale) == 0x610);
};
