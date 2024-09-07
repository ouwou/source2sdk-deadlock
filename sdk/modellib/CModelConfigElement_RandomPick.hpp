#pragma once
#include "modellib/CModelConfigElement.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModelConfigElement_RandomPick : public modellib::CModelConfigElement
	{
	public:
		CUtlVector<CUtlString> m_Choices; // 0x48		
		CUtlVector<float> m_ChoiceWeights; // 0x60		
	};
};
