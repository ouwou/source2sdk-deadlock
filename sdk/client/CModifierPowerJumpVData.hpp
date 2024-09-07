#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x6e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierPowerJumpVData : public client::CCitadelModifierVData
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
