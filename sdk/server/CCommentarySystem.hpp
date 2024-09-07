#pragma once
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CPointCommentaryNode;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	class CCommentarySystem
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x11]; // 0x0
	public:
		bool m_bCommentaryConvarsChanging; // 0x11		
		bool m_bCommentaryEnabledMidGame; // 0x12		
	private:
		[[maybe_unused]] uint8_t __pad0013[0x1]; // 0x13
	public:
		entity2::GameTime_t m_flNextTeleportTime; // 0x14		
		int32_t m_iTeleportStage; // 0x18		
		bool m_bCheatState; // 0x1c		
		bool m_bIsFirstSpawnGroupToLoad; // 0x1d		
	private:
		[[maybe_unused]] uint8_t __pad001e[0x1a]; // 0x1e
	public:
		CHandle<server::CPointCommentaryNode> m_hCurrentNode; // 0x38		
		CHandle<server::CPointCommentaryNode> m_hActiveCommentaryNode; // 0x3c		
		CHandle<server::CPointCommentaryNode> m_hLastCommentaryNode; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
	public:
		CUtlVector<CHandle<server::CPointCommentaryNode>> m_vecNodes; // 0x48		
		
		// Datamap fields:
		// void m_ModifiedConvars; // 0x20
	};
};
