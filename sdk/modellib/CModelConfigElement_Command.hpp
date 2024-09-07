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
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModelConfigElement_Command : public modellib::CModelConfigElement
	{
	public:
		CUtlString m_Command; // 0x48		
		KeyValues3 m_Args; // 0x50		
	};
};
