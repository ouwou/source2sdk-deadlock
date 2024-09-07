#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ControlPointToRadialScreenSpace : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "source Control Point in World"
		int32_t m_nCPIn; // 0x1c8		
		// MPropertyFriendlyName "Source Control Point offset"
		// MVectorIsCoordinate
		Vector m_vecCP1Pos; // 0x1cc		
		// MPropertyFriendlyName "Set control point number"
		int32_t m_nCPOut; // 0x1d8		
		// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nCPOutField; // 0x1dc		
		// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
		int32_t m_nCPSSPosOut; // 0x1e0		
	};
};
