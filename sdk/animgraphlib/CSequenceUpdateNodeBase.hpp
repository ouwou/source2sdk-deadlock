#pragma once
#include "animgraphlib/CLeafUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CSequenceUpdateNodeBase : public animgraphlib::CLeafUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0xc]; // 0x58
	public:
		float m_playbackSpeed; // 0x64		
		bool m_bLoop; // 0x68		
	};
};
