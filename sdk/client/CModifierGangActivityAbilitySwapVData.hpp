#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x658
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierGangActivityAbilitySwapVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Ability References"
		CSubclassName<4> m_SummonGangster; // 0x5f8		
		CSubclassName<4> m_TeleportToGangster; // 0x608		
		CSubclassName<4> m_Cancel; // 0x618		
		CSubclassName<4> m_ReplaceWithSummonGangster; // 0x628		
		CSubclassName<4> m_ReplaceWithTeleportToGangster; // 0x638		
		CSubclassName<4> m_ReplaceWithCancel; // 0x648		
	};
};
