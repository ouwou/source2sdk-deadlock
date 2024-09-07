#pragma once
#include "modellib/CBaseConstraint.hpp"
#include "modellib/CBoneConstraintPoseSpaceBone__Input_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBoneConstraintPoseSpaceBone : public modellib::CBaseConstraint
	{
	public:
		CUtlVector<modellib::CBoneConstraintPoseSpaceBone__Input_t> m_inputList; // 0x68		
	};
};
