#pragma once
#include "rendersystemdx11/RenderSlotType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
	// Alignment: 8
	// Size: 0x38
	// Has Trivial Destructor
	struct RenderInputLayoutField_t
	{
	public:
		uint8_t m_pSemanticName[32]; // 0x0		
		int32_t m_nSemanticIndex; // 0x20		
		uint32_t m_Format; // 0x24		
		int32_t m_nOffset; // 0x28		
		int32_t m_nSlot; // 0x2c		
		rendersystemdx11::RenderSlotType_t m_nSlotType; // 0x30		
		int32_t m_nInstanceStepRate; // 0x34		
	};
};
