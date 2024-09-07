#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseEntity.hpp"
#include "server/CBaseNPCMaker__ThreeStateDist_t.hpp"
#include "server/CBaseNPCMaker__VisibilityCriterion_t.hpp"
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
	// Size: 0x5d0
	// Has VTable
	// Is Abstract
	class CBaseNPCMaker : public server::CBaseEntity
	{
	public:
		int32_t m_nMaxNumNPCs; // 0x4d8		
		float m_flSpawnFrequency; // 0x4dc		
		float m_flRetryFrequency; // 0x4e0		
		int32_t m_nHullCheckMode; // 0x4e4		
		CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnSpawnNPC; // 0x4e8		
		entity2::CEntityIOOutput m_OnAllSpawned; // 0x510		
		entity2::CEntityIOOutput m_OnAllSpawnedDead; // 0x538		
		entity2::CEntityIOOutput m_OnAllLiveChildrenDead; // 0x560		
		int32_t m_nLiveChildren; // 0x588		
		int32_t m_nMaxLiveChildren; // 0x58c		
		int32_t m_nMinSpawnDistance; // 0x590		
		int32_t m_nSpawnTheshold; // 0x594		
		float m_flRadius; // 0x598		
		bool m_bDisabled; // 0x59c		
		bool m_bSpawning; // 0x59d		
		bool m_bZeroPitchAndRoll; // 0x59e		
	private:
		[[maybe_unused]] uint8_t __pad059f[0x1]; // 0x59f
	public:
		CHandle<server::CBaseEntity> m_hIgnoreEntity; // 0x5a0		
	private:
		[[maybe_unused]] uint8_t __pad05a4[0x4]; // 0x5a4
	public:
		CUtlSymbolLarge m_iszIgnoreEnt; // 0x5a8		
		CUtlSymbolLarge m_iszDestinationGroup; // 0x5b0		
		CHandle<server::CBaseEntity> m_hSpawnEntity; // 0x5b8		
		server::CBaseNPCMaker__VisibilityCriterion_t m_CriterionVisibility; // 0x5bc		
		server::CBaseNPCMaker__ThreeStateDist_t m_CriterionDistance; // 0x5c0		
		
		// Datamap fields:
		// void InputSpawn; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// int32_t InputSetMaxChildren; // 0x0
		// int32_t InputAddMaxChildren; // 0x0
		// int32_t InputSetMaxLiveChildren; // 0x0
		// float InputSetSpawnFrequency; // 0x0
		// void InputSpawnInRadius; // 0x0
		// void InputSpawnInLine; // 0x0
		// int32_t InputSpawnMultiple; // 0x0
		// CUtlSymbolLarge InputChangeDestinationGroup; // 0x0
		// int32_t InputSetMinimumSpawnDistance; // 0x0
		// CUtlSymbolLarge InputSetSpawnEntity; // 0x0
		// void CBaseNPCMakerMakerThink; // 0x0
	};
};
