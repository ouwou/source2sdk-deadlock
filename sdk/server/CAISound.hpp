#pragma once
#include "server/CPointEntity.hpp"
#include "server/SoundFlags_t.hpp"
#include "server/SoundTypes_t.hpp"
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
	class CAISound : public server::CPointEntity
	{
	public:
		server::SoundTypes_t m_iSoundType; // 0x4d8		
		server::SoundFlags_t m_iSoundFlags; // 0x4da		
		int32_t m_iVolume; // 0x4dc		
		int32_t m_iSoundIndex; // 0x4e0		
		float m_flDuration; // 0x4e4		
		CUtlSymbolLarge m_iszProxyEntityName; // 0x4e8		
		
		// Datamap fields:
		// int32_t InputInsertSound; // 0x0
		// void InputEmitAISound; // 0x0
		// void InputStopAISound; // 0x0
	};
};
