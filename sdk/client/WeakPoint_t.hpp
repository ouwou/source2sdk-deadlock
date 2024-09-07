#pragma once
#include "client/HitGroup_t.hpp"
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
	// Size: 0x58
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
		[[maybe_unused]] uint8_t __pad0000[0x3c]; // 0x0
	public:
		bool m_bRegistered; // 0x3c		
	private:
		[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnOuterChanged"
		CHandle<client::C_BaseEntity> m_hOuter; // 0x40		
		// MNetworkEnable
		// MNetworkChangeCallback "OnFlashDataChanged"
		client::HitGroup_t m_nCritHitGroup; // 0x44		
		// MNetworkEnable
		// MNetworkChangeCallback "OnFlashDataChanged"
		int32_t m_nBodyGroup; // 0x48		
		// MNetworkEnable
		// MNetworkChangeCallback "OnPermanentlyBroken"
		bool m_bPermanentlyBroken; // 0x4c		
	private:
		[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
	public:
		// MNetworkEnable
		int32_t m_nBrokenBodygroupIndex; // 0x50		
	};
};
