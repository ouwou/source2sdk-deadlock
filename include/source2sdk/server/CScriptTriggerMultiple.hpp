#pragma once
#include "source2sdk/server/CTriggerMultiple.hpp"
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
    // Size: 0x970
    // Has VTable
    #pragma pack(push, 1)
    class CScriptTriggerMultiple : public server::CTriggerMultiple
    {
    public:
        Vector m_vExtent; // 0x960        
        [[maybe_unused]] std::uint8_t pad_0x96c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptTriggerMultiple because it is not a standard-layout class
    static_assert(sizeof(CScriptTriggerMultiple) == 0x970);
};
