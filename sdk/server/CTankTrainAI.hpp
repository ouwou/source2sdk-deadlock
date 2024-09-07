#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CFuncTrackTrain;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	class CTankTrainAI : public server::CPointEntity
	{
	public:
		CHandle<server::CFuncTrackTrain> m_hTrain; // 0x4d8		
		CHandle<server::CBaseEntity> m_hTargetEntity; // 0x4dc		
		int32_t m_soundPlaying; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e4[0x14]; // 0x4e4
	public:
		CUtlSymbolLarge m_startSoundName; // 0x4f8		
		CUtlSymbolLarge m_engineSoundName; // 0x500		
		CUtlSymbolLarge m_movementSoundName; // 0x508		
		CUtlSymbolLarge m_targetEntityName; // 0x510		
		
		// Datamap fields:
		// void m_soundTreads; // 0x4e8
		// void m_soundEngine; // 0x4f0
		// CUtlSymbolLarge InputTargetEntity; // 0x0
	};
};
