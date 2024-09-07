#pragma once
#include "client/EStatsType.hpp"
#include "server/CScaleFunctionVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CScaleFunctionAbilityPropertyMultiStatsVData : public server::CScaleFunctionVData
	{
	public:
		CUtlVector<client::EStatsType> m_vecScalingStats; // 0x40		
	};
};
