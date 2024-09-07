#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPointEntity.hpp"
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
	class CCredits : public server::CPointEntity
	{
	public:
		entity2::CEntityIOOutput m_OnCreditsDone; // 0x4d8		
		bool m_bRolledOutroCredits; // 0x500		
	private:
		[[maybe_unused]] uint8_t __pad0501[0x3]; // 0x501
	public:
		float m_flLogoLength; // 0x504		
		
		// Datamap fields:
		// void InputRollCredits; // 0x0
		// void InputRollOutroCredits; // 0x0
		// void InputShowLogo; // 0x0
		// float InputSetLogoLength; // 0x0
	};
};
