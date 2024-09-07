#pragma once
#include "modellib/ModelBoneFlexComponent_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct ModelBoneFlexDriverControl_t
	{
	public:
		modellib::ModelBoneFlexComponent_t m_nBoneComponent; // 0x0		
		CUtlString m_flexController; // 0x8		
		uint32_t m_flexControllerToken; // 0x10		
		float m_flMin; // 0x14		
		float m_flMax; // 0x18		
	};
};
