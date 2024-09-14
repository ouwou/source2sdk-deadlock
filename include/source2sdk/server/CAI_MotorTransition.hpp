#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AIMotorTransitionState_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x60
    // Has VTable
    #pragma pack(push, 1)
    class CAI_MotorTransition : public client::CAI_Component
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x8]; // 0x40
        server::AIMotorTransitionState_t m_nTransitionState; // 0x48        
        Vector m_vNavLinkStartPos; // 0x4c        
        entity2::GameTime_t m_flNavLinkFaceStartTime; // 0x58        
        bool m_bTransitionAnimgraphHasTicked; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x5d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorTransition because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorTransition) == 0x60);
};
