#pragma once
#include "client/C_BaseTrigger.hpp"
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0x890
	// Has VTable
	// 
	// MNetworkVarNames "float m_flInitialRadius"
	// MNetworkVarNames "float m_flEndRadius"
	// MNetworkVarNames "float m_flProgress"
	// MNetworkVarNames "float m_flCaptureTime"
	// MNetworkVarNames "EHANDLE m_hUnlockPrereq"
	// MNetworkVarNames "bool m_bAvailable"
	// MNetworkVarNames "bool m_bIsBeingCaptured"
	// MNetworkVarNames "bool m_bIsBeingBlocked"
	class CCitadelControlPointTrigger : public client::C_BaseTrigger
	{
	public:
		// MNetworkEnable
		float m_flInitialRadius; // 0x838		
		// MNetworkEnable
		float m_flEndRadius; // 0x83c		
		// MNetworkEnable
		float m_flProgress; // 0x840		
		// MNetworkEnable
		float m_flCaptureTime; // 0x844		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hUnlockPrereq; // 0x848		
		// MNetworkEnable
		bool m_bAvailable; // 0x84c		
		// MNetworkEnable
		bool m_bIsBeingCaptured; // 0x84d		
		// MNetworkEnable
		bool m_bIsBeingBlocked; // 0x84e		
	private:
		[[maybe_unused]] uint8_t __pad084f[0x9]; // 0x84f
	public:
		entity2::GameTime_t m_flLastTouchedTime; // 0x858		
		Vector m_vecBeamTarget; // 0x85c		
		Vector m_vecBeamStart; // 0x868		
		client::ParticleIndex_t m_nFXProgressBeam; // 0x874		
		CUtlSymbolLarge m_strUnlockPrereq; // 0x878		
		CUtlSymbolLarge m_strBeamStart; // 0x880		
		CUtlSymbolLarge m_strBeamTarget; // 0x888		
	};
};
