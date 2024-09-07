#pragma once
#include "server/CModelPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x778
	// Has VTable
	class CRevertSaved : public server::CModelPointEntity
	{
	public:
		float m_loadTime; // 0x768		
		float m_Duration; // 0x76c		
		float m_HoldTime; // 0x770		
		
		// Datamap fields:
		// void InputReload; // 0x0
		// void CRevertSavedLoadThink; // 0x0
	};
};
