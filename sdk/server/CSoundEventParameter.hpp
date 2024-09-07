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
	// Size: 0x4f0
	// Has VTable
	class CSoundEventParameter : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		CUtlSymbolLarge m_iszParamName; // 0x4e0		
		float m_flFloatValue; // 0x4e8		
		
		// Datamap fields:
		// uint64_t InputSetEventGuid; // 0x0
		// CUtlSymbolLarge InputSetParamName; // 0x0
		// float InputSetFloatValue; // 0x0
		// void m_nGUID; // 0x4d8
	};
};
