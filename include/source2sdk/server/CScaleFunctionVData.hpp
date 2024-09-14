#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/EStatsType.hpp"
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
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataNodeType "1"
    // static metadata: MVDataOverlayType "1"
    #pragma pack(push, 1)
    class CScaleFunctionVData : public client::CEntitySubclassVDataBase
    {
    public:
        client::EStatsType m_eSpecificStatScaleType; // 0x28        
        float m_flStatScale; // 0x2c        
        bool m_bFunctionDisabled; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScaleFunctionVData because it is not a standard-layout class
    static_assert(sizeof(CScaleFunctionVData) == 0x40);
};
