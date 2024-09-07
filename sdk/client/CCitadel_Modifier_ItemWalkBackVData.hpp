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
	// Size: 0x618
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ItemWalkBackVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Gameplay"
		float m_flStopDistance; // 0x5f8		
		float m_flMaxSpeedDistance; // 0x5fc		
		float m_flSlowSpeed; // 0x600		
		float m_flFastSpeed; // 0x604		
		float m_flVerticalOffset; // 0x608		
		float m_flTolerance; // 0x60c		
		float m_flRepathTime; // 0x610		
	};
};
