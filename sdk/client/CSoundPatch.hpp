#pragma once
#include "client/CCopyRecipientFilter.hpp"
#include "client/CSoundEnvelope.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	class CSoundPatch
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		client::CSoundEnvelope m_pitch; // 0x8		
		client::CSoundEnvelope m_volume; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
	public:
		float m_shutdownTime; // 0x30		
		float m_flLastTime; // 0x34		
		CUtlSymbolLarge m_iszSoundScriptName; // 0x38		
		CHandle<client::C_BaseEntity> m_hEnt; // 0x40		
		CEntityIndex m_soundEntityIndex; // 0x44		
		Vector m_soundOrigin; // 0x48		
		int32_t m_isPlaying; // 0x54		
		client::CCopyRecipientFilter m_Filter; // 0x58		
		float m_flCloseCaptionDuration; // 0x80		
		bool m_bUpdatedSoundOrigin; // 0x84		
	private:
		[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
	public:
		CUtlSymbolLarge m_iszClassName; // 0x88		
		
		// Static fields:
		static int32_t &Get_g_SoundPatchCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// void m_guid; // 0x28
	};
};
