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
	// Size: 0x4e8
	// Has VTable
	class CInfoPlayerStart : public server::CPointEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
		bool m_bIsMaster; // 0x4d9		
	private:
		[[maybe_unused]] uint8_t __pad04da[0x6]; // 0x4da
	public:
		CGlobalSymbol m_pPawnSubclass; // 0x4e0		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
	};
};
