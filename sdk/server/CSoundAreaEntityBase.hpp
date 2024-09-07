#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "string_t m_iszSoundAreaType"
	// MNetworkVarNames "Vector m_vPos"
	class CSoundAreaEntityBase : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszSoundAreaType; // 0x4e0		
		// MNetworkEnable
		Vector m_vPos; // 0x4e8		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
