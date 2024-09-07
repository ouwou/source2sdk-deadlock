#pragma once
#include "server/CBaseEntity.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f8
	// Has VTable
	class CPointModifierThinker : public server::CBaseEntity
	{
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_hModifier; // 0x4d8		
		bool m_bSendToClients; // 0x4f0		
		
		// Datamap fields:
		// void CPointModifierThinkerOnModifierLost; // 0x0
	};
};
