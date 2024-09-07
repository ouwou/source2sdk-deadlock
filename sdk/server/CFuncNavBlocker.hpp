#pragma once
#include "server/CBaseModelEntity.hpp"
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
	class CFuncNavBlocker : public server::CBaseModelEntity
	{
	public:
		bool m_bDisabled; // 0x768		
	private:
		[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
	public:
		int32_t m_nBlockedTeamNumber; // 0x76c		
		
		// Datamap fields:
		// void InputBlockNav; // 0x0
		// void InputUnblockNav; // 0x0
	};
};
