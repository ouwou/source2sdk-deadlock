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
	class CFuncNavObstruction : public server::CBaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0768[0x8]; // 0x768
	public:
		bool m_bDisabled; // 0x770		
	};
};
