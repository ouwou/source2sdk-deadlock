#pragma once
#include "source2sdk/server/CTriggerPush.hpp"
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
    // Size: 0x980
    // Has VTable
    #pragma pack(push, 1)
    class CScriptTriggerPush : public server::CTriggerPush
    {
    public:
        Vector m_vExtent; // 0x970        
        [[maybe_unused]] std::uint8_t pad_0x97c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptTriggerPush because it is not a standard-layout class
    static_assert(sizeof(CScriptTriggerPush) == 0x980);
};
