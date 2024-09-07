#pragma once
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierObscuredVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		float m_flHideDuration; // 0x5f8		
		float m_flRevealDuration; // 0x5fc		
	};
};
