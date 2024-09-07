#pragma once
#include "client/CGlowSprite.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CGlowOverlay
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		Vector m_vPos; // 0x8		
		bool m_bDirectional; // 0x14		
	private:
		[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
	public:
		Vector m_vDirection; // 0x18		
		bool m_bInSky; // 0x24		
	private:
		[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
	public:
		float m_skyObstructionScale; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		client::CGlowSprite m_Sprites[4]; // 0x30		
		int32_t m_nSprites; // 0xb0		
		float m_flProxyRadius; // 0xb4		
		float m_flHDRColorScale; // 0xb8		
		float m_flGlowObstructionScale; // 0xbc		
		bool m_bCacheGlowObstruction; // 0xc0		
		bool m_bCacheSkyObstruction; // 0xc1		
		int16_t m_bActivated; // 0xc2		
		uint16_t m_ListIndex; // 0xc4		
	private:
		[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
	public:
		int32_t m_queryHandle; // 0xc8		
	};
};
