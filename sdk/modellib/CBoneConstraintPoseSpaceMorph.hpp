#pragma once
#include "modellib/CBoneConstraintBase.hpp"
#include "modellib/CBoneConstraintPoseSpaceMorph__Input_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBoneConstraintPoseSpaceMorph : public modellib::CBoneConstraintBase
	{
	public:
		CUtlString m_sBoneName; // 0x28		
		CUtlString m_sAttachmentName; // 0x30		
		CUtlVector<CUtlString> m_outputMorph; // 0x38		
		CUtlVector<modellib::CBoneConstraintPoseSpaceMorph__Input_t> m_inputList; // 0x50		
		bool m_bClamp; // 0x68		
	};
};
