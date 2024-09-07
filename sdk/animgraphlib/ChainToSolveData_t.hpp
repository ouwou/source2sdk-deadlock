#pragma once
#include "animgraphlib/IKSolverSettings_t.hpp"
#include "animgraphlib/IKTargetSettings_t.hpp"
#include "animgraphlib/SolveIKChainAnimNodeDebugSetting.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	struct ChainToSolveData_t
	{
	public:
		int32_t m_nChainIndex; // 0x0		
		animgraphlib::IKSolverSettings_t m_SolverSettings; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		animgraphlib::IKTargetSettings_t m_TargetSettings; // 0x10		
		animgraphlib::SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38		
		float m_flDebugNormalizedValue; // 0x3c		
		VectorAligned m_vDebugOffset; // 0x40		
	};
};
