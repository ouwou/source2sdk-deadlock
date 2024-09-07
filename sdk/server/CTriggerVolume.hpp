#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x778
	// Has VTable
	class CTriggerVolume : public server::CBaseModelEntity
	{
	public:
		CUtlSymbolLarge m_iFilterName; // 0x768		
		CHandle<server::CBaseFilter> m_hFilter; // 0x770		
	};
};
