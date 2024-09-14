#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/FootSweepPusher_t.hpp"
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
    // Size: 0x958
    // Has VTable
    #pragma pack(push, 1)
    class CNpcFootSweep : public server::CBaseTrigger
    {
    public:
        // m_vecPushers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::FootSweepPusher_t> m_vecPushers;
        char m_vecPushers[0x18]; // 0x938        
        bool m_bUseCenterPusher; // 0x950        
        bool m_bUseForwardPusher; // 0x951        
        [[maybe_unused]] std::uint8_t pad_0x952[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNpcFootSweep because it is not a standard-layout class
    static_assert(sizeof(CNpcFootSweep) == 0x958);
};
