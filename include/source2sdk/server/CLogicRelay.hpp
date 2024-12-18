#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x4e8
    // Has VTable
    #pragma pack(push, 1)
    class CLogicRelay : public server::CLogicalEntity
    {
    public:
        bool m_bDisabled; // 0x4e0        
        bool m_bWaitForRefire; // 0x4e1        
        bool m_bTriggerOnce; // 0x4e2        
        bool m_bFastRetrigger; // 0x4e3        
        bool m_bPassthoughCaller; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4e5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
    static_assert(sizeof(CLogicRelay) == 0x4e8);
};
