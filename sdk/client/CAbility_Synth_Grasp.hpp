#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcb0
	// Has VTable
	class CAbility_Synth_Grasp : public client::C_CitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecTetheredEnemies; // 0xc60		
	};
};
