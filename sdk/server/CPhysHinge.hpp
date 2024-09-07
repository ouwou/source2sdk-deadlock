#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPhysConstraint.hpp"
#include "server/ConstraintSoundInfo.hpp"
#include "vphysics2/constraint_hingeparams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6f0
	// Has VTable
	class CPhysHinge : public server::CPhysConstraint
	{
	private:
		[[maybe_unused]] uint8_t __pad0550[0x8]; // 0x550
	public:
		server::ConstraintSoundInfo m_soundInfo; // 0x558		
		entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x5e0		
		entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x608		
		bool m_bAtMinLimit; // 0x630		
		bool m_bAtMaxLimit; // 0x631		
	private:
		[[maybe_unused]] uint8_t __pad0632[0x2]; // 0x632
	public:
		vphysics2::constraint_hingeparams_t m_hinge; // 0x634		
		float m_hingeFriction; // 0x674		
		float m_systemLoadScale; // 0x678		
		bool m_bIsAxisLocal; // 0x67c		
	private:
		[[maybe_unused]] uint8_t __pad067d[0x3]; // 0x67d
	public:
		float m_flMinRotation; // 0x680		
		float m_flMaxRotation; // 0x684		
		float m_flInitialRotation; // 0x688		
		float m_flMotorFrequency; // 0x68c		
		float m_flMotorDampingRatio; // 0x690		
		float m_flAngleSpeed; // 0x694		
		float m_flAngleSpeedThreshold; // 0x698		
	private:
		[[maybe_unused]] uint8_t __pad069c[0x4]; // 0x69c
	public:
		entity2::CEntityIOOutput m_OnStartMoving; // 0x6a0		
		entity2::CEntityIOOutput m_OnStopMoving; // 0x6c8		
		
		// Datamap fields:
		// Vector m_hinge.worldPosition; // 0x634
		// Vector m_hinge.worldAxisDirection; // 0x640
		// float InputSetMotorTargetAngle; // 0x0
		// float InputSetVelocity; // 0x0
		// float InputSetHingeFriction; // 0x0
		// float InputSetMinLimit; // 0x0
		// float InputSetMaxLimit; // 0x0
		// void CPhysHingeSoundThink; // 0x0
		// void CPhysHingeLimitThink; // 0x0
		// void CPhysHingeMoveThink; // 0x0
	};
};
