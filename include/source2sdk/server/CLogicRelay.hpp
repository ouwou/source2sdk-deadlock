#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x540
    // Has VTable
    #pragma pack(push, 1)
    class CLogicRelay : public server::CLogicalEntity
    {
    public:
        entity2::CEntityIOOutput m_OnTrigger; // 0x4e8        
        entity2::CEntityIOOutput m_OnSpawn; // 0x510        
        bool m_bDisabled; // 0x538        
        bool m_bWaitForRefire; // 0x539        
        bool m_bTriggerOnce; // 0x53a        
        bool m_bFastRetrigger; // 0x53b        
        bool m_bPassthoughCaller; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputEnableRefire; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // void InputTrigger; // 0x0
        // void InputCancelPending; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
    static_assert(sizeof(CLogicRelay) == 0x540);
};
