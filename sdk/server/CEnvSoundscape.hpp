#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CServerOnlyEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x570
	// Has VTable
	class CEnvSoundscape : public server::CServerOnlyEntity
	{
	public:
		entity2::CEntityIOOutput m_OnPlay; // 0x4d8		
		float m_flRadius; // 0x500		
	private:
		[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
	public:
		CUtlSymbolLarge m_soundscapeName; // 0x508		
		CUtlSymbolLarge m_soundEventName; // 0x510		
		bool m_bOverrideWithEvent; // 0x518		
	private:
		[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
	public:
		int32_t m_soundscapeIndex; // 0x51c		
		int32_t m_soundscapeEntityListId; // 0x520		
		uint32_t m_soundEventHash; // 0x524		
		CUtlSymbolLarge m_positionNames[8]; // 0x528		
		CHandle<server::CEnvSoundscape> m_hProxySoundscape; // 0x568		
		bool m_bDisabled; // 0x56c		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggleEnabled; // 0x0
	};
};
