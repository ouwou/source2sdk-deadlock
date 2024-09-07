#pragma once
#include "server/SimpleConstraintSoundProfile.hpp"
#include "server/VelocitySampler.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	class ConstraintSoundInfo
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		server::VelocitySampler m_vSampler; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		server::SimpleConstraintSoundProfile m_soundProfile; // 0x20		
		Vector m_forwardAxis; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
	public:
		CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50		
		CUtlSymbolLarge m_iszTravelSoundBack; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
	public:
		CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68		
		bool m_bPlayTravelSound; // 0x80		
		bool m_bPlayReversalSound; // 0x81		
		
		// Datamap fields:
		// CUtlSymbolLarge m_iszReversalSounds[0]; // 0x68
		// CUtlSymbolLarge m_iszReversalSounds[1]; // 0x70
		// CUtlSymbolLarge m_iszReversalSounds[2]; // 0x78
	};
};
