#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CPathAnimMotorUpdaterBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDampedPathAnimMotorUpdater : public animgraphlib::CPathAnimMotorUpdaterBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
	public:
		float m_flAnticipationTime; // 0x2c		
		float m_flMinSpeedScale; // 0x30		
		animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x34		
		animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x36		
		float m_flSpringConstant; // 0x38		
		float m_flMinSpringTension; // 0x3c		
		float m_flMaxSpringTension; // 0x40		
	};
};
