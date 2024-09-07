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
	// Size: 0xb18
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_ragPos"
	// MNetworkVarNames "QAngle m_ragAngles"
	// MNetworkVarNames "EHANDLE m_hRagdollSource"
	// MNetworkVarNames "float32 m_flBlendWeight"
	class CRagdollProp : public server::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0978[0x8]; // 0x978
	public:
		client::ragdoll_t m_ragdoll; // 0x980		
		bool m_bStartDisabled; // 0x9b8		
	private:
		[[maybe_unused]] uint8_t __pad09b9[0x7]; // 0x9b9
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		CNetworkUtlVectorBase<Vector> m_ragPos; // 0x9c0		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "13"
		CNetworkUtlVectorBase<QAngle> m_ragAngles; // 0x9d8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hRagdollSource; // 0x9f0		
		uint32_t m_lastUpdateTickCount; // 0x9f4		
		bool m_allAsleep; // 0x9f8		
		bool m_bFirstCollisionAfterLaunch; // 0x9f9		
	private:
		[[maybe_unused]] uint8_t __pad09fa[0x2]; // 0x9fa
	public:
		CHandle<server::CBaseEntity> m_hDamageEntity; // 0x9fc		
		CHandle<server::CBaseEntity> m_hKiller; // 0xa00		
		CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker; // 0xa04		
		entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa08		
		entity2::GameTime_t m_flFadeOutStartTime; // 0xa0c		
		float m_flFadeTime; // 0xa10		
		// MNetworkDisable
		Vector m_vecLastOrigin; // 0xa14		
		entity2::GameTime_t m_flAwakeTime; // 0xa20		
		entity2::GameTime_t m_flLastOriginChangeTime; // 0xa24		
		CUtlSymbolLarge m_strOriginClassName; // 0xa28		
		CUtlSymbolLarge m_strSourceClassName; // 0xa30		
		bool m_bHasBeenPhysgunned; // 0xa38		
		bool m_bShouldTeleportPhysics; // 0xa39		
	private:
		[[maybe_unused]] uint8_t __pad0a3a[0x2]; // 0xa3a
	public:
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		float m_flBlendWeight; // 0xa3c		
		float m_flDefaultFadeScale; // 0xa40		
	private:
		[[maybe_unused]] uint8_t __pad0a44[0x4]; // 0xa44
	public:
		CUtlVector<Vector> m_ragdollMins; // 0xa48		
		CUtlVector<Vector> m_ragdollMaxs; // 0xa60		
		bool m_bShouldDeleteActivationRecord; // 0xa78		
	private:
		[[maybe_unused]] uint8_t __pad0a79[0x5f]; // 0xa79
	public:
		bool m_bValidatePoweredRagdollPose; // 0xad8		
		
		// Datamap fields:
		// void m_ragdoll.boneIndex; // 0x998
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
		// void m_ragdoll.list; // 0x980
		// bool m_ragdoll.allowStretch; // 0x9b0
	};
};
