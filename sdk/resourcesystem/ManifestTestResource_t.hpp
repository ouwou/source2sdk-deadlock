#pragma once
#include "resourcesystem/InfoForResourceTypeManifestTestResource_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: resourcesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::resourcesystem
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	struct ManifestTestResource_t
	{
	public:
		// MKV3TransferName "name"
		CUtlString m_name; // 0x0		
		// MKV3TransferName "child"
		CStrongHandle<resourcesystem::InfoForResourceTypeManifestTestResource_t> m_child; // 0x8		
	};
};
