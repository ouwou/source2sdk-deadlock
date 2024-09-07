#pragma once
#include "server/CPhysConstraint.hpp"
#include "server/ConstraintSoundInfo.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	class CPhysSlideConstraint : public server::CPhysConstraint
	{
	private:
		[[maybe_unused]] uint8_t __pad0550[0x8]; // 0x550
	public:
		Vector m_axisEnd; // 0x558		
		float m_slideFriction; // 0x564		
		float m_systemLoadScale; // 0x568		
		float m_initialOffset; // 0x56c		
		bool m_bEnableLinearConstraint; // 0x570		
		bool m_bEnableAngularConstraint; // 0x571		
	private:
		[[maybe_unused]] uint8_t __pad0572[0x2]; // 0x572
	public:
		float m_flMotorFrequency; // 0x574		
		float m_flMotorDampingRatio; // 0x578		
		bool m_bUseEntityPivot; // 0x57c		
	private:
		[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
	public:
		server::ConstraintSoundInfo m_soundInfo; // 0x580		
		
		// Datamap fields:
		// float InputSetOffset; // 0x0
		// float InputSetVelocity; // 0x0
		// float InputSetSlideFriction; // 0x0
		// void CPhysSlideConstraintSoundThink; // 0x0
	};
};
