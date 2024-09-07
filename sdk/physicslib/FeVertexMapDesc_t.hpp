#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct FeVertexMapDesc_t
	{
	public:
		CUtlString sName; // 0x0		
		uint32_t nNameHash; // 0x8		
		uint32_t nColor; // 0xc		
		uint32_t nFlags; // 0x10		
		uint16_t nVertexBase; // 0x14		
		uint16_t nVertexCount; // 0x16		
		uint32_t nMapOffset; // 0x18		
		uint32_t nNodeListOffset; // 0x1c		
		Vector vCenterOfMass; // 0x20		
		float flVolumetricSolveStrength; // 0x2c		
		int16_t nScaleSourceNode; // 0x30		
		uint16_t nNodeListCount; // 0x32		
	};
};
