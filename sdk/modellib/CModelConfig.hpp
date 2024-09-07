#pragma once
#include <cstdint>
namespace source2sdk::modellib
{
	struct CModelConfigElement;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	class CModelConfig
	{
	public:
		CUtlString m_ConfigName; // 0x0		
		CUtlVector<modellib::CModelConfigElement*> m_Elements; // 0x8		
		bool m_bTopLevel; // 0x20		
	};
};
