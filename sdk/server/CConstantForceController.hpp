#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// Has Trivial Destructor
	class CConstantForceController
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
	public:
		Vector m_linear; // 0xc		
		RotationVector m_angular; // 0x18		
		Vector m_linearSave; // 0x24		
		RotationVector m_angularSave; // 0x30		
		
		// Datamap fields:
		// bool m_bLocalSpace; // 0x8
	};
};
