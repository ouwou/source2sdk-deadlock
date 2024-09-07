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
	// Size: 0xae0
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
		[[maybe_unused]] uint8_t __pad0a90[0x8]; // 0xa90
	public:
		// MNetworkEnable
		bool m_bActive; // 0xa98		
		bool m_bWasActive; // 0xa99		
	private:
		[[maybe_unused]] uint8_t __pad0a9a[0x2]; // 0xa9a
	public:
		entity2::GameTime_t m_flEndTime; // 0xa9c		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0xaa0		
		// MNetworkEnable
		float m_flStartTimeInCommentary; // 0xaa4		
		// MNetworkEnable
		CUtlSymbolLarge m_iszCommentaryFile; // 0xaa8		
		// MNetworkEnable
		CUtlSymbolLarge m_iszTitle; // 0xab0		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSpeakers; // 0xab8		
		// MNetworkEnable
		int32_t m_iNodeNumber; // 0xac0		
		// MNetworkEnable
		int32_t m_iNodeNumberMax; // 0xac4		
		// MNetworkEnable
		bool m_bListenedTo; // 0xac8		
	private:
		[[maybe_unused]] uint8_t __pad0ac9[0xf]; // 0xac9
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hViewPosition; // 0xad8		
		bool m_bRestartAfterRestore; // 0xadc		
		
		// Datamap fields:
		// void m_sndCommentary; // 0xad0
	};
};
