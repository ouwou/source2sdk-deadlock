#pragma once
#include "client/EngineLoopState_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x60
	// Has Trivial Destructor
	struct EventSetTime_t
	{
	public:
		client::EngineLoopState_t m_LoopState; // 0x0		
		int32_t m_nClientOutputFrames; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		double m_flRealTime; // 0x30		
		double m_flRenderTime; // 0x38		
		double m_flRenderFrameTime; // 0x40		
		double m_flRenderFrameTimeUnbounded; // 0x48		
		double m_flRenderFrameTimeUnscaled; // 0x50		
		double m_flTickRemainder; // 0x58		
	};
};
