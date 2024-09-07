#pragma once
#include <cstdint>
namespace source2sdk::modellib
{
	struct CPhysSurfaceProperties;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	class CVPhysXSurfacePropertiesList
	{
	public:
		// MKV3TransferName "SurfacePropertiesList"
		CUtlVector<modellib::CPhysSurfaceProperties*> m_surfacePropertiesList; // 0x0		
	};
};
