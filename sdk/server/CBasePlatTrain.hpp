#pragma once
#include "server/CBaseToggle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x810
	// Has VTable
	class CBasePlatTrain : public server::CBaseToggle
	{
	public:
		CUtlSymbolLarge m_NoiseMoving; // 0x7e8		
		CUtlSymbolLarge m_NoiseArrived; // 0x7f0		
	private:
		[[maybe_unused]] uint8_t __pad07f8[0x8]; // 0x7f8
	public:
		float m_volume; // 0x800		
		float m_flTWidth; // 0x804		
		float m_flTLength; // 0x808		
		
		// Datamap fields:
		// void m_pMovementSound; // 0x7f8
		// float rotation; // 0x7fffffff
	};
};
