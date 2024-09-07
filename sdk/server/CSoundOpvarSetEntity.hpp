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
	// Size: 0x520
	// Has VTable
	class CSoundOpvarSetEntity : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		CUtlSymbolLarge m_iszStackName; // 0x4e0		
		CUtlSymbolLarge m_iszOperatorName; // 0x4e8		
		CUtlSymbolLarge m_iszOpvarName; // 0x4f0		
		int32_t m_nOpvarType; // 0x4f8		
		int32_t m_nOpvarIndex; // 0x4fc		
		float m_flOpvarValue; // 0x500		
	private:
		[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
	public:
		CUtlSymbolLarge m_OpvarValueString; // 0x508		
		bool m_bSetOnSpawn; // 0x510		
		
		// Datamap fields:
		// uint64_t InputSetEventGuid; // 0x0
		// CUtlSymbolLarge InputSetStackName; // 0x0
		// CUtlSymbolLarge InputSetOperatorName; // 0x0
		// CUtlSymbolLarge InputSetOpvarName; // 0x0
		// int32_t InputSetOpvarIndex; // 0x0
		// void InputSetOpvar; // 0x0
		// float InputChangeOpvarValue; // 0x0
		// float InputChangeOpvarValueAndSet; // 0x0
		// void m_nGUID; // 0x4d8
		// void m_LastOpvarValueString; // 0x518
	};
};
