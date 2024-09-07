#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CTriggerMultiple.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa08
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
	class CCitadelControlPointTrigger : public server::CTriggerMultiple
	{
	public:
		entity2::CEntityIOOutput m_OnFullyCaptured; // 0x960		
		entity2::CEntityIOOutput m_OnBecomeCapturable; // 0x988		
		// MNetworkEnable
		float m_flInitialRadius; // 0x9b0		
		// MNetworkEnable
		float m_flEndRadius; // 0x9b4		
		// MNetworkEnable
		float m_flProgress; // 0x9b8		
		// MNetworkEnable
		float m_flCaptureTime; // 0x9bc		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hUnlockPrereq; // 0x9c0		
		// MNetworkEnable
		bool m_bAvailable; // 0x9c4		
		// MNetworkEnable
		bool m_bIsBeingCaptured; // 0x9c5		
		// MNetworkEnable
		bool m_bIsBeingBlocked; // 0x9c6		
	private:
		[[maybe_unused]] uint8_t __pad09c7[0x9]; // 0x9c7
	public:
		entity2::GameTime_t m_flLastTouchedTime; // 0x9d0		
		Vector m_vecBeamTarget; // 0x9d4		
		Vector m_vecBeamStart; // 0x9e0		
		client::ParticleIndex_t m_nFXProgressBeam; // 0x9ec		
		CUtlSymbolLarge m_strUnlockPrereq; // 0x9f0		
		CUtlSymbolLarge m_strBeamStart; // 0x9f8		
		CUtlSymbolLarge m_strBeamTarget; // 0xa00		
	};
};
