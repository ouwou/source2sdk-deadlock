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
	// Size: 0x530
	// Has VTable
	class CBaseFilter : public server::CLogicalEntity
	{
	public:
		bool m_bNegated; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
	public:
		entity2::CEntityIOOutput m_OnPass; // 0x4e0		
		entity2::CEntityIOOutput m_OnFail; // 0x508		
		
		// Datamap fields:
		// void InputTestActivator; // 0x0
	};
};
