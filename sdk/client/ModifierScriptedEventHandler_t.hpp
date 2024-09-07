#pragma once
#include "client/EModifierScriptedEvent.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct ModifierScriptedEventHandler_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		client::EModifierScriptedEvent m_eEvent; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CEmbeddedSubclassGeneric<2> m_sModifierToAdd; // 0x10		
	};
};
