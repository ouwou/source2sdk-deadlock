#pragma once
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2e0
	// Has VTable
	class CFlashlightEffect
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		bool m_bIsOn; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0011[0xf]; // 0x11
	public:
		bool m_bMuzzleFlashEnabled; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
	public:
		float m_flMuzzleFlashBrightness; // 0x24		
	private:
		[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
	public:
		Quaternion m_quatMuzzleFlashOrientation; // 0x30		
		Vector m_vecMuzzleFlashOrigin; // 0x40		
		float m_flFov; // 0x4c		
		float m_flFarZ; // 0x50		
		float m_flLinearAtten; // 0x54		
		bool m_bCastsShadows; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
	public:
		float m_flCurrentPullBackDist; // 0x5c		
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_FlashlightTexture; // 0x60		
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_MuzzleFlashTexture; // 0x68		
		char m_textureName[64]; // 0x70		
	};
};
