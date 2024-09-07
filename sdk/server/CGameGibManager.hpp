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
	// Size: 0x508
	// Has VTable
	class CGameGibManager : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x20]; // 0x4d8
	public:
		bool m_bAllowNewGibs; // 0x4f8		
	private:
		[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
	public:
		int32_t m_iCurrentMaxPieces; // 0x4fc		
		int32_t m_iMaxPieces; // 0x500		
		int32_t m_iLastFrame; // 0x504		
		
		// Datamap fields:
		// int32_t InputSetMaxPieces; // 0x0
		// int32_t InputSetMaxPiecesDX8; // 0x0
		// void m_LRU; // 0x4d8
	};
};
