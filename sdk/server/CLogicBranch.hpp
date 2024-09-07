#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CLogicalEntity.hpp"
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
	// Size: 0x548
	// Has VTable
	class CLogicBranch : public server::CLogicalEntity
	{
	public:
		bool m_bInValue; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_Listeners; // 0x4e0		
		entity2::CEntityIOOutput m_OnTrue; // 0x4f8		
		entity2::CEntityIOOutput m_OnFalse; // 0x520		
		
		// Datamap fields:
		// bool InputSetValue; // 0x0
		// bool InputSetValueTest; // 0x0
		// void InputToggle; // 0x0
		// void InputToggleTest; // 0x0
		// void InputTest; // 0x0
	};
};
