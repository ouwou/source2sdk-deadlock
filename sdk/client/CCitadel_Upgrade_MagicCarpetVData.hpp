#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1680
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Upgrade_MagicCarpetVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle; // 0x1538		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetModifier; // 0x1618		
		CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetModifier; // 0x1628		
		CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetVisualModifier; // 0x1638		
		CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetVisualModifier; // 0x1648		
		CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier; // 0x1658		
		// MPropertyStartGroup "Gameplay"
		float m_flSummonVisualDuration; // 0x1668		
		float m_flBurstSpeedBonus; // 0x166c		
		float m_flBurstSpeedMin; // 0x1670		
		float m_flBurstSpeedDuration; // 0x1674		
		float m_flMinDistanceAboveGround; // 0x1678		
	};
};
