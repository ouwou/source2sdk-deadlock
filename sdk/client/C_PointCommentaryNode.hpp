#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xb90
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "float32 m_flStartTimeInCommentary"
	// MNetworkVarNames "string_t m_iszCommentaryFile"
	// MNetworkVarNames "string_t m_iszTitle"
	// MNetworkVarNames "string_t m_iszSpeakers"
	// MNetworkVarNames "int m_iNodeNumber"
	// MNetworkVarNames "int m_iNodeNumberMax"
	// MNetworkVarNames "bool m_bListenedTo"
	// MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
	class C_PointCommentaryNode : public client::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x8]; // 0xb40
	public:
		// MNetworkEnable
		bool m_bActive; // 0xb48		
		bool m_bWasActive; // 0xb49		
	private:
		[[maybe_unused]] uint8_t __pad0b4a[0x2]; // 0xb4a
	public:
		entity2::GameTime_t m_flEndTime; // 0xb4c		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0xb50		
		// MNetworkEnable
		float m_flStartTimeInCommentary; // 0xb54		
		// MNetworkEnable
		CUtlSymbolLarge m_iszCommentaryFile; // 0xb58		
		// MNetworkEnable
		CUtlSymbolLarge m_iszTitle; // 0xb60		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSpeakers; // 0xb68		
		// MNetworkEnable
		int32_t m_iNodeNumber; // 0xb70		
		// MNetworkEnable
		int32_t m_iNodeNumberMax; // 0xb74		
		// MNetworkEnable
		bool m_bListenedTo; // 0xb78		
	private:
		[[maybe_unused]] uint8_t __pad0b79[0xf]; // 0xb79
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hViewPosition; // 0xb88		
		bool m_bRestartAfterRestore; // 0xb8c		
		
		// Datamap fields:
		// void m_sndCommentary; // 0xb80
	};
};
