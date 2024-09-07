#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x3d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomModelSequence : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "activity"
		// MPropertySuppressExpr "mod != dota"
		char m_ActivityName[256]; // 0x1c8		
		// MPropertyFriendlyName "sequence"
		// MPropertySuppressExpr "mod == dota"
		char m_SequenceName[256]; // 0x2c8		
		// MPropertyFriendlyName "model"
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0x3c8		
	};
};
