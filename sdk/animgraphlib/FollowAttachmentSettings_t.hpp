#pragma once
#include "modellib/CAnimAttachment.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x90
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FollowAttachmentSettings_t
	{
	public:
		modellib::CAnimAttachment m_attachment; // 0x0		
		int32_t m_boneIndex; // 0x80		
		bool m_bMatchTranslation; // 0x84		
		bool m_bMatchRotation; // 0x85		
	};
};
