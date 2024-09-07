#pragma once
#include "client/CommandEntitySpecType_t.hpp"
#include "client/CommandExecMode_t.hpp"
#include "client/DebugOverlayBits_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	struct CommandToolCommand_t
	{
	public:
		bool m_bEnabled; // 0x0		
		bool m_bOpened; // 0x1		
	private:
		[[maybe_unused]] uint8_t __pad0002[0x2]; // 0x2
	public:
		uint32_t m_InternalId; // 0x4		
		CUtlString m_ShortName; // 0x8		
		client::CommandExecMode_t m_ExecMode; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		CUtlString m_SpawnGroup; // 0x18		
		float m_PeriodicExecDelay; // 0x20		
		client::CommandEntitySpecType_t m_SpecType; // 0x24		
		CUtlString m_EntitySpec; // 0x28		
		CUtlString m_Commands; // 0x30		
		client::DebugOverlayBits_t m_SetDebugBits; // 0x38		
		client::DebugOverlayBits_t m_ClearDebugBits; // 0x40		
	};
};
