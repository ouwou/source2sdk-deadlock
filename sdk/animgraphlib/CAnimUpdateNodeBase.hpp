#pragma once
#include "animgraphlib/AnimNodeNetworkMode.hpp"
#include "animgraphlib/CAnimNodePath.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CAnimUpdateNodeBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		animgraphlib::CAnimNodePath m_nodePath; // 0x18		
		animgraphlib::AnimNodeNetworkMode m_networkMode; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
	public:
		CUtlString m_name; // 0x50		
	};
};
