#pragma once
#include "animgraphlib/CSolveIKTargetHandle_t.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/SolveIKChainPoseOpFixedSettings_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSolveIKChainUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		CUtlVector<animgraphlib::CSolveIKTargetHandle_t> m_targetHandles; // 0x68		
		animgraphlib::SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80		
	};
};
