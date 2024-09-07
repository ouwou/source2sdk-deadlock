#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5d8
	// Has VTable
	class CMathCounter : public server::CLogicalEntity
	{
	public:
		float m_flMin; // 0x4d8		
		float m_flMax; // 0x4dc		
		bool m_bHitMin; // 0x4e0		
		bool m_bHitMax; // 0x4e1		
		bool m_bDisabled; // 0x4e2		
	private:
		[[maybe_unused]] uint8_t __pad04e3[0x5]; // 0x4e3
	public:
		CEntityOutputTemplate<float> m_OutValue; // 0x4e8		
		CEntityOutputTemplate<float> m_OnGetValue; // 0x510		
		entity2::CEntityIOOutput m_OnHitMin; // 0x538		
		entity2::CEntityIOOutput m_OnHitMax; // 0x560		
		entity2::CEntityIOOutput m_OnChangedFromMin; // 0x588		
		entity2::CEntityIOOutput m_OnChangedFromMax; // 0x5b0		
		
		// Datamap fields:
		// float InputAdd; // 0x0
		// float InputDivide; // 0x0
		// float InputMultiply; // 0x0
		// float InputSetValue; // 0x0
		// float InputSetValueNoFire; // 0x0
		// float InputSubtract; // 0x0
		// float InputSetHitMax; // 0x0
		// float InputSetHitMin; // 0x0
		// void InputGetValue; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// int32_t startvalue; // 0x7fffffff
	};
};
