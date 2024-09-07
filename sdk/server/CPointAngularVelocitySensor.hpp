#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CPointEntity.hpp"
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
	// Size: 0x600
	// Has VTable
	class CPointAngularVelocitySensor : public server::CPointEntity
	{
	public:
		CHandle<server::CBaseEntity> m_hTargetEntity; // 0x4d8		
		float m_flThreshold; // 0x4dc		
		int32_t m_nLastCompareResult; // 0x4e0		
		int32_t m_nLastFireResult; // 0x4e4		
		entity2::GameTime_t m_flFireTime; // 0x4e8		
		float m_flFireInterval; // 0x4ec		
		float m_flLastAngVelocity; // 0x4f0		
		QAngle m_lastOrientation; // 0x4f4		
		Vector m_vecAxis; // 0x500		
		bool m_bUseHelper; // 0x50c		
	private:
		[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
	public:
		CEntityOutputTemplate<float> m_AngularVelocity; // 0x510		
		entity2::CEntityIOOutput m_OnLessThan; // 0x538		
		entity2::CEntityIOOutput m_OnLessThanOrEqualTo; // 0x560		
		entity2::CEntityIOOutput m_OnGreaterThan; // 0x588		
		entity2::CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x5b0		
		entity2::CEntityIOOutput m_OnEqualTo; // 0x5d8		
		
		// Datamap fields:
		// void InputTest; // 0x0
		// void InputTestWithInterval; // 0x0
	};
};
