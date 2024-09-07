#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1520
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_IcePathVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_IcePathModifier; // 0x14f0		
		// MPropertyStartGroup "Gameplay"
		float m_flMomentumDecayRate; // 0x1500		
		float m_flMomentumWeight; // 0x1504		
		float m_flMaxPitchChange; // 0x1508		
		float m_flMaxPitchUp; // 0x150c		
		float m_flMaxPitchDown; // 0x1510		
		float m_flMaxHeight; // 0x1514		
		float m_flForwardAngleBias; // 0x1518		
	};
};
