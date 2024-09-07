#pragma once
#include "client/C_BaseToggle.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
	// MNetworkVarNames "bool m_usable"
	// MNetworkVarNames "string_t m_szDisplayText"
	class C_BaseButton : public client::C_BaseToggle
	{
	public:
		// MNetworkEnable
		CHandle<client::C_BaseModelEntity> m_glowEntity; // 0x830		
		// MNetworkEnable
		bool m_usable; // 0x834		
	private:
		[[maybe_unused]] uint8_t __pad0835[0x3]; // 0x835
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_szDisplayText; // 0x838		
	};
};
