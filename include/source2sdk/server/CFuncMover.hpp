#pragma once
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover__Move_t.hpp"
#include "source2sdk/server/CFuncMover__OrientationUpdate_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

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
    // Size: 0x870
    // Has VTable
    #pragma pack(push, 1)
    class CFuncMover : public server::CBaseModelEntity
    {
    public:
        bool m_bCreateMovableNavMesh; // 0x768        
        [[maybe_unused]] std::uint8_t pad_0x769[0x7]; // 0x769
        CUtlSymbolLarge m_iszPathName; // 0x770        
        // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hPathMover;
        char m_hPathMover[0x4]; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x77c[0x4]; // 0x77c
        CUtlSymbolLarge m_iszPathNodeStart; // 0x780        
        server::CFuncMover__Move_t m_eMoveType; // 0x788        
        bool m_bIsReversing; // 0x78c        
        [[maybe_unused]] std::uint8_t pad_0x78d[0x3]; // 0x78d
        Vector m_vTarget; // 0x790        
        float m_flStartSpeed; // 0x79c        
        float m_flPathLocation; // 0x7a0        
        float m_flT; // 0x7a4        
        int32_t m_nCurrentNodeIndex; // 0x7a8        
        int32_t m_nPreviousNodeIndex; // 0x7ac        
        bool m_bFixedOrientation; // 0x7b0        
        bool m_bFixedPitch; // 0x7b1        
        client::SolidType_t m_eSolidType; // 0x7b2        
        bool m_bIsMoving; // 0x7b3        
        float m_flTimeToReachMaxSpeed; // 0x7b4        
        float m_flDistanceToReachMaxSpeed; // 0x7b8        
        float m_flTimeToReachZeroSpeed; // 0x7bc        
        float m_flDistanceToReachZeroSpeed; // 0x7c0        
        entity2::GameTime_t m_flTimeMovementStart; // 0x7c4        
        entity2::GameTime_t m_flTimeMovementStop; // 0x7c8        
        // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CMoverPathNode> m_hStopAtNode;
        char m_hStopAtNode[0x4]; // 0x7cc        
        float m_flPathLocationToBeginStop; // 0x7d0        
        [[maybe_unused]] std::uint8_t pad_0x7d4[0x4]; // 0x7d4
        CUtlSymbolLarge m_iszStartForwardSound; // 0x7d8        
        CUtlSymbolLarge m_iszLoopForwardSound; // 0x7e0        
        CUtlSymbolLarge m_iszStopForwardSound; // 0x7e8        
        CUtlSymbolLarge m_iszStartReverseSound; // 0x7f0        
        CUtlSymbolLarge m_iszLoopReverseSound; // 0x7f8        
        CUtlSymbolLarge m_iszStopReverseSound; // 0x800        
        CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x810[0x8]; // 0x810
        entity2::CEntityIOOutput m_OnMovementEnd; // 0x818        
        bool m_bStartAtEnd; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x3]; // 0x841
        server::CFuncMover__OrientationUpdate_t m_eOrientationUpdate; // 0x844        
        entity2::GameTime_t m_flTimeStartOrientationChange; // 0x848        
        float m_flTimeToBlendToNewOrientation; // 0x84c        
        float m_flDurationBlendToNewOrientationRan; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0xc]; // 0x854
        Quaternion m_qOriginalOrientation; // 0x860        
        
        // Datamap fields:
        // void InputStartForward; // 0x0
        // void InputStartReverse; // 0x0
        // void InputStop; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
        // CUtlSymbolLarge InputMoveToPathNode; // 0x0
        // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetSpeedImmediate; // 0x0
        // float InputSetTimeToReachMaxSpeed; // 0x0
        // float InputSetTimeToBlendToNewOrientation; // 0x0
        // void CFuncMoverMove; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
    static_assert(sizeof(CFuncMover) == 0x870);
};
