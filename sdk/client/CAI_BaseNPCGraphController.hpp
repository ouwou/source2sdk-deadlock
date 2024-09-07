#pragma once
#include "client/CAnimGraphControllerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x558
	// Has VTable
	class CAI_BaseNPCGraphController : public client::CAnimGraphControllerBase
	{
	public:
		CAnimGraphParamRef<char*> m_sCurrScheduleName; // 0x18		
		CAnimGraphParamRef<char*> m_sCurrTaskName; // 0x40		
		CAnimGraphParamOptionalRef<char*> m_sTaskHandshakeType; // 0x68		
		CAnimGraphParamRef<char*> m_sTaskHandshakeTypeShared; // 0x90		
		CAnimGraphParamRef<bool> m_bTaskHandshakeRestart; // 0xb8		
		CAnimGraphParamOptionalRef<char*> m_sMovementHandshakeType; // 0xd8		
		CAnimGraphParamRef<char*> m_sMovementHandshakeTypeShared; // 0x100		
		CAnimGraphParamRef<bool> m_bMovementHandshakeRestart; // 0x128		
		CAnimGraphParamOptionalRef<char*> m_sNavLinkType; // 0x148		
		CAnimGraphParamRef<char*> m_sNavLinkTypeShared; // 0x170		
		CAnimGraphParamOptionalRef<float> m_flPathDistanceToNavLink; // 0x198		
		CAnimGraphParamOptionalRef<bool> m_bNavLinkIsOnPath; // 0x1b8		
		CAnimGraphParamOptionalRef<Vector> m_vNavLinkTarget; // 0x1d8		
		CAnimGraphParamOptionalRef<float> m_flEnemyDistance; // 0x1f8		
		CAnimGraphParamOptionalRef<float> m_flEnemyDirection; // 0x218		
		CAnimGraphParamOptionalRef<bool> m_bCanSeeEnemy; // 0x238		
		CAnimGraphParamOptionalRef<bool> m_bEnemyFacingMe; // 0x258		
		CAnimGraphParamOptionalRef<bool> m_bHitTrigger; // 0x278		
		CAnimGraphParamOptionalRef<Vector> m_vecHitDirection; // 0x298		
		CAnimGraphParamOptionalRef<float> m_flHitHeading; // 0x2b8		
		CAnimGraphParamOptionalRef<Vector> m_vecHitOffset; // 0x2d8		
		CAnimGraphParamOptionalRef<float> m_flHitStrength; // 0x2f8		
		CAnimGraphParamOptionalRef<char*> m_pszHitDamageType; // 0x318		
		CAnimGraphParamOptionalRef<char*> m_pszDeathHitLocation; // 0x340		
		CAnimGraphParamOptionalRef<int32_t> m_nHitBone; // 0x368		
		CAnimGraphParamOptionalRef<char*> m_pszNPCState; // 0x388		
		CAnimGraphParamOptionalRef<bool> m_bStunned; // 0x3b0		
		CAnimGraphParamOptionalRef<bool> m_bLookTargetChargedAutoclear; // 0x3d0		
		CAnimGraphParamOptionalRef<char*> m_sBodyIdle; // 0x3f0		
		CAnimGraphParamOptionalRef<char*> m_sFlashlightMode; // 0x418		
		CAnimGraphParamOptionalRef<char*> m_sFacingReason; // 0x440		
		CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0x468		
		CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0x480		
		CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0x498		
		CAnimGraphParamOptionalRef<bool> m_bMoveSolveNudgeActive; // 0x4b0		
		CAnimGraphParamOptionalRef<float> m_flMoveSolveNudgeYaw; // 0x4d0		
		CAnimGraphParamOptionalRef<char*> m_pszDoorOpenAction; // 0x4f0		
		CAnimGraphParamOptionalRef<float> m_flDistanceToDoor; // 0x518		
		CAnimGraphParamOptionalRef<bool> m_bDoorLeft; // 0x538		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_BaseNPCGraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
