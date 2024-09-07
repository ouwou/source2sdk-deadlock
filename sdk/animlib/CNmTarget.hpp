#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 16
	// Size: 0x30
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CNmTarget
	{
	public:
		CTransform m_transform; // 0x0		
		CGlobalSymbol m_boneID; // 0x20		
		bool m_bIsBoneTarget; // 0x28		
		bool m_bIsUsingBoneSpaceOffsets; // 0x29		
		bool m_bHasOffsets; // 0x2a		
		bool m_bIsSet; // 0x2b		
	};
};
