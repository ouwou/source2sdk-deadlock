#pragma once
#include "animgraphlib/DampingSpeedFunction.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Damping"
	class CAnimInputDamping
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyFriendlyName "Speed Function"
		animgraphlib::DampingSpeedFunction m_speedFunction; // 0x8		
		// MPropertyFriendlyName "Speed Scale"
		float m_fSpeedScale; // 0xc		
	};
};
