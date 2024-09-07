#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_Mirage_Tornado_Aura_Apply_VData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_TossModifier; // 0x5f8		
		CEmbeddedSubclass<server::CCitadelModifier> m_LiftModifier; // 0x608		
		CEmbeddedSubclass<server::CCitadelModifier> m_EnemyInAirModifier; // 0x618		
	};
};
