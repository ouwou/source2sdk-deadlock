#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CPhysSurfacePropertiesAudio
	{
	public:
		// MKV3TransferName "audioreflectivity"
		float m_reflectivity; // 0x0		
		// MKV3TransferName "audiohardnessfactor"
		float m_hardnessFactor; // 0x4		
		// MKV3TransferName "audioroughnessfactor"
		float m_roughnessFactor; // 0x8		
		// MKV3TransferName "scrapeRoughThreshold"
		float m_roughThreshold; // 0xc		
		// MKV3TransferName "impactHardThreshold"
		float m_hardThreshold; // 0x10		
		// MKV3TransferName "audioHardMinVelocity"
		float m_hardVelocityThreshold; // 0x14		
		// MKV3TransferName "staticImpactVolume"
		float m_flStaticImpactVolume; // 0x18		
		// MKV3TransferName "occlusionFactor"
		float m_flOcclusionFactor; // 0x1c		
	};
};
