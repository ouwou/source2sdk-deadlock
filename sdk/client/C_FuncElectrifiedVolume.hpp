#pragma once
#include "client/C_FuncBrush.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x848
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_EffectName"
	// MNetworkVarNames "bool m_bState"
	class C_FuncElectrifiedVolume : public client::C_FuncBrush
	{
	public:
		client::ParticleIndex_t m_nAmbientEffect; // 0x830		
	private:
		[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_EffectName; // 0x838		
		// MNetworkEnable
		bool m_bState; // 0x840		
	};
};
