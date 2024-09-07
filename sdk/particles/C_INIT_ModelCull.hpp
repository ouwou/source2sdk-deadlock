#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x250
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_ModelCull : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "use only bounding box"
		bool m_bBoundBox; // 0x1cc		
		// MPropertyFriendlyName "cull outside instead of inside"
		bool m_bCullOutside; // 0x1cd		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x1ce		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x1cf		
	};
};
