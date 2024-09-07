#pragma once
#include "server/CPhysConstraint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x568
	// Has VTable
	class CPhysBallSocket : public server::CPhysConstraint
	{
	public:
		float m_flJointFriction; // 0x550		
		bool m_bEnableSwingLimit; // 0x554		
	private:
		[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
	public:
		float m_flSwingLimit; // 0x558		
		bool m_bEnableTwistLimit; // 0x55c		
	private:
		[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
	public:
		float m_flMinTwistAngle; // 0x560		
		float m_flMaxTwistAngle; // 0x564		
	};
};
