#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
	// Alignment: 8
	// Size: 0xc4
	// Has Trivial Destructor
	struct VsInputSignatureElement_t
	{
	public:
		char m_pName[64]; // 0x0		
		char m_pSemantic[64]; // 0x40		
		char m_pD3DSemanticName[64]; // 0x80		
		int32_t m_nD3DSemanticIndex; // 0xc0		
	};
};
