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
    // Size: 0xaa8
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
        CUtlSymbolLarge m_iszPreCommands; // 0x9b0        
        CUtlSymbolLarge m_iszPostCommands; // 0x9b8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0x9c0        
        CUtlSymbolLarge m_iszViewTarget; // 0x9c8        
        // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTarget;
        char m_hViewTarget[0x4]; // 0x9d0        
        // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTargetAngles;
        char m_hViewTargetAngles[0x4]; // 0x9d4        
        CUtlSymbolLarge m_iszViewPosition; // 0x9d8        
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0x9e0        
        // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPositionMover;
        char m_hViewPositionMover[0x4]; // 0x9e4        
        bool m_bPreventMovement; // 0x9e8        
        bool m_bUnderCrosshair; // 0x9e9        
        bool m_bUnstoppable; // 0x9ea        
        [[maybe_unused]] std::uint8_t pad_0x9eb[0x1]; // 0x9eb
        entity2::GameTime_t m_flFinishedTime; // 0x9ec        
        Vector m_vecFinishOrigin; // 0x9f0        
        QAngle m_vecOriginalAngles; // 0x9fc        
        QAngle m_vecFinishAngles; // 0xa08        
        bool m_bPreventChangesWhileMoving; // 0xa14        
        bool m_bDisabled; // 0xa15        
        [[maybe_unused]] std::uint8_t pad_0xa16[0x2]; // 0xa16
        Vector m_vecTeleportOrigin; // 0xa18        
        entity2::GameTime_t m_flAbortedPlaybackAt; // 0xa24        
        entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xa28        
        entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xa50        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa79[0x3]; // 0xa79
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xa7c        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xa84[0x4]; // 0xa84
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0xa88        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0xa90        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0xa98        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0xa9c        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xaa1[0x7];
        
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
    static_assert(sizeof(CPointCommentaryNode) == 0xaa8);
};
