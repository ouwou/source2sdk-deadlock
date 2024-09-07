#pragma once
#include "client/C_CitadelBaseAbility.hpp"
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
	// Size: 0xe00
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecCastStartPos"
	// MNetworkVarNames "Vector m_vecDashStartPos"
	// MNetworkVarNames "Vector m_vecDashEndPos"
	// MNetworkVarNames "QAngle m_angDashStartAng"
	// MNetworkVarNames "GameTime_t m_flDashStartTime"
	// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
	// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
	// MNetworkVarNames "EHANDLE m_hTarget"
	// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
	// MNetworkVarNames "Vector m_rgTargetPos"
	// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
	class CCitadel_Ability_TangoTether : public client::C_CitadelBaseAbility
	{
	public:
		client::SatVolumeIndex_t m_desatVolIdx; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecCastStartPos; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecDashStartPos; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecDashEndPos; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		QAngle m_angDashStartAng; // 0xc88		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDashStartTime; // 0xc94		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleStartTime; // 0xc98		
		// MNetworkEnable
		entity2::GameTime_t m_flGrappleArriveTime; // 0xc9c		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTarget; // 0xca0		
		float m_flVelSpring; // 0xca4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flGrappleShotAttackTime; // 0xca8		
		int32_t m_nTicksNotMoving; // 0xcac		
		Vector m_vecPrevPos; // 0xcb0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		// MNetworkEncoder "coord"
		Vector m_rgTargetPos[20]; // 0xcbc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_rgTargetPosTime[20]; // 0xdac		
		client::ParticleIndex_t m_nGrappleTravelEffect; // 0xdfc		
	};
};
