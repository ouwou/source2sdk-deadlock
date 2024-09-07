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
	// Size: 0x4f8
	// Has VTable
	class CPointHurt : public server::CPointEntity
	{
	public:
		int32_t m_nDamage; // 0x4d8		
		int32_t m_bitsDamageType; // 0x4dc		
		float m_flRadius; // 0x4e0		
		float m_flDelay; // 0x4e4		
		CUtlSymbolLarge m_strTarget; // 0x4e8		
		CHandle<server::CBaseEntity> m_pActivator; // 0x4f0		
		
		// Datamap fields:
		// void CPointHurtHurtThink; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputToggle; // 0x0
		// void InputHurt; // 0x0
	};
};
