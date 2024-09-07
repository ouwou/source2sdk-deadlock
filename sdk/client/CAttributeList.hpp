#pragma once
#include "client/C_EconItemAttribute.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CAttributeManager;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MNetworkVarNames "C_EconItemAttribute m_Attributes"
	class CAttributeList
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
		C_UtlVectorEmbeddedNetworkVar<client::C_EconItemAttribute> m_Attributes; // 0x8		
		client::CAttributeManager* m_pManager; // 0x58		
	};
};
