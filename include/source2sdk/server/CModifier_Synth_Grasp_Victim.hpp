#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1e8
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Synth_Grasp_Victim : public server::CCitadelModifier
    {
    public:
        Vector m_vecOrigin; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Synth_Grasp_Victim because it is not a standard-layout class
    static_assert(sizeof(CModifier_Synth_Grasp_Victim) == 0x1e8);
};
