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
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierObscuredVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		float m_flHideDuration; // 0x5f8		
		float m_flRevealDuration; // 0x5fc		
	};
};
