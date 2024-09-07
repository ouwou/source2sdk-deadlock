#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierPowerJumpVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FloatParticle; // 0x5f8		
		// MPropertyStartGroup "Gameplay"
		float m_flAirDrag; // 0x6d8		
		float m_flVerticalCameraOffset; // 0x6dc		
		float m_flVerticalCameraOffsetLerpTime; // 0x6e0		
		float m_flVerticalCameraOffsetBias; // 0x6e4		
	};
};
