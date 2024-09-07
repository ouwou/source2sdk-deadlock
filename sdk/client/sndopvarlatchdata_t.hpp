#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// Has Trivial Destructor
	struct sndopvarlatchdata_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlSymbolLarge m_iszStack; // 0x8		
		CUtlSymbolLarge m_iszOperator; // 0x10		
		CUtlSymbolLarge m_iszOpvar; // 0x18		
		float m_flVal; // 0x20		
		Vector m_vPos; // 0x24		
	};
};
