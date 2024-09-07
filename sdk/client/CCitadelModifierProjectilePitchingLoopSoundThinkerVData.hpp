#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "client/CRemapFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierProjectilePitchingLoopSoundThinkerVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Audio"
		// MPropertyDescription "Remap values from Speed to Pitch (MinSpeed, MaxSpeed, MinSpeedPitch, MaxSpeedPitch)"
		client::CRemapFloat m_speedToPitchRemap; // 0x5f8		
	};
};
