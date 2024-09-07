#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct EntityIOConnectionData_t
	{
	public:
		CUtlString m_outputName; // 0x0		
		uint32_t m_targetType; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CUtlString m_targetName; // 0x10		
		CUtlString m_inputName; // 0x18		
		CUtlString m_overrideParam; // 0x20		
		float m_flDelay; // 0x28		
		int32_t m_nTimesToFire; // 0x2c		
	};
};
