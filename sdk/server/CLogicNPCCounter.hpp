#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x818
	// Has VTable
	class CLogicNPCCounter : public server::CBaseEntity
	{
	public:
		entity2::CEntityIOOutput m_OnMinCountAll; // 0x4d8		
		entity2::CEntityIOOutput m_OnMaxCountAll; // 0x500		
		CEntityOutputTemplate<float> m_OnFactorAll; // 0x528		
		CEntityOutputTemplate<float> m_OnMinPlayerDistAll; // 0x550		
		entity2::CEntityIOOutput m_OnMinCount_1; // 0x578		
		entity2::CEntityIOOutput m_OnMaxCount_1; // 0x5a0		
		CEntityOutputTemplate<float> m_OnFactor_1; // 0x5c8		
		CEntityOutputTemplate<float> m_OnMinPlayerDist_1; // 0x5f0		
		entity2::CEntityIOOutput m_OnMinCount_2; // 0x618		
		entity2::CEntityIOOutput m_OnMaxCount_2; // 0x640		
		CEntityOutputTemplate<float> m_OnFactor_2; // 0x668		
		CEntityOutputTemplate<float> m_OnMinPlayerDist_2; // 0x690		
		entity2::CEntityIOOutput m_OnMinCount_3; // 0x6b8		
		entity2::CEntityIOOutput m_OnMaxCount_3; // 0x6e0		
		CEntityOutputTemplate<float> m_OnFactor_3; // 0x708		
		CEntityOutputTemplate<float> m_OnMinPlayerDist_3; // 0x730		
		CEntityHandle m_hSource; // 0x758		
	private:
		[[maybe_unused]] uint8_t __pad075c[0x4]; // 0x75c
	public:
		CUtlSymbolLarge m_iszSourceEntityName; // 0x760		
		float m_flDistanceMax; // 0x768		
		bool m_bDisabled; // 0x76c		
	private:
		[[maybe_unused]] uint8_t __pad076d[0x3]; // 0x76d
	public:
		int32_t m_nMinCountAll; // 0x770		
		int32_t m_nMaxCountAll; // 0x774		
		int32_t m_nMinFactorAll; // 0x778		
		int32_t m_nMaxFactorAll; // 0x77c		
	private:
		[[maybe_unused]] uint8_t __pad0780[0x8]; // 0x780
	public:
		CUtlSymbolLarge m_iszNPCClassname_1; // 0x788		
		int32_t m_nNPCState_1; // 0x790		
		bool m_bInvertState_1; // 0x794		
	private:
		[[maybe_unused]] uint8_t __pad0795[0x3]; // 0x795
	public:
		int32_t m_nMinCount_1; // 0x798		
		int32_t m_nMaxCount_1; // 0x79c		
		int32_t m_nMinFactor_1; // 0x7a0		
		int32_t m_nMaxFactor_1; // 0x7a4		
	private:
		[[maybe_unused]] uint8_t __pad07a8[0x4]; // 0x7a8
	public:
		float m_flDefaultDist_1; // 0x7ac		
		CUtlSymbolLarge m_iszNPCClassname_2; // 0x7b0		
		int32_t m_nNPCState_2; // 0x7b8		
		bool m_bInvertState_2; // 0x7bc		
	private:
		[[maybe_unused]] uint8_t __pad07bd[0x3]; // 0x7bd
	public:
		int32_t m_nMinCount_2; // 0x7c0		
		int32_t m_nMaxCount_2; // 0x7c4		
		int32_t m_nMinFactor_2; // 0x7c8		
		int32_t m_nMaxFactor_2; // 0x7cc		
	private:
		[[maybe_unused]] uint8_t __pad07d0[0x4]; // 0x7d0
	public:
		float m_flDefaultDist_2; // 0x7d4		
		CUtlSymbolLarge m_iszNPCClassname_3; // 0x7d8		
		int32_t m_nNPCState_3; // 0x7e0		
		bool m_bInvertState_3; // 0x7e4		
	private:
		[[maybe_unused]] uint8_t __pad07e5[0x3]; // 0x7e5
	public:
		int32_t m_nMinCount_3; // 0x7e8		
		int32_t m_nMaxCount_3; // 0x7ec		
		int32_t m_nMinFactor_3; // 0x7f0		
		int32_t m_nMaxFactor_3; // 0x7f4		
	private:
		[[maybe_unused]] uint8_t __pad07f8[0x4]; // 0x7f8
	public:
		float m_flDefaultDist_3; // 0x7fc		
		
		// Datamap fields:
		// CUtlSymbolLarge InputSetSourceEntity; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void CLogicNPCCounterSetNPCCounterThink; // 0x0
	};
};
