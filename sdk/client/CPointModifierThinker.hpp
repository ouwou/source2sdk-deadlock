#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x578
	// Has VTable
	class CPointModifierThinker : public client::C_BaseEntity
	{
	public:
		CModifierHandleTyped<client::CCitadelModifier> m_hModifier; // 0x558		
		bool m_bSendToClients; // 0x570		
		
		// Datamap fields:
		// void CPointModifierThinkerOnModifierLost; // 0x0
	};
};
