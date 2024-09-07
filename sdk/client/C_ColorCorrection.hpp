#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x7a0
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkVarNames "float32 m_MinFalloff"
	// MNetworkVarNames "float32 m_MaxFalloff"
	// MNetworkVarNames "float32 m_flFadeInDuration"
	// MNetworkVarNames "float32 m_flFadeOutDuration"
	// MNetworkVarNames "float32 m_flMaxWeight"
	// MNetworkVarNames "float32 m_flCurWeight"
	// MNetworkVarNames "char m_netlookupFilename"
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "bool m_bMaster"
	// MNetworkVarNames "bool m_bClientSide"
	// MNetworkVarNames "bool m_bExclusive"
	class C_ColorCorrection : public client::C_BaseEntity
	{
	public:
		Vector m_vecOrigin; // 0x558		
		// MNetworkEnable
		float m_MinFalloff; // 0x564		
		// MNetworkEnable
		float m_MaxFalloff; // 0x568		
		// MNetworkEnable
		float m_flFadeInDuration; // 0x56c		
		// MNetworkEnable
		float m_flFadeOutDuration; // 0x570		
		// MNetworkEnable
		float m_flMaxWeight; // 0x574		
		// MNetworkEnable
		float m_flCurWeight; // 0x578		
		// MNetworkEnable
		char m_netlookupFilename[512]; // 0x57c		
		// MNetworkEnable
		bool m_bEnabled; // 0x77c		
		// MNetworkEnable
		bool m_bMaster; // 0x77d		
		// MNetworkEnable
		bool m_bClientSide; // 0x77e		
		// MNetworkEnable
		bool m_bExclusive; // 0x77f		
		bool m_bEnabledOnClient[1]; // 0x780		
	private:
		[[maybe_unused]] uint8_t __pad0781[0x3]; // 0x781
	public:
		float m_flCurWeightOnClient[1]; // 0x784		
		bool m_bFadingIn[1]; // 0x788		
	private:
		[[maybe_unused]] uint8_t __pad0789[0x3]; // 0x789
	public:
		float m_flFadeStartWeight[1]; // 0x78c		
		float m_flFadeStartTime[1]; // 0x790		
		float m_flFadeDuration[1]; // 0x794		
	};
};
