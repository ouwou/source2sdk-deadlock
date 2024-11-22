#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimTimer.hpp"
#include "source2sdk/client/StanceType_t.hpp"
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
    // Size: 0x208
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
        Vector m_vThreatPos; // 0x7c        
        server::CAI_WaypointList m_interruptPathWaypoints; // 0x88        
        entity2::GameTime_t m_flLastSuccessfulSimplifyTime; // 0x90        
        entity2::GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x94        
        entity2::GameTime_t m_flLastMoveTime; // 0x98        
        entity2::GameTime_t m_flStartWaitingForFacingTime; // 0x9c        
        bool m_bPeerMoveWait; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x3]; // 0xa1
        // m_hPeerWaitingOn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPeerWaitingOn;
        char m_hPeerWaitingOn[0x4]; // 0xa4        
        client::CSimTimer m_PeerWaitMoveTimer; // 0xa8        
        client::CSimTimer m_PeerWaitClearTimer; // 0xb4        
        client::CSimTimer m_NextSidestepTimer; // 0xc0        
        // m_hBigStepGroundEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBigStepGroundEnt;
        char m_hBigStepGroundEnt[0x4]; // 0xcc        
        // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastBlockingEnt;
        char m_hLastBlockingEnt[0x4]; // 0xd0        
        Vector m_vPosBeginFailedSteer; // 0xd4        
        entity2::GameTime_t m_timeBeginFailedSteer; // 0xe0        
        int32_t m_nNavFailCounter; // 0xe4        
        entity2::GameTime_t m_flLastNavFailTime; // 0xe8        
        bool m_bShouldBruteForceFailedNav; // 0xec        
        bool m_bNavChangedAlongPath; // 0xed        
        [[maybe_unused]] std::uint8_t pad_0xee[0x2]; // 0xee
        int32_t m_nPreviousCollisionGroup; // 0xf0        
        entity2::GameTime_t m_flLastNpcOverlapTime; // 0xf4        
        float m_flGoalTolerance; // 0xf8        
        float m_flWaypointTolerance; // 0xfc        
        Vector m_vGoalDirection; // 0x100        
        // m_hGoalDirectionTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalDirectionTarget;
        char m_hGoalDirectionTarget[0x4]; // 0x10c        
        float m_flGoalDirectionToleranceDot; // 0x110        
        client::StanceType_t m_eGoalStance; // 0x114        
        float m_flPathEndGoalRange; // 0x118        
        float m_flPathEndGoalRange_Repathing; // 0x11c        
        float m_flGoalMaxPathLength; // 0x120        
        float m_flGoalMaxTravelDist; // 0x124        
        CUtlString m_pathRestrictionTag; // 0x128        
        [[maybe_unused]] std::uint8_t pad_0x130[0x18]; // 0x130
        server::CNavSmartGoalHelper m_smartGoalHelper; // 0x148        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Navigator because it is not a standard-layout class
    static_assert(sizeof(CAI_Navigator) == 0x208);
};
