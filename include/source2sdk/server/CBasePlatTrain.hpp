#pragma once
#include "source2sdk/server/CBaseToggle.hpp"
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
    // Size: 0x810
    // Has VTable
    #pragma pack(push, 1)
    class CBasePlatTrain : public server::CBaseToggle
    {
    public:
        CUtlSymbolLarge m_NoiseMoving; // 0x7e8        
        CUtlSymbolLarge m_NoiseArrived; // 0x7f0        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x8]; // 0x7f8
        float m_volume; // 0x800        
        float m_flTWidth; // 0x804        
        float m_flTLength; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x80c[0x4];
        
        // Datamap fields:
        // void m_pMovementSound; // 0x7f8
        // float rotation; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlatTrain because it is not a standard-layout class
    static_assert(sizeof(CBasePlatTrain) == 0x810);
};
