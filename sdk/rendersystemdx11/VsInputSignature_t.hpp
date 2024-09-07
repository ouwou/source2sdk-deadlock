#pragma once
#include "rendersystemdx11/VsInputSignatureElement_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
	// Alignment: 8
	// Size: 0x18
	struct VsInputSignature_t
	{
	public:
		CUtlVector<rendersystemdx11::VsInputSignatureElement_t> m_elems; // 0x0		
	};
};
