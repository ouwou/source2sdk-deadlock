#pragma once
#include "client/NPC_STATE.hpp"
#include "server/HintIgnoreFacing_t.hpp"
#include "server/HintPriority_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x40
	// Has Trivial Destructor
	class HintNodeData
	{
	public:
		CUtlSymbolLarge strEntityName; // 0x0		
		int16_t nHintType; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
	public:
		int32_t nNodeID; // 0xc		
		CUtlSymbolLarge strGroup; // 0x10		
		int32_t iDisabled; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		CUtlSymbolLarge iszGenericType; // 0x20		
		server::HintIgnoreFacing_t fIgnoreFacing; // 0x28		
		client::NPC_STATE minState; // 0x2c		
		client::NPC_STATE maxState; // 0x30		
		int32_t nRadius; // 0x34		
		server::HintPriority_t ePriority; // 0x38		
	};
};
