#pragma once
#include "server/CLogicalEntity.hpp"
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
	class CLogicDistanceAutosave : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_iszTargetEntity; // 0x4d8		
		float m_flDistanceToPlayer; // 0x4e0		
		bool m_bForceNewLevelUnit; // 0x4e4		
		bool m_bCheckCough; // 0x4e5		
		bool m_bThinkDangerous; // 0x4e6		
	private:
		[[maybe_unused]] uint8_t __pad04e7[0x1]; // 0x4e7
	public:
		float m_flDangerousTime; // 0x4e8		
		
		// Datamap fields:
		// void InputSave; // 0x0
		// float InputSaveDangerous; // 0x0
		// void CLogicDistanceAutosaveSaveThink; // 0x0
	};
};
