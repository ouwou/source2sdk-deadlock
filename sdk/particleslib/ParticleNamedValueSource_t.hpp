#pragma once
#include "particleslib/ParticleNamedValueConfiguration_t.hpp"
#include "pulse_runtime_lib/PulseValueType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	struct ParticleNamedValueSource_t
	{
	public:
		CUtlString m_Name; // 0x0		
		bool m_IsPublic; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
	public:
		// MPropertySuppressField
		pulse_runtime_lib::PulseValueType_t m_ValueType; // 0xc		
		// MPropertySuppressField
		particleslib::ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x10		
		// MPropertySuppressField
		CUtlVector<particleslib::ParticleNamedValueConfiguration_t> m_NamedConfigs; // 0x48		
	};
};
