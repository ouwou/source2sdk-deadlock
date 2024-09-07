#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x28
	struct CBoneConstraintPoseSpaceBone__Input_t
	{
	public:
		Vector m_inputValue; // 0x0		
		CUtlVector<CTransform> m_outputTransformList; // 0x10		
	};
};
