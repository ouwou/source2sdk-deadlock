#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CPointEntity.hpp"
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
	class CAI_LookTarget : public server::CPointEntity
	{
	public:
		int32_t m_iContext; // 0x4d8		
		int32_t m_iPriority; // 0x4dc		
		bool m_bDisabled; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
	public:
		entity2::GameTime_t m_flTimeNextAvailable; // 0x4e4		
		float m_flMaxDist; // 0x4e8		
	};
};
