#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/SatVolumeIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2e8
	// Has VTable
	class CCitadel_Modifier_StormCloud : public client::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flNextRandomLightningStrike; // 0xc0		
		entity2::GameTime_t m_flStartTime; // 0xc4		
		float m_flRadiusIncrementPerSecond; // 0xc8		
		Vector m_vCastPosition; // 0xcc		
		bool m_bFiredEndingSoonSound; // 0xd8		
	private:
		[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
	public:
		int32_t m_nLastTickForLightningCenterCalc; // 0xdc		
		Vector m_vecLightningCenter; // 0xe0		
		client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xec		
	};
};
