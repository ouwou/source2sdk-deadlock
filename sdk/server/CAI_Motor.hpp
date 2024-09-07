#pragma once
#include "client/CAI_Component.hpp"
#include "client/CSimpleSimTimer.hpp"
#include "server/CAI_MotorNavLink.hpp"
#include "server/CAI_MotorTransition.hpp"
#include "server/ChoreoEntityFacing_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1e8
	// Has VTable
	class CAI_Motor : public client::CAI_Component
	{
	private:
		[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
	public:
		float m_flMoveInterval; // 0x50		
		Vector m_vIdealEntityFacing; // 0x54		
		float m_flYawSpeed; // 0x60		
		Vector m_vMoveVel; // 0x64		
		Vector m_vMoveVelNavigation; // 0x70		
		Vector m_vecAngularVelocity; // 0x7c		
		Vector m_vIdealClimbOrientation; // 0x88		
		client::CSimpleSimTimer m_timerFloorPointCached; // 0x94		
		Vector m_vFloorPointCached; // 0x9c		
		bool m_bFloorPointCachingEnabled; // 0xa8		
	private:
		[[maybe_unused]] uint8_t __pad00a9[0x2b]; // 0xa9
	public:
		float m_flSpeed; // 0xd4		
		bool m_bMovementActive; // 0xd8		
		bool m_bEmbeddedRecoveryEnabled; // 0xd9		
		bool m_pEnableForceFacing[2]; // 0xda		
		uint8_t m_nEntityFacingLockCount; // 0xdc		
	private:
		[[maybe_unused]] uint8_t __pad00dd[0x3]; // 0xdd
	public:
		CUtlVector<server::ChoreoEntityFacing_t> m_vecChoreoEntityFacings; // 0xe0		
		Vector m_vBoundaryDistCachedPos; // 0xf8		
		float m_flBoundaryDistCached; // 0x104		
		server::CAI_MotorNavLink m_motorNavLink; // 0x108		
		server::CAI_MotorTransition m_motorTransition; // 0x180		
		bool m_bIsExecutingMoveSolve; // 0x1e0		
	};
};
