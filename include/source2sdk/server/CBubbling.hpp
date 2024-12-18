#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x7c8
    // Has VTable
    #pragma pack(push, 1)
    class CBubbling : public server::CBaseModelEntity
    {
    public:
        int32_t m_density; // 0x7b8        
        int32_t m_frequency; // 0x7bc        
        int32_t m_state; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c4[0x4];
        
        // Datamap fields:
        // float m_flSpeed; // 0x34c
        // void CBubblingFizzThink; // 0x0
        // void InputActivate; // 0x0
        // void InputDeactivate; // 0x0
        // void InputToggle; // 0x0
        // int32_t InputSetCurrent; // 0x0
        // int32_t InputSetDensity; // 0x0
        // int32_t InputSetFrequency; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBubbling because it is not a standard-layout class
    static_assert(sizeof(CBubbling) == 0x7c8);
};
