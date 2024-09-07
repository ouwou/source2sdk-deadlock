#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1520
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbility_Mirage_SandPhantom_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_PreCreationModifier; // 0x14f0		
		CEmbeddedSubclass<client::CCitadelModifier> m_WhirlwindEvasionModifier; // 0x1500		
		CEmbeddedSubclass<client::CCitadelModifier> m_SandPhantomModifier; // 0x1510		
	};
};
