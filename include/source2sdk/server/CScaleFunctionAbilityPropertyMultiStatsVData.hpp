#pragma once
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/server/CScaleFunctionVData.hpp"
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
    // Size: 0x58
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CScaleFunctionAbilityPropertyMultiStatsVData : public server::CScaleFunctionVData
    {
    public:
        // m_vecScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecScalingStats;
        char m_vecScalingStats[0x18]; // 0x40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScaleFunctionAbilityPropertyMultiStatsVData because it is not a standard-layout class
    static_assert(sizeof(CScaleFunctionAbilityPropertyMultiStatsVData) == 0x58);
};
