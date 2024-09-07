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
	// Size: 0x6f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierAirLiftGrabVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GrabEffect; // 0x5f8		
		// MPropertyStartGroup "Gameplay"
		float m_flLiftHorizontal; // 0x6d8		
		float m_flLiftHeight; // 0x6dc		
		float m_flFollowDampingFactor; // 0x6e0		
		float m_flFollowDistance; // 0x6e4		
		float m_flAllyGrabCancelTime; // 0x6e8		
		float m_flAllyPossibleStuckDistance; // 0x6ec		
	};
};