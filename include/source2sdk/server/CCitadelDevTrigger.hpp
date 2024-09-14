#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/DevTriggerType_t.hpp"
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
    // Size: 0x940
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelDevTrigger : public server::CBaseTrigger
    {
    public:
        server::DevTriggerType_t m_eDevTriggerType; // 0x938        
        [[maybe_unused]] std::uint8_t pad_0x93c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelDevTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelDevTrigger) == 0x940);
};
