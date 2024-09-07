#pragma once
#include "server/CLogicalEntity.hpp"
#include "server/navproperties_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e8
	// Has VTable
	class CLogicNavigation : public server::CLogicalEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		bool m_isOn; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
	public:
		server::navproperties_t m_navProperty; // 0x4e4		
		
		// Datamap fields:
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputToggle; // 0x0
		// CUtlString navprop; // 0x7fffffff
	};
};
