#pragma once
#include "source2sdk/client/CLogicalEntity.hpp"
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
    // Size: 0x568
    // Has VTable
    #pragma pack(push, 1)
    class CLogicRelay : public client::CLogicalEntity
    {
    public:
        bool m_bDisabled; // 0x560        
        bool m_bWaitForRefire; // 0x561        
        bool m_bTriggerOnce; // 0x562        
        bool m_bFastRetrigger; // 0x563        
        bool m_bPassthoughCaller; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
    static_assert(sizeof(CLogicRelay) == 0x568);
};
