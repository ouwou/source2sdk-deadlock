#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x590
	// Has VTable
	class CSoundEventEntity : public server::CBaseEntity
	{
	public:
		bool m_bStartOnSpawn; // 0x4d8		
		bool m_bToLocalPlayer; // 0x4d9		
		bool m_bStopOnNew; // 0x4da		
		bool m_bSaveRestore; // 0x4db		
		bool m_bSavedIsPlaying; // 0x4dc		
	private:
		[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
	public:
		float m_flSavedElapsedTime; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
	public:
		CUtlSymbolLarge m_iszSourceEntityName; // 0x4e8		
		CUtlSymbolLarge m_iszAttachmentName; // 0x4f0		
		CEntityOutputTemplate<uint64_t> m_onGUIDChanged; // 0x4f8		
		entity2::CEntityIOOutput m_onSoundFinished; // 0x520		
		float m_flClientCullRadius; // 0x548		
	private:
		[[maybe_unused]] uint8_t __pad054c[0x2c]; // 0x54c
	public:
		CUtlSymbolLarge m_iszSoundName; // 0x578		
	private:
		[[maybe_unused]] uint8_t __pad0580[0x8]; // 0x580
	public:
		CEntityHandle m_hSource; // 0x588		
		int32_t m_nEntityIndexSelection; // 0x58c		
		
		// Datamap fields:
		// CUtlSymbolLarge InputSetSoundName; // 0x0
		// CUtlSymbolLarge InputSetSourceEntity; // 0x0
		// CUtlSymbolLarge InputStartSound; // 0x0
		// bool InputPauseSound; // 0x0
		// bool InputUnPauseSound; // 0x0
		// void InputStopSound; // 0x0
		// void m_nGUID; // 0x580
		// void CSoundEventEntitySoundFinishedThink; // 0x0
	};
};
