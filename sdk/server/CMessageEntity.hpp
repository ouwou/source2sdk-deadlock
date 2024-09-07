#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	class CMessageEntity : public server::CPointEntity
	{
	public:
		int32_t m_radius; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_messageText; // 0x4e0		
		bool m_drawText; // 0x4e8		
		bool m_bDeveloperOnly; // 0x4e9		
		bool m_bEnabled; // 0x4ea		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// CUtlSymbolLarge InputSetMessage; // 0x0
	};
};
