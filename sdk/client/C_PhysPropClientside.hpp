#pragma once
#include "client/C_BreakableProp.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc40
	// Has VTable
	class C_PhysPropClientside : public client::C_BreakableProp
	{
	public:
		entity2::GameTime_t m_flTouchDelta; // 0xc18		
		entity2::GameTime_t m_fDeathTime; // 0xc1c		
		float m_inertiaScale; // 0xc20		
		Vector m_vecDamagePosition; // 0xc24		
		Vector m_vecDamageDirection; // 0xc30		
		int32_t m_nDamageType; // 0xc3c		
		
		// Datamap fields:
		// float m_impactEnergyScale; // 0xb88
		// bool forcemotiondisabled; // 0x7fffffff
		// bool phys_start_asleep; // 0x7fffffff
		// float fademaxdist; // 0x7fffffff
		// float fademindist; // 0x7fffffff
		// float fadescale; // 0x7fffffff
		// float scale; // 0x7fffffff
		// const char * skin; // 0x7fffffff
	};
};
