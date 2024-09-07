#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x500
	// Has VTable
	class CPointPush : public server::CPointEntity
	{
	public:
		bool m_bEnabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		float m_flMagnitude; // 0x4dc		
		float m_flRadius; // 0x4e0		
		float m_flInnerRadius; // 0x4e4		
		float m_flConeOfInfluence; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
	public:
		CUtlSymbolLarge m_iszFilterName; // 0x4f0		
		CHandle<server::CBaseFilter> m_hFilter; // 0x4f8		
		
		// Datamap fields:
		// void CPointPushPushThink; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
