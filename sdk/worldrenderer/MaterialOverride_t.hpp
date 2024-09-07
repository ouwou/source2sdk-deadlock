#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "worldrenderer/BaseSceneObjectOverride_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct MaterialOverride_t : public worldrenderer::BaseSceneObjectOverride_t
	{
	public:
		uint32_t m_nSubSceneObject; // 0x4		
		uint32_t m_nDrawCallIndex; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_pMaterial; // 0x10		
	};
};
