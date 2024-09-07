#pragma once
#include "client/C_BaseEntity.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x618
	// Has VTable
	class C_SoundEventEntity : public client::C_BaseEntity
	{
	public:
		bool m_bStartOnSpawn; // 0x558		
		bool m_bToLocalPlayer; // 0x559		
		bool m_bStopOnNew; // 0x55a		
		bool m_bSaveRestore; // 0x55b		
		bool m_bSavedIsPlaying; // 0x55c		
	private:
		[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
	public:
		float m_flSavedElapsedTime; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
	public:
		CUtlSymbolLarge m_iszSourceEntityName; // 0x568		
		CUtlSymbolLarge m_iszAttachmentName; // 0x570		
		CEntityOutputTemplate<uint64_t> m_onGUIDChanged; // 0x578		
		entity2::CEntityIOOutput m_onSoundFinished; // 0x5a0		
		float m_flClientCullRadius; // 0x5c8		
	private:
		[[maybe_unused]] uint8_t __pad05cc[0x2c]; // 0x5cc
	public:
		CUtlSymbolLarge m_iszSoundName; // 0x5f8		
	private:
		[[maybe_unused]] uint8_t __pad0600[0x8]; // 0x600
	public:
		CEntityHandle m_hSource; // 0x608		
		int32_t m_nEntityIndexSelection; // 0x60c		
		struct 
		{
			uint8_t m_bClientSideOnly: 1; 			
			uint8_t __pad0: 1;
		}; // 2 bits
		
		// Datamap fields:
		// CUtlSymbolLarge InputSetSoundName; // 0x0
		// CUtlSymbolLarge InputSetSourceEntity; // 0x0
		// CUtlSymbolLarge InputStartSound; // 0x0
		// bool InputPauseSound; // 0x0
		// bool InputUnPauseSound; // 0x0
		// void InputStopSound; // 0x0
		// void m_nGUID; // 0x600
		// void C_SoundEventEntitySoundFinishedThink; // 0x0
	};
};
