#pragma once
#include "server/CEconItemAttribute.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAttributeManager;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MNetworkVarNames "CEconItemAttribute m_Attributes"
	class CAttributeList
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
		CUtlVectorEmbeddedNetworkVar<server::CEconItemAttribute> m_Attributes; // 0x8		
		server::CAttributeManager* m_pManager; // 0x58		
	};
};
