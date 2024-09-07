#pragma once
#include "client/ModifierPropRuntimeHandle_t.hpp"
#include "entity2/CNetworkVarChainer.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x240
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_vecProviders"
	// MNetworkVarNames "uint32 m_nDisabledGroups"
	// MNetworkVarNames "uint32 m_bvEnabledStateMask"
	// MNetworkVarNames "uint32 m_bvDisabledStateMask"
	// MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
	class CModifierProperty
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		entity2::CNetworkVarChainer __m_pChainEntity; // 0x8		
		CHandle<client::C_BaseEntity> m_hOwner; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0034[0x15f]; // 0x34
	public:
		uint8_t m_nProviderVisitedFlags; // 0x193		
		bool m_bModifierStatesDirty; // 0x194		
		bool m_bPredictedOwner; // 0x195		
		int8_t m_iLockRefCount; // 0x196		
	private:
		[[maybe_unused]] uint8_t __pad0197[0x1]; // 0x197
	public:
		client::ModifierPropRuntimeHandle_t m_hHandle; // 0x198		
	private:
		[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
	public:
		uint32_t m_nBroadcastEventListenerMask; // 0x19c		
	private:
		[[maybe_unused]] uint8_t __pad01a0[0x8]; // 0x1a0
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecProviders; // 0x1a8		
		// MNetworkEnable
		uint32_t m_nDisabledGroups; // 0x1c0		
		// MNetworkEnable
		// MNetworkChangeCallback "modifierStatesChanged"
		uint32_t m_bvEnabledStateMask[6]; // 0x1c4		
		// MNetworkEnable
		// MNetworkChangeCallback "modifierStatesChanged"
		uint32_t m_bvDisabledStateMask[6]; // 0x1dc		
		// MNetworkEnable
		// MNetworkChangeCallback "modifierStatesChanged"
		uint32_t m_bvEnabledPredictedStateMask[6]; // 0x1f4		
		
		// Datamap fields:
		// void m_pNotifyOwnerEvents; // 0x1a0
		// void m_vecModifiers; // 0x38
	};
};
