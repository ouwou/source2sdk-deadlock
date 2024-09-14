#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimTimer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_WaypointList.hpp"
#include "source2sdk/server/CNavSmartGoalHelper.hpp"
#include "source2sdk/server/Navigation_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_Path;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1f0
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Navigator : public client::CAI_Component
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x8]; // 0x40
        float m_flGoalStoppingDistance; // 0x48        
        server::Navigation_t m_navType; // 0x4c        
        bool m_bNavComplete; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x1f]; // 0x51
        server::CAI_Path* m_pPath; // 0x70        
        // m_hLosTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLosTarget;
        char m_hLosTarget[0x4]; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4]; // 0x7c
        server::CAI_WaypointList m_interruptPathWaypoints; // 0x80        
        entity2::GameTime_t m_flLastSuccessfulSimplifyTime; // 0x88        
        entity2::GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x8c        
        entity2::GameTime_t m_flLastMoveTime; // 0x90        
        entity2::GameTime_t m_flStartWaitingForFacingTime; // 0x94        
        bool m_bPeerMoveWait; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x99[0x3]; // 0x99
        // m_hPeerWaitingOn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPeerWaitingOn;
        char m_hPeerWaitingOn[0x4]; // 0x9c        
        client::CSimTimer m_PeerWaitMoveTimer; // 0xa0        
        client::CSimTimer m_PeerWaitClearTimer; // 0xac        
        client::CSimTimer m_NextSidestepTimer; // 0xb8        
        // m_hBigStepGroundEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBigStepGroundEnt;
        char m_hBigStepGroundEnt[0x4]; // 0xc4        
        // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastBlockingEnt;
        char m_hLastBlockingEnt[0x4]; // 0xc8        
        Vector m_vPosBeginFailedSteer; // 0xcc        
        entity2::GameTime_t m_timeBeginFailedSteer; // 0xd8        
        int32_t m_nNavFailCounter; // 0xdc        
        entity2::GameTime_t m_flLastNavFailTime; // 0xe0        
        bool m_bShouldBruteForceFailedNav; // 0xe4        
        bool m_bNavChangedAlongPath; // 0xe5        
        [[maybe_unused]] std::uint8_t pad_0xe6[0x2]; // 0xe6
        int32_t m_nPreviousCollisionGroup; // 0xe8        
        entity2::GameTime_t m_flLastNpcOverlapTime; // 0xec        
        float m_flGoalTolerance; // 0xf0        
        float m_flWaypointTolerance; // 0xf4        
        Vector m_vGoalDirection; // 0xf8        
        // m_hGoalDirectionTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalDirectionTarget;
        char m_hGoalDirectionTarget[0x4]; // 0x104        
        float m_flGoalDirectionToleranceDot; // 0x108        
        float m_flPathEndGoalRange; // 0x10c        
        float m_flPathEndGoalRange_Repathing; // 0x110        
        bool m_bGoalRequiresCrouch; // 0x114        
        [[maybe_unused]] std::uint8_t pad_0x115[0x3]; // 0x115
        float m_flGoalMaxPathLength; // 0x118        
        float m_flGoalMaxTravelDist; // 0x11c        
        CUtlString m_pathRestrictionTag; // 0x120        
        [[maybe_unused]] std::uint8_t pad_0x128[0x18]; // 0x128
        server::CNavSmartGoalHelper m_smartGoalHelper; // 0x140        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Navigator because it is not a standard-layout class
    static_assert(sizeof(CAI_Navigator) == 0x1f0);
};
