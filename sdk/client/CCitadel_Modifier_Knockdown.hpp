#pragma once
#include "client/CCitadel_Modifier_Stunned.hpp"
#include "client/EKnockDownTypes.hpp"
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
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_Knockdown : public client::CCitadel_Modifier_Stunned
	{
	public:
		QAngle m_angStunAngles; // 0xc8		
		client::EKnockDownTypes m_ePreferredKnockdownType; // 0xd4		
		bool m_bForceTakePreferred; // 0xd8		
	private:
		[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
	public:
		entity2::GameTime_t m_flGetUpAnimTime; // 0xdc		
		bool m_bGetUpCamSeqStarted; // 0xe0		
		bool m_bOnGroundDuration; // 0xe1		
	private:
		[[maybe_unused]] uint8_t __pad00e2[0x2]; // 0xe2
	public:
		client::SatVolumeIndex_t m_satIndex; // 0xe4		
	};
};
