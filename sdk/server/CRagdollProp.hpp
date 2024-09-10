#pragma once
#include "client/ragdoll_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb40
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_ragPos"
	// MNetworkVarNames "QAngle m_ragAngles"
	// MNetworkVarNames "EHANDLE m_hRagdollSource"
	// MNetworkVarNames "float32 m_flBlendWeight"
	class CRagdollProp : public server::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad09a0[0x8]; // 0x9a0
	public:
		client::ragdoll_t m_ragdoll; // 0x9a8		
		bool m_bStartDisabled; // 0x9e0		
	private:
		[[maybe_unused]] uint8_t __pad09e1[0x7]; // 0x9e1
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		CNetworkUtlVectorBase<Vector> m_ragPos; // 0x9e8		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "13"
		CNetworkUtlVectorBase<QAngle> m_ragAngles; // 0xa00		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hRagdollSource; // 0xa18		
		uint32_t m_lastUpdateTickCount; // 0xa1c		
		bool m_allAsleep; // 0xa20		
		bool m_bFirstCollisionAfterLaunch; // 0xa21		
	private:
		[[maybe_unused]] uint8_t __pad0a22[0x2]; // 0xa22
	public:
		CHandle<server::CBaseEntity> m_hDamageEntity; // 0xa24		
		CHandle<server::CBaseEntity> m_hKiller; // 0xa28		
		CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker; // 0xa2c		
		entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa30		
		entity2::GameTime_t m_flFadeOutStartTime; // 0xa34		
		float m_flFadeTime; // 0xa38		
		// MNetworkDisable
		Vector m_vecLastOrigin; // 0xa3c		
		entity2::GameTime_t m_flAwakeTime; // 0xa48		
		entity2::GameTime_t m_flLastOriginChangeTime; // 0xa4c		
		CUtlSymbolLarge m_strOriginClassName; // 0xa50		
		CUtlSymbolLarge m_strSourceClassName; // 0xa58		
		bool m_bHasBeenPhysgunned; // 0xa60		
		bool m_bShouldTeleportPhysics; // 0xa61		
	private:
		[[maybe_unused]] uint8_t __pad0a62[0x2]; // 0xa62
	public:
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		float m_flBlendWeight; // 0xa64		
		float m_flDefaultFadeScale; // 0xa68		
	private:
		[[maybe_unused]] uint8_t __pad0a6c[0x4]; // 0xa6c
	public:
		CUtlVector<Vector> m_ragdollMins; // 0xa70		
		CUtlVector<Vector> m_ragdollMaxs; // 0xa88		
		bool m_bShouldDeleteActivationRecord; // 0xaa0		
	private:
		[[maybe_unused]] uint8_t __pad0aa1[0x5f]; // 0xaa1
	public:
		bool m_bValidatePoweredRagdollPose; // 0xb00		
		
		// Datamap fields:
		// void m_ragdoll.boneIndex; // 0x9c0
		// void InputEnableMotion; // 0x0
		// void InputDisableMotion; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// float InputFadeAndRemove; // 0x0
		// void CRagdollPropSetDebrisThink; // 0x0
		// void CRagdollPropClearFlagsThink; // 0x0
		// void CRagdollPropFadeOutThink; // 0x0
		// void CRagdollPropSettleThink; // 0x0
		// void CRagdollPropAttachedItemsThink; // 0x0
		// void CRagdollPropRagdollTouch; // 0x0
		// void m_ragdoll.list; // 0x9a8
		// bool m_ragdoll.allowStretch; // 0x9d8
	};
};
