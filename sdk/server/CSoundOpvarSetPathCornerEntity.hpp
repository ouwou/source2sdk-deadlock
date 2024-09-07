#pragma once
#include "server/CSoundOpvarSetPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x688
	// Has VTable
	class CSoundOpvarSetPathCornerEntity : public server::CSoundOpvarSetPointEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0660[0x18]; // 0x660
	public:
		float m_flDistMinSqr; // 0x678		
		float m_flDistMaxSqr; // 0x67c		
		CUtlSymbolLarge m_iszPathCornerEntityName; // 0x680		
		
		// Datamap fields:
		// void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
	};
};
