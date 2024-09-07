#pragma once
#include "animationsystem/ParticleAttachment_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct ParticleControlPointDriver_t
	{
	public:
		int32_t m_iControlPoint; // 0x0		
		animationsystem::ParticleAttachment_t m_iAttachType; // 0x4		
		CUtlString m_attachmentName; // 0x8		
		Vector m_vecOffset; // 0x10		
		QAngle m_angOffset; // 0x1c		
		CUtlString m_entityName; // 0x28		
	};
};
