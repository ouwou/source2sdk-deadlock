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
    // Size: 0xb40
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
        CUtlSymbolLarge m_iszPreCommands; // 0xa48        
        CUtlSymbolLarge m_iszPostCommands; // 0xa50        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0xa58        
        CUtlSymbolLarge m_iszViewTarget; // 0xa60        
        // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTarget;
        char m_hViewTarget[0x4]; // 0xa68        
        // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTargetAngles;
        char m_hViewTargetAngles[0x4]; // 0xa6c        
        CUtlSymbolLarge m_iszViewPosition; // 0xa70        
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0xa78        
        // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPositionMover;
        char m_hViewPositionMover[0x4]; // 0xa7c        
        bool m_bPreventMovement; // 0xa80        
        bool m_bUnderCrosshair; // 0xa81        
        bool m_bUnstoppable; // 0xa82        
        [[maybe_unused]] std::uint8_t pad_0xa83[0x1]; // 0xa83
        entity2::GameTime_t m_flFinishedTime; // 0xa84        
        Vector m_vecFinishOrigin; // 0xa88        
        QAngle m_vecOriginalAngles; // 0xa94        
        QAngle m_vecFinishAngles; // 0xaa0        
        bool m_bPreventChangesWhileMoving; // 0xaac        
        bool m_bDisabled; // 0xaad        
        [[maybe_unused]] std::uint8_t pad_0xaae[0x2]; // 0xaae
        Vector m_vecTeleportOrigin; // 0xab0        
        entity2::GameTime_t m_flAbortedPlaybackAt; // 0xabc        
        entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xac0        
        entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xae8        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x3]; // 0xb11
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xb14        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb1c[0x4]; // 0xb1c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0xb20        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0xb28        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0xb30        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0xb34        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb39[0x7];
        
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
    static_assert(sizeof(CPointCommentaryNode) == 0xb40);
};
