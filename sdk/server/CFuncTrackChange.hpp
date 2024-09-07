#pragma once
#include "server/CFuncPlatRot.hpp"
#include "server/TRAIN_CODE.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CFuncTrackTrain;
};
namespace source2sdk::server
{
	struct CPathTrack;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x870
	// Has VTable
	class CFuncTrackChange : public server::CFuncPlatRot
	{
	public:
		server::CPathTrack* m_trackTop; // 0x830		
		server::CPathTrack* m_trackBottom; // 0x838		
		server::CFuncTrackTrain* m_train; // 0x840		
		CUtlSymbolLarge m_trackTopName; // 0x848		
		CUtlSymbolLarge m_trackBottomName; // 0x850		
		CUtlSymbolLarge m_trainName; // 0x858		
		server::TRAIN_CODE m_code; // 0x860		
		int32_t m_targetState; // 0x864		
		int32_t m_use; // 0x868		
		
		// Datamap fields:
		// void CFuncTrackChangeFind; // 0x0
	};
};
