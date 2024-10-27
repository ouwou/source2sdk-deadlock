#pragma once
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover__Move_t.hpp"
#include "source2sdk/server/CFuncMover__OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover__TransitionToPathNodeAction_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CMoverPathNode;
};

namespace source2sdk::server
{
    class CPathMover;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x950
    // Has VTable
    #pragma pack(push, 1)
    class CFuncMover : public server::CBaseModelEntity
    {
    public:
        CUtlSymbolLarge m_iszPathName; // 0x7a0        
        // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hPathMover;
        char m_hPathMover[0x4]; // 0x7a8        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0x4]; // 0x7ac
        CUtlSymbolLarge m_iszPathNodeStart; // 0x7b0        
        server::CFuncMover__Move_t m_eMoveType; // 0x7b8        
        bool m_bIsReversing; // 0x7bc        
        [[maybe_unused]] std::uint8_t pad_0x7bd[0x3]; // 0x7bd
        Vector m_vTarget; // 0x7c0        
        float m_flStartSpeed; // 0x7cc        
        float m_flPathLocation; // 0x7d0        
        float m_flT; // 0x7d4        
        int32_t m_nCurrentNodeIndex; // 0x7d8        
        int32_t m_nPreviousNodeIndex; // 0x7dc        
        bool m_bFixedOrientation; // 0x7e0        
        bool m_bFixedPitch; // 0x7e1        
        client::SolidType_t m_eSolidType; // 0x7e2        
        bool m_bIsMoving; // 0x7e3        
        float m_flTimeToReachMaxSpeed; // 0x7e4        
        float m_flDistanceToReachMaxSpeed; // 0x7e8        
        float m_flTimeToReachZeroSpeed; // 0x7ec        
        float m_flDistanceToReachZeroSpeed; // 0x7f0        
        entity2::GameTime_t m_flTimeMovementStart; // 0x7f4        
        entity2::GameTime_t m_flTimeMovementStop; // 0x7f8        
        // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CMoverPathNode> m_hStopAtNode;
        char m_hStopAtNode[0x4]; // 0x7fc        
        float m_flPathLocationToBeginStop; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x804[0x4]; // 0x804
        CUtlSymbolLarge m_iszStartForwardSound; // 0x808        
        CUtlSymbolLarge m_iszLoopForwardSound; // 0x810        
        CUtlSymbolLarge m_iszStopForwardSound; // 0x818        
        CUtlSymbolLarge m_iszStartReverseSound; // 0x820        
        CUtlSymbolLarge m_iszLoopReverseSound; // 0x828        
        CUtlSymbolLarge m_iszStopReverseSound; // 0x830        
        CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x840[0x8]; // 0x840
        entity2::CEntityIOOutput m_OnMovementEnd; // 0x848        
        bool m_bStartAtEnd; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x3]; // 0x871
        server::CFuncMover__OrientationUpdate_t m_eOrientationUpdate; // 0x874        
        entity2::GameTime_t m_flTimeStartOrientationChange; // 0x878        
        float m_flTimeToBlendToNewOrientation; // 0x87c        
        float m_flDurationBlendToNewOrientationRan; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x884[0xc]; // 0x884
        Quaternion m_qOriginalOrientation; // 0x890        
        bool m_bCreateMovableNavMesh; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8a1[0x7]; // 0x8a1
        entity2::CEntityIOOutput m_OnNodePassed; // 0x8a8        
        CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8d0        
        // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOrientationMatchEntity;
        char m_hOrientationMatchEntity[0x4]; // 0x8d8        
        float m_flTimeToTraverseToNextNode; // 0x8dc        
        Vector m_vLerpToNewPositionStart; // 0x8e0        
        Vector m_vLerpToNewPositionEnd; // 0x8ec        
        float m_flLerpToPositionT; // 0x8f8        
        float m_flLerpToPositionDeltaT; // 0x8fc        
        entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x900        
        bool m_bIsPaused; // 0x928        
        [[maybe_unused]] std::uint8_t pad_0x929[0x3]; // 0x929
        server::CFuncMover__TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x92c        
        int32_t m_nDelayedTeleportToNode; // 0x930        
        bool m_bIsVerboseLogging; // 0x934        
        [[maybe_unused]] std::uint8_t pad_0x935[0x1b];
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStartForward; // 0x0
        // void InputStartReverse; // 0x0
        // void InputStop; // 0x0
        // void InputToggle; // 0x0
        // void InputToggleDirection; // 0x0
        // void InputPause; // 0x0
        // void InputUnpause; // 0x0
        // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
        // CUtlSymbolLarge InputMoveToPathNode; // 0x0
        // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
        // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
        // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetSpeedImmediate; // 0x0
        // float InputSetTimeToReachMaxSpeed; // 0x0
        // float InputSetTimeToBlendToNewOrientation; // 0x0
        // int32_t InputSetOrientationMode; // 0x0
        // void CFuncMoverMove; // 0x0
        // void CFuncMoverLerpToNewPosition; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
    static_assert(sizeof(CFuncMover) == 0x950);
};
