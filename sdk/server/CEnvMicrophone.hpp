#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPointEntity.hpp"
#include "server/SoundFlags_t.hpp"
#include "server/SoundTypes_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x698
	// Has VTable
	class CEnvMicrophone : public server::CPointEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		CHandle<server::CBaseEntity> m_hMeasureTarget; // 0x4dc		
		server::SoundTypes_t m_nSoundType; // 0x4e0		
		server::SoundFlags_t m_nSoundFlags; // 0x4e2		
		float m_flSensitivity; // 0x4e4		
		float m_flSmoothFactor; // 0x4e8		
		float m_flMaxRange; // 0x4ec		
		CUtlSymbolLarge m_iszSpeakerName; // 0x4f0		
		CHandle<server::CBaseEntity> m_hSpeaker; // 0x4f8		
		bool m_bAvoidFeedback; // 0x4fc		
	private:
		[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
	public:
		int32_t m_iSpeakerDSPPreset; // 0x500		
	private:
		[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
	public:
		CUtlSymbolLarge m_iszListenFilter; // 0x508		
		CHandle<server::CBaseFilter> m_hListenFilter; // 0x510		
	private:
		[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
	public:
		CEntityOutputTemplate<float> m_SoundLevel; // 0x518		
		entity2::CEntityIOOutput m_OnRoutedSound; // 0x540		
		entity2::CEntityIOOutput m_OnHeardSound; // 0x568		
		char m_szLastSound[256]; // 0x590		
		int32_t m_iLastRoutedFrame; // 0x690		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// CUtlSymbolLarge InputSetSpeakerName; // 0x0
	};
};
