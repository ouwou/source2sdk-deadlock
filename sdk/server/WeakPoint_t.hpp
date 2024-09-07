#pragma once
#include "client/HitGroup_t.hpp"
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
	// Size: 0x98
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hOuter"
	// MNetworkVarNames "HitGroup_t m_nCritHitGroup"
	// MNetworkVarNames "int m_nBodyGroup"
	// MNetworkVarNames "bool m_bPermanentlyBroken"
	// MNetworkVarNames "int m_nBrokenBodygroupIndex"
	struct WeakPoint_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x7c]; // 0x0
	public:
		bool m_bRegistered; // 0x7c		
	private:
		[[maybe_unused]] uint8_t __pad007d[0x3]; // 0x7d
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnOuterChanged"
		CHandle<server::CBaseEntity> m_hOuter; // 0x80		
		// MNetworkEnable
		// MNetworkChangeCallback "OnFlashDataChanged"
		client::HitGroup_t m_nCritHitGroup; // 0x84		
		// MNetworkEnable
		// MNetworkChangeCallback "OnFlashDataChanged"
		int32_t m_nBodyGroup; // 0x88		
		// MNetworkEnable
		// MNetworkChangeCallback "OnPermanentlyBroken"
		bool m_bPermanentlyBroken; // 0x8c		
	private:
		[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
	public:
		// MNetworkEnable
		int32_t m_nBrokenBodygroupIndex; // 0x90		
		
		// Datamap fields:
		// void m_OnBreakDelegate; // 0x60
		// void m_params; // 0x38
		// void m_nBreakEffectsAttachment; // 0x30
		// void m_nBreakTick; // 0x70
	};
};
