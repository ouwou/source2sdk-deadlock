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
        CUtlSymbolLarge m_iszPathName; // 0x7c8        
        // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hPathMover;
        char m_hPathMover[0x4]; // 0x7d0        
        [[maybe_unused]] std::uint8_t pad_0x7d4[0x4]; // 0x7d4
        CUtlSymbolLarge m_iszPathNodeStart; // 0x7d8        
        server::CFuncMover__Move_t m_eMoveType; // 0x7e0        
        bool m_bIsReversing; // 0x7e4        
        [[maybe_unused]] std::uint8_t pad_0x7e5[0x3]; // 0x7e5
        Vector m_vTarget; // 0x7e8        
        float m_flStartSpeed; // 0x7f4        
        float m_flPathLocation; // 0x7f8        
        float m_flT; // 0x7fc        
        int32_t m_nCurrentNodeIndex; // 0x800        
        int32_t m_nPreviousNodeIndex; // 0x804        
        bool m_bFixedOrientation; // 0x808        
        bool m_bFixedPitch; // 0x809        
        client::SolidType_t m_eSolidType; // 0x80a        
        bool m_bIsMoving; // 0x80b        
        float m_flTimeToReachMaxSpeed; // 0x80c        
        float m_flDistanceToReachMaxSpeed; // 0x810        
        float m_flTimeToReachZeroSpeed; // 0x814        
        float m_flDistanceToReachZeroSpeed; // 0x818        
        entity2::GameTime_t m_flTimeMovementStart; // 0x81c        
        entity2::GameTime_t m_flTimeMovementStop; // 0x820        
        // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CMoverPathNode> m_hStopAtNode;
        char m_hStopAtNode[0x4]; // 0x824        
        float m_flPathLocationToBeginStop; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x82c[0x4]; // 0x82c
        CUtlSymbolLarge m_iszStartForwardSound; // 0x830        
        CUtlSymbolLarge m_iszLoopForwardSound; // 0x838        
        CUtlSymbolLarge m_iszStopForwardSound; // 0x840        
        CUtlSymbolLarge m_iszStartReverseSound; // 0x848        
        CUtlSymbolLarge m_iszLoopReverseSound; // 0x850        
        CUtlSymbolLarge m_iszStopReverseSound; // 0x858        
        CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x868[0x8]; // 0x868
        entity2::CEntityIOOutput m_OnMovementEnd; // 0x870        
        bool m_bStartAtEnd; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x899[0x3]; // 0x899
        server::CFuncMover__OrientationUpdate_t m_eOrientationUpdate; // 0x89c        
        entity2::GameTime_t m_flTimeStartOrientationChange; // 0x8a0        
        float m_flTimeToBlendToNewOrientation; // 0x8a4        
        float m_flDurationBlendToNewOrientationRan; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8ac[0x4]; // 0x8ac
        Quaternion m_qOriginalOrientation; // 0x8b0        
        bool m_bCreateMovableNavMesh; // 0x8c0        
        [[maybe_unused]] std::uint8_t pad_0x8c1[0x7]; // 0x8c1
        entity2::CEntityIOOutput m_OnNodePassed; // 0x8c8        
        CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8f0        
        // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOrientationMatchEntity;
        char m_hOrientationMatchEntity[0x4]; // 0x8f8        
        float m_flTimeToTraverseToNextNode; // 0x8fc        
        Vector m_vLerpToNewPositionStart; // 0x900        
        Vector m_vLerpToNewPositionEnd; // 0x90c        
        float m_flLerpToPositionT; // 0x918        
        float m_flLerpToPositionDeltaT; // 0x91c        
        entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x920        
        bool m_bIsPaused; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x949[0x3]; // 0x949
        server::CFuncMover__TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x94c        
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStartForward; // 0x0
        // void InputStartReverse; // 0x0
        // void InputStop; // 0x0
        // void InputToggle; // 0x0
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
