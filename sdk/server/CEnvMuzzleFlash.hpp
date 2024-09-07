#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e8
	// Has VTable
	class CEnvMuzzleFlash : public server::CPointEntity
	{
	public:
		float m_flScale; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_iszParentAttachment; // 0x4e0		
		
		// Datamap fields:
		// void InputFire; // 0x0
	};
};
