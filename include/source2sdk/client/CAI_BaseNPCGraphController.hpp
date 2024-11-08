#pragma once
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x940
    // Has VTable
    #pragma pack(push, 1)
    class CAI_BaseNPCGraphController : public client::CBaseAnimGraphAnimGraphController
    {
    public:
        // m_sCurrScheduleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_sCurrScheduleName;
        char m_sCurrScheduleName[0x20]; // 0xc8        
        // m_sCurrTaskName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_sCurrTaskName;
        char m_sCurrTaskName[0x20]; // 0xe8        
        // m_sTaskHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sTaskHandshakeType;
        char m_sTaskHandshakeType[0x28]; // 0x108        
        // m_sTaskHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_sTaskHandshakeTypeShared;
        char m_sTaskHandshakeTypeShared[0x20]; // 0x130        
        // m_bTaskHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bTaskHandshakeRestart;
        char m_bTaskHandshakeRestart[0x18]; // 0x150        
        // m_sMovementHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sMovementHandshakeType;
        char m_sMovementHandshakeType[0x28]; // 0x168        
        // m_sMovementHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_sMovementHandshakeTypeShared;
        char m_sMovementHandshakeTypeShared[0x20]; // 0x190        
        // m_bMovementHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bMovementHandshakeRestart;
        char m_bMovementHandshakeRestart[0x18]; // 0x1b0        
        // m_sNavLinkType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sNavLinkType;
        char m_sNavLinkType[0x28]; // 0x1c8        
        // m_sNavLinkTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_sNavLinkTypeShared;
        char m_sNavLinkTypeShared[0x20]; // 0x1f0        
        // m_flPathDistanceToNavLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flPathDistanceToNavLink;
        char m_flPathDistanceToNavLink[0x20]; // 0x210        
        // m_bNavLinkIsOnPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bNavLinkIsOnPath;
        char m_bNavLinkIsOnPath[0x20]; // 0x230        
        // m_vecNavLinkTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecNavLinkTarget;
        char m_vecNavLinkTarget[0x20]; // 0x250        
        // m_vecNavLinkUp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecNavLinkUp;
        char m_vecNavLinkUp[0x20]; // 0x270        
        // m_vMovementStopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementStopFacePosition;
        char m_vMovementStopFacePosition[0x20]; // 0x290        
        // m_vMovementHopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementHopFacePosition;
        char m_vMovementHopFacePosition[0x20]; // 0x2b0        
        // m_vMovementStopPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementStopPosition;
        char m_vMovementStopPosition[0x20]; // 0x2d0        
        // m_vMovementStartFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementStartFacePosition;
        char m_vMovementStartFacePosition[0x20]; // 0x2f0        
        // m_vMovementIdleTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementIdleTurnFacePosition;
        char m_vMovementIdleTurnFacePosition[0x20]; // 0x310        
        // m_vMovementPlantedTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementPlantedTurnFacePosition;
        char m_vMovementPlantedTurnFacePosition[0x20]; // 0x330        
        // m_vMovementForwardDirectionOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementForwardDirectionOverride;
        char m_vMovementForwardDirectionOverride[0x20]; // 0x350        
        // m_flMovementLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flMovementLean;
        char m_flMovementLean[0x20]; // 0x370        
        // m_flMovementDesiredMoveHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flMovementDesiredMoveHeading;
        char m_flMovementDesiredMoveHeading[0x20]; // 0x390        
        // m_sMovementStopType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sMovementStopType;
        char m_sMovementStopType[0x28]; // 0x3b0        
        // m_sMovementState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sMovementState;
        char m_sMovementState[0x28]; // 0x3d8        
        // m_sMovementHandshakeState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sMovementHandshakeState;
        char m_sMovementHandshakeState[0x28]; // 0x400        
        CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // 0x428        
        CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // 0x440        
        CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // 0x458        
        CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // 0x470        
        CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // 0x488        
        CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // 0x4a0        
        CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0x4b8        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0x4d0        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0x4e8        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0x500        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0x518        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0x530        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0x548        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // 0x560        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // 0x578        
        CAnimGraphTagOptionalRef m_sMovementRightFootDown; // 0x590        
        CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // 0x5a8        
        // m_flEnemyDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flEnemyDistance;
        char m_flEnemyDistance[0x20]; // 0x5c0        
        // m_flEnemyDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flEnemyDirection;
        char m_flEnemyDirection[0x20]; // 0x5e0        
        // m_bCanSeeEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bCanSeeEnemy;
        char m_bCanSeeEnemy[0x20]; // 0x600        
        // m_bEnemyFacingMe has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bEnemyFacingMe;
        char m_bEnemyFacingMe[0x20]; // 0x620        
        // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
        char m_bHitTrigger[0x20]; // 0x640        
        // m_vecHitDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecHitDirection;
        char m_vecHitDirection[0x20]; // 0x660        
        // m_flHitHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHitHeading;
        char m_flHitHeading[0x20]; // 0x680        
        // m_vecHitOffset has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecHitOffset;
        char m_vecHitOffset[0x20]; // 0x6a0        
        // m_flHitStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHitStrength;
        char m_flHitStrength[0x20]; // 0x6c0        
        // m_pszHitDamageType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszHitDamageType;
        char m_pszHitDamageType[0x28]; // 0x6e0        
        // m_pszDeathHitLocation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDeathHitLocation;
        char m_pszDeathHitLocation[0x28]; // 0x708        
        // m_nHitBone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nHitBone;
        char m_nHitBone[0x20]; // 0x730        
        // m_pszNPCState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszNPCState;
        char m_pszNPCState[0x28]; // 0x750        
        // m_bStunned has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bStunned;
        char m_bStunned[0x20]; // 0x778        
        // m_bLookTargetChargedAutoclear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bLookTargetChargedAutoclear;
        char m_bLookTargetChargedAutoclear[0x20]; // 0x798        
        // m_sBodyIdle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sBodyIdle;
        char m_sBodyIdle[0x28]; // 0x7b8        
        // m_sFlashlightMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sFlashlightMode;
        char m_sFlashlightMode[0x28]; // 0x7e0        
        // m_sFacingReason has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sFacingReason;
        char m_sFacingReason[0x28]; // 0x808        
        CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x830        
        CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x848        
        CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x860        
        // m_bMoveSolveNudgeActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bMoveSolveNudgeActive;
        char m_bMoveSolveNudgeActive[0x20]; // 0x878        
        // m_flMoveSolveNudgeYaw has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flMoveSolveNudgeYaw;
        char m_flMoveSolveNudgeYaw[0x20]; // 0x898        
        // m_pszDoorOpenAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDoorOpenAction;
        char m_pszDoorOpenAction[0x28]; // 0x8b8        
        // m_flDistanceToDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flDistanceToDoor;
        char m_flDistanceToDoor[0x20]; // 0x8e0        
        // m_bDoorLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bDoorLeft;
        char m_bDoorLeft[0x20]; // 0x900        
        // m_flBlinkAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flBlinkAmount;
        char m_flBlinkAmount[0x20]; // 0x920        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_BaseNPCGraphController because it is not a standard-layout class
    static_assert(sizeof(CAI_BaseNPCGraphController) == 0x940);
};
