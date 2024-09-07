#pragma once
#include "client/CCitadelBaseYamatoAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include "client/SatVolumeIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xeb8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bShadowFormCast"
	// MNetworkVarNames "Vector m_vecCastStartPos"
	// MNetworkVarNames "Vector m_vecDashStartPos"
	// MNetworkVarNames "QAngle m_angDashStartAng"
	// MNetworkVarNames "GameTime_t m_flDashStartTime"
	// MNetworkVarNames "GameTime_t m_flEndAttackTime"
	// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
	// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
	// MNetworkVarNames "EHANDLE m_hTarget"
	// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
	// MNetworkVarNames "Vector m_rgTargetPos"
	// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
	class CCitadel_Ability_FlyingStrike : public client::CCitadelBaseYamatoAbility
	{
	public:
		client::SatVolumeIndex_t m_desatVolIdx; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bShadowFormCast; // 0xc6c		
	private:
		[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCastStartPos; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecDashStartPos; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		QAngle m_angDashStartAng; // 0xc88		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashStartTime; // 0xc94		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flEndAttackTime; // 0xc98		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleStartTime; // 0xc9c		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleArriveTime; // 0xca0		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTarget; // 0xca4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flGrappleShotAttackTime; // 0xca8		
		float m_flVelSpring; // 0xcac		
		int32_t m_nTicksNotMoving; // 0xcb0		
		Vector m_vecPrevPos; // 0xcb4		
	private:
		[[maybe_unused]] uint8_t __pad0cc0[0x4]; // 0xcc0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		// MNetworkEncoder "coord"
		Vector m_rgTargetPos[20]; // 0xcc4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_rgTargetPosTime[20]; // 0xdb4		
	private:
		[[maybe_unused]] uint8_t __pad0e04[0xac]; // 0xe04
	public:
		client::ParticleIndex_t m_nGrappleTravelEffect; // 0xeb0		
	};
};
