#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x520
	// Has VTable
	class CMessage : public server::CPointEntity
	{
	public:
		CUtlSymbolLarge m_iszMessage; // 0x4d8		
		float m_MessageVolume; // 0x4e0		
		int32_t m_MessageAttenuation; // 0x4e4		
		float m_Radius; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
	public:
		CUtlSymbolLarge m_sNoise; // 0x4f0		
		entity2::CEntityIOOutput m_OnShowMessage; // 0x4f8		
		
		// Datamap fields:
		// void InputShowMessage; // 0x0
	};
};
