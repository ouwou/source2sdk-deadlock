#pragma once
#include "particleslib/CParticleInput.hpp"
#include "particleslib/ParticleModelType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyCustomEditor "ModelInput()"
	// MClassIsParticleModel
	// MParticleCustomFieldDefaultValue
	class CParticleModelInput : public particleslib::CParticleInput
	{
	public:
		particleslib::ParticleModelType_t m_nType; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		CParticleNamedValueRef m_NamedValue; // 0x18		
		int32_t m_nControlPoint; // 0x58		
	};
};
