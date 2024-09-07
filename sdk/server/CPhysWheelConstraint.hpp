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
	// Size: 0x580
	// Has VTable
	class CPhysWheelConstraint : public server::CPhysConstraint
	{
	public:
		float m_flSuspensionFrequency; // 0x550		
		float m_flSuspensionDampingRatio; // 0x554		
		float m_flSuspensionHeightOffset; // 0x558		
		bool m_bEnableSuspensionLimit; // 0x55c		
	private:
		[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
	public:
		float m_flMinSuspensionOffset; // 0x560		
		float m_flMaxSuspensionOffset; // 0x564		
		bool m_bEnableSteeringLimit; // 0x568		
	private:
		[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
	public:
		float m_flMinSteeringAngle; // 0x56c		
		float m_flMaxSteeringAngle; // 0x570		
		float m_flSteeringAxisFriction; // 0x574		
		float m_flSpinAxisFriction; // 0x578		
	};
};
