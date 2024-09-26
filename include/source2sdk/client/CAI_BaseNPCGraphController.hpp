#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
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
    // Size: 0x6f0
    // Has VTable
    #pragma pack(push, 1)
    class CAI_BaseNPCGraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_sCurrScheduleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_sCurrScheduleName;
        char m_sCurrScheduleName[0x28]; // 0x20        
        // m_sCurrTaskName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_sCurrTaskName;
        char m_sCurrTaskName[0x28]; // 0x48        
        // m_sTaskHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sTaskHandshakeType;
        char m_sTaskHandshakeType[0x28]; // 0x70        
        // m_sTaskHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_sTaskHandshakeTypeShared;
        char m_sTaskHandshakeTypeShared[0x28]; // 0x98        
        // m_bTaskHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bTaskHandshakeRestart;
        char m_bTaskHandshakeRestart[0x20]; // 0xc0        
        // m_sMovementHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sMovementHandshakeType;
        char m_sMovementHandshakeType[0x28]; // 0xe0        
        // m_sMovementHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_sMovementHandshakeTypeShared;
        char m_sMovementHandshakeTypeShared[0x28]; // 0x108        
        // m_bMovementHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bMovementHandshakeRestart;
        char m_bMovementHandshakeRestart[0x20]; // 0x130        
        // m_sNavLinkType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sNavLinkType;
        char m_sNavLinkType[0x28]; // 0x150        
        // m_sNavLinkTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_sNavLinkTypeShared;
        char m_sNavLinkTypeShared[0x28]; // 0x178        
        // m_flPathDistanceToNavLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flPathDistanceToNavLink;
        char m_flPathDistanceToNavLink[0x20]; // 0x1a0        
        // m_bNavLinkIsOnPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bNavLinkIsOnPath;
        char m_bNavLinkIsOnPath[0x20]; // 0x1c0        
        // m_vecNavLinkTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecNavLinkTarget;
        char m_vecNavLinkTarget[0x20]; // 0x1e0        
        // m_vMovementStopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementStopFacePosition;
        char m_vMovementStopFacePosition[0x20]; // 0x200        
        // m_vMovementStopPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementStopPosition;
        char m_vMovementStopPosition[0x20]; // 0x220        
        // m_vMovementStartFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementStartFacePosition;
        char m_vMovementStartFacePosition[0x20]; // 0x240        
        // m_vMovementIdleTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vMovementIdleTurnFacePosition;
        char m_vMovementIdleTurnFacePosition[0x20]; // 0x260        
        CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0x280        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0x298        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0x2b0        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0x2c8        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0x2e0        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0x2f8        
        CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0x310        
        // m_flEnemyDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flEnemyDistance;
        char m_flEnemyDistance[0x20]; // 0x328        
        // m_flEnemyDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flEnemyDirection;
        char m_flEnemyDirection[0x20]; // 0x348        
        // m_bCanSeeEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bCanSeeEnemy;
        char m_bCanSeeEnemy[0x20]; // 0x368        
        // m_bEnemyFacingMe has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bEnemyFacingMe;
        char m_bEnemyFacingMe[0x20]; // 0x388        
        // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
        char m_bHitTrigger[0x20]; // 0x3a8        
        // m_vecHitDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecHitDirection;
        char m_vecHitDirection[0x20]; // 0x3c8        
        // m_flHitHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHitHeading;
        char m_flHitHeading[0x20]; // 0x3e8        
        // m_vecHitOffset has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<Vector> m_vecHitOffset;
        char m_vecHitOffset[0x20]; // 0x408        
        // m_flHitStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHitStrength;
        char m_flHitStrength[0x20]; // 0x428        
        // m_pszHitDamageType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszHitDamageType;
        char m_pszHitDamageType[0x28]; // 0x448        
        // m_pszDeathHitLocation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDeathHitLocation;
        char m_pszDeathHitLocation[0x28]; // 0x470        
        // m_nHitBone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nHitBone;
        char m_nHitBone[0x20]; // 0x498        
        // m_pszNPCState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszNPCState;
        char m_pszNPCState[0x28]; // 0x4b8        
        // m_bStunned has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bStunned;
        char m_bStunned[0x20]; // 0x4e0        
        // m_bLookTargetChargedAutoclear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bLookTargetChargedAutoclear;
        char m_bLookTargetChargedAutoclear[0x20]; // 0x500        
        // m_sBodyIdle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sBodyIdle;
        char m_sBodyIdle[0x28]; // 0x520        
        // m_sFlashlightMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sFlashlightMode;
        char m_sFlashlightMode[0x28]; // 0x548        
        // m_sDestructiblePartDestroyedHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sDestructiblePartDestroyedHitGroup;
        char m_sDestructiblePartDestroyedHitGroup[0x28]; // 0x570        
        // m_nDestructiblePartDestroyedPartIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nDestructiblePartDestroyedPartIndex;
        char m_nDestructiblePartDestroyedPartIndex[0x20]; // 0x598        
        // m_sFacingReason has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sFacingReason;
        char m_sFacingReason[0x28]; // 0x5b8        
        CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x5e0        
        CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x5f8        
        CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x610        
        // m_bMoveSolveNudgeActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bMoveSolveNudgeActive;
        char m_bMoveSolveNudgeActive[0x20]; // 0x628        
        // m_flMoveSolveNudgeYaw has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flMoveSolveNudgeYaw;
        char m_flMoveSolveNudgeYaw[0x20]; // 0x648        
        // m_pszDoorOpenAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDoorOpenAction;
        char m_pszDoorOpenAction[0x28]; // 0x668        
        // m_flDistanceToDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flDistanceToDoor;
        char m_flDistanceToDoor[0x20]; // 0x690        
        // m_bDoorLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bDoorLeft;
        char m_bDoorLeft[0x20]; // 0x6b0        
        // m_flBlinkAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flBlinkAmount;
        char m_flBlinkAmount[0x20]; // 0x6d0        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_BaseNPCGraphController because it is not a standard-layout class
    static_assert(sizeof(CAI_BaseNPCGraphController) == 0x6f0);
};
