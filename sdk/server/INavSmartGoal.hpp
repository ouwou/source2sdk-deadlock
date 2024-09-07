#pragma once
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_BaseNPC;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	class INavSmartGoal
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CHandle<server::CAI_BaseNPC> m_hNPC; // 0x8		
	};
};
