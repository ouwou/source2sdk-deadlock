#pragma once
#include "rendersystemdx11/RenderInputLayoutField_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct WorldNodeOnDiskBufferData_t
	{
	public:
		int32_t m_nElementCount; // 0x0		
		int32_t m_nElementSizeInBytes; // 0x4		
		CUtlVector<rendersystemdx11::RenderInputLayoutField_t> m_inputLayoutFields; // 0x8		
		CUtlVector<uint8_t> m_pData; // 0x20		
	};
};
