#pragma once
#include "server/CBaseFilter.hpp"
#include "server/filter_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5b8
	// Has VTable
	class CFilterMultiple : public server::CBaseFilter
	{
	public:
		server::filter_t m_nFilterType; // 0x530		
	private:
		[[maybe_unused]] uint8_t __pad0534[0x4]; // 0x534
	public:
		CUtlSymbolLarge m_iFilterName[10]; // 0x538		
		CHandle<server::CBaseEntity> m_hFilter[10]; // 0x588		
		int32_t m_nFilterCount; // 0x5b0		
	};
};
