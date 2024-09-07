#pragma once
#include "animationsystem/ParticleAttachment_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct ParticleNamedValueConfiguration_t
	{
	public:
		CUtlString m_ConfigName; // 0x0		
		KeyValues3 m_ConfigValue; // 0x8		
		animationsystem::ParticleAttachment_t m_iAttachType; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		CUtlString m_BoundEntityPath; // 0x20		
		CUtlString m_strEntityScope; // 0x28		
		CUtlString m_strAttachmentName; // 0x30		
	};
};
