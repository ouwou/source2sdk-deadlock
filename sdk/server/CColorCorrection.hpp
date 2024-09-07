#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x710
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkVarNames "float32 m_flFadeInDuration"
	// MNetworkVarNames "float32 m_flFadeOutDuration"
	// MNetworkVarNames "float32 m_flMaxWeight"
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "bool m_bMaster"
	// MNetworkVarNames "bool m_bClientSide"
	// MNetworkVarNames "bool m_bExclusive"
	// MNetworkVarNames "float32 m_MinFalloff"
	// MNetworkVarNames "float32 m_MaxFalloff"
	// MNetworkVarNames "float32 m_flCurWeight"
	// MNetworkVarNames "char m_netlookupFilename"
	class CColorCorrection : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		float m_flFadeInDuration; // 0x4d8		
		// MNetworkEnable
		float m_flFadeOutDuration; // 0x4dc		
		float m_flStartFadeInWeight; // 0x4e0		
		float m_flStartFadeOutWeight; // 0x4e4		
		entity2::GameTime_t m_flTimeStartFadeIn; // 0x4e8		
		entity2::GameTime_t m_flTimeStartFadeOut; // 0x4ec		
		// MNetworkEnable
		float m_flMaxWeight; // 0x4f0		
		bool m_bStartDisabled; // 0x4f4		
		// MNetworkEnable
		bool m_bEnabled; // 0x4f5		
		// MNetworkEnable
		bool m_bMaster; // 0x4f6		
		// MNetworkEnable
		bool m_bClientSide; // 0x4f7		
		// MNetworkEnable
		bool m_bExclusive; // 0x4f8		
	private:
		[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
	public:
		// MNetworkEnable
		float m_MinFalloff; // 0x4fc		
		// MNetworkEnable
		float m_MaxFalloff; // 0x500		
		// MNetworkEnable
		float m_flCurWeight; // 0x504		
		// MNetworkEnable
		char m_netlookupFilename[512]; // 0x508		
		CUtlSymbolLarge m_lookupFilename; // 0x708		
		
		// Datamap fields:
		// void CColorCorrectionFadeInThink; // 0x0
		// void CColorCorrectionFadeOutThink; // 0x0
		// void m_netlookupFilename; // 0x508
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// float InputSetFadeInDuration; // 0x0
		// float InputSetFadeOutDuration; // 0x0
	};
};
