#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x580
	// Has VTable
	// Is Abstract
	// 
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "string_t m_iszSoundAreaType"
	// MNetworkVarNames "Vector m_vPos"
	class C_SoundAreaEntityBase : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad0559[0x7]; // 0x559
	public:
		bool m_bWasEnabled; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0561[0x7]; // 0x561
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszSoundAreaType; // 0x568		
		// MNetworkEnable
		Vector m_vPos; // 0x570		
		
		// Datamap fields:
		// void m_nGUID; // 0x55c
	};
};
