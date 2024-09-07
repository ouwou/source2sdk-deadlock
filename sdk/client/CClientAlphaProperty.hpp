#pragma once
#include "client/IClientAlphaProperty.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// Has Trivial Destructor
	class CClientAlphaProperty : public client::IClientAlphaProperty
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
	public:
		uint8_t m_nRenderFX; // 0x10		
		uint8_t m_nRenderMode; // 0x11		
		struct 
		{
			uint8_t m_bAlphaOverride: 1; 			
			uint8_t m_bShadowAlphaOverride: 1; 			
			uint8_t m_nReserved: 6; 			
			uint8_t __pad0: 8;
		}; // 16 bits
		uint8_t m_nAlpha; // 0x13		
		uint16_t m_nDesyncOffset; // 0x14		
		uint16_t m_nReserved2; // 0x16		
		uint16_t m_nDistFadeStart; // 0x18		
		uint16_t m_nDistFadeEnd; // 0x1a		
		float m_flFadeScale; // 0x1c		
		entity2::GameTime_t m_flRenderFxStartTime; // 0x20		
		float m_flRenderFxDuration; // 0x24		
	};
};
