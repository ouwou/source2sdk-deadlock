#pragma once
#include "animgraphlib/CAnimMotorUpdaterBase.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CPlayerInputAnimMotorUpdater : public animgraphlib::CAnimMotorUpdaterBase
	{
	public:
		CUtlVector<float> m_sampleTimes; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0038[0x4]; // 0x38
	public:
		float m_flSpringConstant; // 0x3c		
		float m_flAnticipationDistance; // 0x40		
		animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x44		
		animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x46		
		bool m_bUseAcceleration; // 0x48		
	};
};
