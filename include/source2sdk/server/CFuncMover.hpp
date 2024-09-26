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
        CUtlSymbolLarge m_iszPathName; // 0x768        
        // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hPathMover;
        char m_hPathMover[0x4]; // 0x770        
        [[maybe_unused]] std::uint8_t pad_0x774[0x4]; // 0x774
        CUtlSymbolLarge m_iszPathNodeStart; // 0x778        
        server::CFuncMover__Move_t m_eMoveType; // 0x780        
        bool m_bIsReversing; // 0x784        
        [[maybe_unused]] std::uint8_t pad_0x785[0x3]; // 0x785
        Vector m_vTarget; // 0x788        
        float m_flStartSpeed; // 0x794        
        float m_flPathLocation; // 0x798        
        float m_flT; // 0x79c        
        int32_t m_nCurrentNodeIndex; // 0x7a0        
        int32_t m_nPreviousNodeIndex; // 0x7a4        
        bool m_bFixedOrientation; // 0x7a8        
        bool m_bFixedPitch; // 0x7a9        
        client::SolidType_t m_eSolidType; // 0x7aa        
        bool m_bIsMoving; // 0x7ab        
        float m_flTimeToReachMaxSpeed; // 0x7ac        
        float m_flDistanceToReachMaxSpeed; // 0x7b0        
        float m_flTimeToReachZeroSpeed; // 0x7b4        
        float m_flDistanceToReachZeroSpeed; // 0x7b8        
        entity2::GameTime_t m_flTimeMovementStart; // 0x7bc        
        entity2::GameTime_t m_flTimeMovementStop; // 0x7c0        
        // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CMoverPathNode> m_hStopAtNode;
        char m_hStopAtNode[0x4]; // 0x7c4        
        float m_flPathLocationToBeginStop; // 0x7c8        
        [[maybe_unused]] std::uint8_t pad_0x7cc[0x4]; // 0x7cc
        CUtlSymbolLarge m_iszStartForwardSound; // 0x7d0        
        CUtlSymbolLarge m_iszLoopForwardSound; // 0x7d8        
        CUtlSymbolLarge m_iszStopForwardSound; // 0x7e0        
        CUtlSymbolLarge m_iszStartReverseSound; // 0x7e8        
        CUtlSymbolLarge m_iszLoopReverseSound; // 0x7f0        
        CUtlSymbolLarge m_iszStopReverseSound; // 0x7f8        
        CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x808[0x8]; // 0x808
        entity2::CEntityIOOutput m_OnMovementEnd; // 0x810        
        bool m_bStartAtEnd; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x839[0x3]; // 0x839
        server::CFuncMover__OrientationUpdate_t m_eOrientationUpdate; // 0x83c        
        entity2::GameTime_t m_flTimeStartOrientationChange; // 0x840        
        float m_flTimeToBlendToNewOrientation; // 0x844        
        float m_flDurationBlendToNewOrientationRan; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4]; // 0x84c
        Quaternion m_qOriginalOrientation; // 0x850        
        bool m_bCreateMovableNavMesh; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x861[0xf];
        
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
