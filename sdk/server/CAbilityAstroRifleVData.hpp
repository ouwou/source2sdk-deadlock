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
	class CAbilityAstroRifleVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SelfModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1500		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x1510		
	};
};
