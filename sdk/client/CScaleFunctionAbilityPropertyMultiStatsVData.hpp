#pragma once
#include "client/CScaleFunctionVData.hpp"
#include "client/EStatsType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CScaleFunctionAbilityPropertyMultiStatsVData : public client::CScaleFunctionVData
	{
	public:
		CUtlVector<client::EStatsType> m_vecScalingStats; // 0x40		
	};
};
