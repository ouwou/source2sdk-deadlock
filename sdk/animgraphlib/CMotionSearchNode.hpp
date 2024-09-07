#pragma once
#include "animgraphlib/CVectorQuantizer.hpp"
#include "animgraphlib/SampleCode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x80
	// 
	// MGetKV3ClassDefaults
	class CMotionSearchNode
	{
	public:
		CUtlVector<animgraphlib::CMotionSearchNode*> m_children; // 0x0		
		animgraphlib::CVectorQuantizer m_quantizer; // 0x18		
		CUtlVector<CUtlVector<animgraphlib::SampleCode>> m_sampleCodes; // 0x38		
		CUtlVector<CUtlVector<int32_t>> m_sampleIndices; // 0x50		
		CUtlVector<int32_t> m_selectableSamples; // 0x68		
	};
};
