#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Size: 0x840
    // Has VTable
    #pragma pack(push, 1)
    class C_FuncTrackTrain : public client::C_BaseModelEntity
    {
    public:
        int32_t m_nLongAxis; // 0x830        
        float m_flRadius; // 0x834        
        float m_flLineLength; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FuncTrackTrain because it is not a standard-layout class
    static_assert(sizeof(C_FuncTrackTrain) == 0x840);
};
