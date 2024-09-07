#pragma once
#include "server/CPointEntity.hpp"
#include "server/CSound.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1ee8
	// Has VTable
	class CSoundEnt : public server::CPointEntity
	{
	public:
		int32_t m_iFreeSound; // 0x4d8		
		int32_t m_iActiveSound; // 0x4dc		
		int32_t m_cLastActiveSounds; // 0x4e0		
		server::CSound m_SoundPool[128]; // 0x4e4		
	};
};
