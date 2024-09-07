#pragma once
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
	// Size: 0x520
	// Has VTable
	class CPointVelocitySensor : public server::CPointEntity
	{
	public:
		CHandle<server::CBaseEntity> m_hTargetEntity; // 0x4d8		
		Vector m_vecAxis; // 0x4dc		
		bool m_bEnabled; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
	public:
		float m_fPrevVelocity; // 0x4ec		
		float m_flAvgInterval; // 0x4f0		
	private:
		[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
	public:
		CEntityOutputTemplate<float> m_Velocity; // 0x4f8		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
