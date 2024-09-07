#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x1c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CPhysSurfacePropertiesPhysics
	{
	public:
		// MKV3TransferName "friction"
		float m_friction; // 0x0		
		// MKV3TransferName "elasticity"
		float m_elasticity; // 0x4		
		// MKV3TransferName "density"
		float m_density; // 0x8		
		// MKV3TransferName "thickness"
		float m_thickness; // 0xc		
		// MKV3TransferName "softcontactfrequency"
		float m_softContactFrequency; // 0x10		
		// MKV3TransferName "softcontactdampingratio"
		float m_softContactDampingRatio; // 0x14		
		// MKV3TransferName "wheeldrag"
		float m_wheelDrag; // 0x18		
	};
};
