#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaa0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
    // static metadata: MNetworkVarNames "string_t m_iszTitle"
    // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
    // static metadata: MNetworkVarNames "int m_iNodeNumber"
    // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
    // static metadata: MNetworkVarNames "bool m_bListenedTo"
    #pragma pack(push, 1)
    class CPointCommentaryNode : public server::CBaseAnimGraph
    {
    public:
        CUtlSymbolLarge m_iszPreCommands; // 0x9a8        
        CUtlSymbolLarge m_iszPostCommands; // 0x9b0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0x9b8        
        CUtlSymbolLarge m_iszViewTarget; // 0x9c0        
        // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTarget;
        char m_hViewTarget[0x4]; // 0x9c8        
        // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTargetAngles;
        char m_hViewTargetAngles[0x4]; // 0x9cc        
        CUtlSymbolLarge m_iszViewPosition; // 0x9d0        
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0x9d8        
        // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPositionMover;
        char m_hViewPositionMover[0x4]; // 0x9dc        
        bool m_bPreventMovement; // 0x9e0        
        bool m_bUnderCrosshair; // 0x9e1        
        bool m_bUnstoppable; // 0x9e2        
        [[maybe_unused]] std::uint8_t pad_0x9e3[0x1]; // 0x9e3
        entity2::GameTime_t m_flFinishedTime; // 0x9e4        
        Vector m_vecFinishOrigin; // 0x9e8        
        QAngle m_vecOriginalAngles; // 0x9f4        
        QAngle m_vecFinishAngles; // 0xa00        
        bool m_bPreventChangesWhileMoving; // 0xa0c        
        bool m_bDisabled; // 0xa0d        
        [[maybe_unused]] std::uint8_t pad_0xa0e[0x2]; // 0xa0e
        Vector m_vecTeleportOrigin; // 0xa10        
        entity2::GameTime_t m_flAbortedPlaybackAt; // 0xa1c        
        entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xa20        
        entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xa48        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa71[0x3]; // 0xa71
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xa74        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa7c[0x4]; // 0xa7c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0xa80        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0xa88        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0xa90        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0xa94        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0xa98        
        [[maybe_unused]] std::uint8_t pad_0xa99[0x7];
        
        // Datamap fields:
        // void InputStartCommentary; // 0x0
        // void InputStartUnstoppableCommentary; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void CPointCommentaryNodeSpinThink; // 0x0
        // void CPointCommentaryNodeUpdateViewThink; // 0x0
        // void CPointCommentaryNodeUpdateViewPostThink; // 0x0
        // void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
    static_assert(sizeof(CPointCommentaryNode) == 0xaa0);
};
