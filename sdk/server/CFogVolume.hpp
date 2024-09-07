#pragma once
#include "server/CServerOnlyModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x790
	// Has VTable
	class CFogVolume : public server::CServerOnlyModelEntity
	{
	public:
		CUtlSymbolLarge m_fogName; // 0x768		
		CUtlSymbolLarge m_postProcessName; // 0x770		
		CUtlSymbolLarge m_colorCorrectionName; // 0x778		
	private:
		[[maybe_unused]] uint8_t __pad0780[0x8]; // 0x780
	public:
		bool m_bDisabled; // 0x788		
		bool m_bInFogVolumesList; // 0x789		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// CHandle< CBaseEntity > m_hFogController; // 0x780
		// CHandle< CBaseEntity > m_hColorCorrectionController; // 0x784
	};
};
