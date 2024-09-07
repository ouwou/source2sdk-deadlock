#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CSoundOpvarSetPointBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x660
	// Has VTable
	class CSoundOpvarSetPointEntity : public server::CSoundOpvarSetPointBase
	{
	public:
		entity2::CEntityIOOutput m_OnEnter; // 0x570		
		entity2::CEntityIOOutput m_OnExit; // 0x598		
		bool m_bAutoDisable; // 0x5c0		
	private:
		[[maybe_unused]] uint8_t __pad05c1[0x23]; // 0x5c1
	public:
		float m_flDistanceMin; // 0x5e4		
		float m_flDistanceMax; // 0x5e8		
		float m_flDistanceMapMin; // 0x5ec		
		float m_flDistanceMapMax; // 0x5f0		
		float m_flOcclusionRadius; // 0x5f4		
		float m_flOcclusionMin; // 0x5f8		
		float m_flOcclusionMax; // 0x5fc		
		float m_flValSetOnDisable; // 0x600		
		bool m_bSetValueOnDisable; // 0x604		
		bool m_bReloading; // 0x605		
	private:
		[[maybe_unused]] uint8_t __pad0606[0x2]; // 0x606
	public:
		int32_t m_nSimulationMode; // 0x608		
		int32_t m_nVisibilitySamples; // 0x60c		
		Vector m_vDynamicProxyPoint; // 0x610		
		float m_flDynamicMaximumOcclusion; // 0x61c		
		CEntityHandle m_hDynamicEntity; // 0x620		
	private:
		[[maybe_unused]] uint8_t __pad0624[0x4]; // 0x624
	public:
		CUtlSymbolLarge m_iszDynamicEntityName; // 0x628		
		float m_flPathingDistanceNormFactor; // 0x630		
		Vector m_vPathingSourcePos; // 0x634		
		Vector m_vPathingListenerPos; // 0x640		
		Vector m_vPathingDirection; // 0x64c		
		int32_t m_nPathingSourceIndex; // 0x658		
		
		// Datamap fields:
		// void InputSetDisabledValue; // 0x0
		// void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
	};
};
