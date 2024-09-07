#pragma once
#include "client/CRemapFloat.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierProjectilePitchingLoopSoundThinkerVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Audio"
		// MPropertyDescription "Remap values from Speed to Pitch (MinSpeed, MaxSpeed, MinSpeedPitch, MaxSpeedPitch)"
		client::CRemapFloat m_speedToPitchRemap; // 0x5f8		
	};
};
