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
	// Size: 0x1510
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityTargetPracticeVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_TargetPracticeSelfModifier; // 0x14f0		
		CEmbeddedSubclass<client::CCitadelModifier> m_TargetPracticeEnemyModifier; // 0x1500		
	};
};
