#pragma once
#include "soundsystem/CSosGroupActionSchema.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupActionSoundeventClusterSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Minimum Nearby Soundevents"
		int32_t m_nMinNearby; // 0x18		
		// MPropertyFriendlyName "Search Radius to Cluster Soundevents"
		float m_flClusterEpsilon; // 0x1c		
		// MPropertyFriendlyName "'Should Play' Opvar Name"
		CUtlString m_shouldPlayOpvar; // 0x20		
		// MPropertyFriendlyName "'Should Play Cluster Child' Opvar Name"
		CUtlString m_shouldPlayClusterChild; // 0x28		
		// MPropertyFriendlyName "Cluster Size Opvar Name"
		CUtlString m_clusterSizeOpvar; // 0x30		
		// MPropertyFriendlyName "'Group Box Mins' Opvar Name"
		CUtlString m_groupBoundingBoxMinsOpvar; // 0x38		
		// MPropertyFriendlyName "'Group Box Maxs' Opvar Name"
		CUtlString m_groupBoundingBoxMaxsOpvar; // 0x40		
	};
};
