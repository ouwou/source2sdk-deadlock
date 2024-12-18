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
    // Size: 0xb30
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
        CUtlSymbolLarge m_iszPreCommands; // 0xa38        
        CUtlSymbolLarge m_iszPostCommands; // 0xa40        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0xa48        
        CUtlSymbolLarge m_iszViewTarget; // 0xa50        
        // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTarget;
        char m_hViewTarget[0x4]; // 0xa58        
        // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTargetAngles;
        char m_hViewTargetAngles[0x4]; // 0xa5c        
        CUtlSymbolLarge m_iszViewPosition; // 0xa60        
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0xa68        
        // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPositionMover;
        char m_hViewPositionMover[0x4]; // 0xa6c        
        bool m_bPreventMovement; // 0xa70        
        bool m_bUnderCrosshair; // 0xa71        
        bool m_bUnstoppable; // 0xa72        
        [[maybe_unused]] std::uint8_t pad_0xa73[0x1]; // 0xa73
        entity2::GameTime_t m_flFinishedTime; // 0xa74        
        Vector m_vecFinishOrigin; // 0xa78        
        QAngle m_vecOriginalAngles; // 0xa84        
        QAngle m_vecFinishAngles; // 0xa90        
        bool m_bPreventChangesWhileMoving; // 0xa9c        
        bool m_bDisabled; // 0xa9d        
        [[maybe_unused]] std::uint8_t pad_0xa9e[0x2]; // 0xa9e
        Vector m_vecTeleportOrigin; // 0xaa0        
        entity2::GameTime_t m_flAbortedPlaybackAt; // 0xaac        
        entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xab0        
        entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xad8        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x3]; // 0xb01
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xb04        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x4]; // 0xb0c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0xb10        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0xb18        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0xb20        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0xb24        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb29[0x7];
        
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
    static_assert(sizeof(CPointCommentaryNode) == 0xb30);
};
