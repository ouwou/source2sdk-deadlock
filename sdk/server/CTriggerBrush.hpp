#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7e8
	// Has VTable
	class CTriggerBrush : public server::CBaseModelEntity
	{
	public:
		entity2::CEntityIOOutput m_OnStartTouch; // 0x768		
		entity2::CEntityIOOutput m_OnEndTouch; // 0x790		
		entity2::CEntityIOOutput m_OnUse; // 0x7b8		
		int32_t m_iInputFilter; // 0x7e0		
		int32_t m_iDontMessageParent; // 0x7e4		
		
		// Datamap fields:
		// void InputDisable; // 0x0
		// void InputEnable; // 0x0
	};
};
