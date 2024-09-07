#pragma once
#include "client/C_BaseTrigger.hpp"
#include "client/TimedEvent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x888
	// Has VTable
	class C_Precipitation : public client::C_BaseTrigger
	{
	public:
		float m_flDensity; // 0x838		
	private:
		[[maybe_unused]] uint8_t __pad083c[0xc]; // 0x83c
	public:
		float m_flParticleInnerDist; // 0x848		
	private:
		[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
	public:
		char* m_pParticleDef; // 0x850		
	private:
		[[maybe_unused]] uint8_t __pad0858[0x20]; // 0x858
	public:
		client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x878		
		bool m_bActiveParticlePrecipEmitter[1]; // 0x880		
		bool m_bParticlePrecipInitialized; // 0x881		
		bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x882		
	private:
		[[maybe_unused]] uint8_t __pad0883[0x1]; // 0x883
	public:
		int32_t m_nAvailableSheetSequencesMaxIndex; // 0x884		
	};
};
