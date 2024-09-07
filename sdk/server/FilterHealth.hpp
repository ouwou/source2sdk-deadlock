#pragma once
#include "server/CBaseFilter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x540
	// Has VTable
	class FilterHealth : public server::CBaseFilter
	{
	public:
		bool m_bAdrenalineActive; // 0x530		
	private:
		[[maybe_unused]] uint8_t __pad0531[0x3]; // 0x531
	public:
		int32_t m_iHealthMin; // 0x534		
		int32_t m_iHealthMax; // 0x538		
	};
};
