#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x978
	// Has VTable
	class CChangeLevel : public server::CBaseTrigger
	{
	public:
		CUtlString m_sMapName; // 0x938		
		CUtlString m_sLandmarkName; // 0x940		
		entity2::CEntityIOOutput m_OnChangeLevel; // 0x948		
		bool m_bTouched; // 0x970		
		bool m_bNoTouch; // 0x971		
		bool m_bNewChapter; // 0x972		
		bool m_bOnChangeLevelFired; // 0x973		
		
		// Datamap fields:
		// void InputChangeLevel; // 0x0
		// CUtlString map; // 0x7fffffff
		// CUtlString landmark; // 0x7fffffff
	};
};
