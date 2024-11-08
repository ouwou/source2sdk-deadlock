#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/server/AI_Motor_DefaultFacing_t.hpp"
#include "source2sdk/server/AI_Motor_MovementFacingMode_t.hpp"
#include "source2sdk/server/AI_ScheduleFacingTargetPriority_t.hpp"
#include "source2sdk/server/CAI_InterestTarget.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph.hpp"
#include "source2sdk/server/CAI_MotorNavLink.hpp"
#include "source2sdk/server/CAI_MotorTransition.hpp"
#include "source2sdk/server/ChoreoEntityFacing_t.hpp"
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
    // Size: 0x510
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Motor : public client::CAI_Component
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x10]; // 0x40
        float m_flMoveInterval; // 0x50        
        Vector m_vIdealEntityFacing; // 0x54        
        float m_flYawSpeed; // 0x60        
        Vector m_vMoveVel; // 0x64        
        Vector m_vMoveVelNavigation; // 0x70        
        Vector m_vecAngularVelocity; // 0x7c        
        client::CSimpleSimTimer m_timerFloorPointCached; // 0x88        
        Vector m_vFloorPointCached; // 0x90        
        bool m_bFloorPointCachingEnabled; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9d[0x27]; // 0x9d
        float m_flSpeed; // 0xc4        
        bool m_bMovementActive; // 0xc8        
        bool m_bEmbeddedRecoveryEnabled; // 0xc9        
        bool m_pEnableForceFacing[2]; // 0xca        
        uint8_t m_nEntityFacingLockCount; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xcd[0x3]; // 0xcd
        // m_vecChoreoEntityFacings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::ChoreoEntityFacing_t> m_vecChoreoEntityFacings;
        char m_vecChoreoEntityFacings[0x18]; // 0xd0        
        Vector m_vBoundaryDistCachedPos; // 0xe8        
        float m_flBoundaryDistCached; // 0xf4        
        server::CAI_MotorNavLink m_motorNavLink; // 0xf8        
        server::CAI_MotorTransition m_motorTransition; // 0x170        
        server::CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // 0x1d0        
        bool m_bIsExecutingMoveSolve; // 0x400        
        [[maybe_unused]] std::uint8_t pad_0x401[0x3]; // 0x401
        server::CAI_InterestTarget m_pEntityFacingRequests[5]; // 0x404        
        server::AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority; // 0x508        
        server::AI_Motor_MovementFacingMode_t m_movementFacingModeRequests[4]; // 0x509        
        server::AI_Motor_DefaultFacing_t m_eDefaultFacing; // 0x50d        
        [[maybe_unused]] std::uint8_t pad_0x50e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Motor because it is not a standard-layout class
    static_assert(sizeof(CAI_Motor) == 0x510);
};
