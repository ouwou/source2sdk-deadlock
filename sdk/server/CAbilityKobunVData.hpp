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
	// Size: 0x1510
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityKobunVData : public server::CitadelAbilityVData
	{
	public:
		Vector m_vSummonFollowOffset; // 0x14f0		
	private:
		[[maybe_unused]] uint8_t __pad14fc[0x4]; // 0x14fc
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_CloneModifier; // 0x1500		
	};
};
