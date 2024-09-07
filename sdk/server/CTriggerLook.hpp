#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CTriggerOnce.hpp"
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
	// Size: 0x9f8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bTestOcclusion"
	class CTriggerLook : public server::CTriggerOnce
	{
	public:
		CHandle<server::CBaseEntity> m_hLookTarget; // 0x960		
		float m_flFieldOfView; // 0x964		
		float m_flLookTime; // 0x968		
		float m_flLookTimeTotal; // 0x96c		
		entity2::GameTime_t m_flLookTimeLast; // 0x970		
		float m_flTimeoutDuration; // 0x974		
		bool m_bTimeoutFired; // 0x978		
		bool m_bIsLooking; // 0x979		
		bool m_b2DFOV; // 0x97a		
		bool m_bUseVelocity; // 0x97b		
		// MNetworkEnable
		bool m_bTestOcclusion; // 0x97c		
	private:
		[[maybe_unused]] uint8_t __pad097d[0x3]; // 0x97d
	public:
		entity2::CEntityIOOutput m_OnTimeout; // 0x980		
		entity2::CEntityIOOutput m_OnStartLook; // 0x9a8		
		entity2::CEntityIOOutput m_OnEndLook; // 0x9d0		
		
		// Datamap fields:
		// void CTriggerLookTimeoutThink; // 0x0
	};
};
