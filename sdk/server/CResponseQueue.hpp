#pragma once
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_Expresser;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x60
	class CResponseQueue
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x48]; // 0x0
	public:
		CUtlVector<server::CAI_Expresser*> m_ExpresserTargets; // 0x48		
	};
};
