#pragma once
#include "source2sdk/modellib/MovementGaitId_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AI_MovePerformance_Settings_t
    {
    public:
        CGlobalSymbol m_sHandshakeName; // 0x0        
        float m_flRequiredPathLength; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        modellib::MovementGaitId_t m_movementGaitId; // 0x10        
        bool m_bRequiresRightFootDown; // 0x18        
        bool m_bRequiresLeftFootDown; // 0x19        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_MovePerformance_Settings_t, m_sHandshakeName) == 0x0);
    static_assert(offsetof(AI_MovePerformance_Settings_t, m_flRequiredPathLength) == 0x8);
    static_assert(offsetof(AI_MovePerformance_Settings_t, m_movementGaitId) == 0x10);
    static_assert(offsetof(AI_MovePerformance_Settings_t, m_bRequiresRightFootDown) == 0x18);
    static_assert(offsetof(AI_MovePerformance_Settings_t, m_bRequiresLeftFootDown) == 0x19);
    
    static_assert(sizeof(AI_MovePerformance_Settings_t) == 0x20);
};
