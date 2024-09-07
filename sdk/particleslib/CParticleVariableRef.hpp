#pragma once
#include "pulse_runtime_lib/PulseValueType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
	// Alignment: 8
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	// MPropertyCustomEditor "ParticleVariableRef()"
	class CParticleVariableRef
	{
	public:
		CKV3MemberNameWithStorage m_variableName; // 0x0		
		pulse_runtime_lib::PulseValueType_t m_variableType; // 0x38		
	};
};
