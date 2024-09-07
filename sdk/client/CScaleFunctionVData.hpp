#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "client/EStatsType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataRoot
	// MVDataNodeType "1"
	// MVDataOverlayType "1"
	class CScaleFunctionVData : public client::CEntitySubclassVDataBase
	{
	public:
		client::EStatsType m_eSpecificStatScaleType; // 0x28		
		float m_flStatScale; // 0x2c		
		bool m_bFunctionDisabled; // 0x30		
	};
};
