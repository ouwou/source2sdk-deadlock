#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CFloatExponentialMovingAverage
    {
    public:
        bool m_bInitialized; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        float m_flAlpha; // 0x4        
        float m_flPreviousSample; // 0x8        
        float m_flAverage; // 0xc        
        float m_flAverageDelta; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFloatExponentialMovingAverage, m_bInitialized) == 0x0);
    static_assert(offsetof(CFloatExponentialMovingAverage, m_flAlpha) == 0x4);
    static_assert(offsetof(CFloatExponentialMovingAverage, m_flPreviousSample) == 0x8);
    static_assert(offsetof(CFloatExponentialMovingAverage, m_flAverage) == 0xc);
    static_assert(offsetof(CFloatExponentialMovingAverage, m_flAverageDelta) == 0x10);
    
    static_assert(sizeof(CFloatExponentialMovingAverage) == 0x14);
};
