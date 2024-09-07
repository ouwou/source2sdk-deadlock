#pragma once
#include "animationsystem/ParticleAttachment_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	struct AmbientParticleSettings_t
	{
	public:
		int32_t m_nCP; // 0x0		
		animationsystem::ParticleAttachment_t m_eAttachmentType; // 0x4		
		CUtlString m_strAttachmentName; // 0x8		
	};
};
