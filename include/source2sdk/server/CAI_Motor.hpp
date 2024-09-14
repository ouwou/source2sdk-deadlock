#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
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
    // Size: 0x1e8
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
        Vector m_vIdealClimbOrientation; // 0x88        
        client::CSimpleSimTimer m_timerFloorPointCached; // 0x94        
        Vector m_vFloorPointCached; // 0x9c        
        bool m_bFloorPointCachingEnabled; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xa9[0x2b]; // 0xa9
        float m_flSpeed; // 0xd4        
        bool m_bMovementActive; // 0xd8        
        bool m_bEmbeddedRecoveryEnabled; // 0xd9        
        bool m_pEnableForceFacing[2]; // 0xda        
        uint8_t m_nEntityFacingLockCount; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xdd[0x3]; // 0xdd
        // m_vecChoreoEntityFacings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::ChoreoEntityFacing_t> m_vecChoreoEntityFacings;
        char m_vecChoreoEntityFacings[0x18]; // 0xe0        
        Vector m_vBoundaryDistCachedPos; // 0xf8        
        float m_flBoundaryDistCached; // 0x104        
        server::CAI_MotorNavLink m_motorNavLink; // 0x108        
        server::CAI_MotorTransition m_motorTransition; // 0x180        
        bool m_bIsExecutingMoveSolve; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Motor because it is not a standard-layout class
    static_assert(sizeof(CAI_Motor) == 0x1e8);
};
