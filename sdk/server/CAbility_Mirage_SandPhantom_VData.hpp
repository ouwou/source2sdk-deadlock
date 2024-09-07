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
	class CAbility_Mirage_SandPhantom_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_PreCreationModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_WhirlwindEvasionModifier; // 0x1500		
		CEmbeddedSubclass<server::CCitadelModifier> m_SandPhantomModifier; // 0x1510		
	};
};
