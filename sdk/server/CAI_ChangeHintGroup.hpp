#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f8
	// Has VTable
	class CAI_ChangeHintGroup : public server::CBaseEntity
	{
	public:
		int32_t m_iSearchType; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_strSearchName; // 0x4e0		
		CUtlSymbolLarge m_strNewHintGroup; // 0x4e8		
		float m_flRadius; // 0x4f0		
		
		// Datamap fields:
		// void InputActivate; // 0x0
	};
};
