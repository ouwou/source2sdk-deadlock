#pragma once
#include "entity2/GameTick_t.hpp"
#include "server/HandshakeScope_t.hpp"
#include "server/HandshakeState_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Destructor
	struct HandshakeInfo_t
	{
	public:
		server::HandshakeState_t m_nHandshakeState; // 0x0		
		server::HandshakeScope_t m_nHandshakeScope; // 0x4		
		entity2::GameTick_t m_nLastHandshakeUpdateTick; // 0x8		
		bool m_bForceHandshakeRestartOnScriptedSequenceCompletion; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
	public:
		CGlobalSymbol m_sHandshakeName; // 0x10		
	};
};
