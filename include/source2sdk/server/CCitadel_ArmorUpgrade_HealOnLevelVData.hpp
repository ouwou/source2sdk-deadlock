#pragma once
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x15b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_HealOnLevelVData : public server::CitadelItemVData
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_ArmorUpgrade_HealOnLevelVData) == 0x15b0);
};
