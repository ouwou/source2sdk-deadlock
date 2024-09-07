#pragma once
#include "modellib/CMorphRectData.hpp"
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
	class CMorphData
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlVector<modellib::CMorphRectData> m_morphRectDatas; // 0x8		
	};
};
