#pragma once
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x948
	// Has VTable
	class CTriggerSave : public server::CBaseTrigger
	{
	public:
		bool m_bForceNewLevelUnit; // 0x938		
	private:
		[[maybe_unused]] uint8_t __pad0939[0x3]; // 0x939
	public:
		float m_fDangerousTimer; // 0x93c		
		int32_t m_minHitPoints; // 0x940		
	};
};
