#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "server/CBeam.hpp"
#include "server/Touch_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8b0
	// Has VTable
	class CEnvBeam : public server::CBeam
	{
	public:
		int32_t m_active; // 0x808		
	private:
		[[maybe_unused]] uint8_t __pad080c[0x4]; // 0x80c
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture; // 0x810		
		CUtlSymbolLarge m_iszStartEntity; // 0x818		
		CUtlSymbolLarge m_iszEndEntity; // 0x820		
		float m_life; // 0x828		
		float m_boltWidth; // 0x82c		
		float m_noiseAmplitude; // 0x830		
		int32_t m_speed; // 0x834		
		float m_restrike; // 0x838		
	private:
		[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
	public:
		CUtlSymbolLarge m_iszSpriteName; // 0x840		
		int32_t m_frameStart; // 0x848		
		Vector m_vEndPointWorld; // 0x84c		
		Vector m_vEndPointRelative; // 0x858		
		float m_radius; // 0x864		
		server::Touch_t m_TouchType; // 0x868		
	private:
		[[maybe_unused]] uint8_t __pad086c[0x4]; // 0x86c
	public:
		CUtlSymbolLarge m_iFilterName; // 0x870		
		CHandle<server::CBaseEntity> m_hFilter; // 0x878		
	private:
		[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
	public:
		CUtlSymbolLarge m_iszDecal; // 0x880		
		entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x888		
		
		// Datamap fields:
		// int32_t m_nClipStyle; // 0x7ec
		// void CEnvBeamStrikeThink; // 0x0
		// void CEnvBeamUpdateThink; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputToggle; // 0x0
		// void InputStrikeOnce; // 0x0
	};
};
