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
	// Size: 0x508
	// Has VTable
	class CPointProximitySensor : public server::CPointEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		CHandle<server::CBaseEntity> m_hTargetEntity; // 0x4dc		
		CEntityOutputTemplate<float> m_Distance; // 0x4e0		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// CUtlSymbolLarge InputSetTargetEntity; // 0x0
	};
};
