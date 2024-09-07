#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
	// Alignment: 4
	// Size: 0x34
	// Has Trivial Destructor
	// 
	// MVDataRoot
	// MGetKV3ClassDefaults
	class CNavHullVData
	{
	public:
		// MPropertyFriendlyName "Enabled"
		// MPropertyDescription "Is this agent enabled for generation? ( will result in 0 nav areas for this agent if not )."
		bool m_bAgentEnabled; // 0x0		
		// MPropertyFriendlyName "Radius"
		// MPropertyDescription "Radius of navigating agent capsule."
		float m_agentRadius; // 0x4		
		// MPropertyFriendlyName "Height"
		// MPropertyDescription "Height of navigating agent capsule."
		float m_agentHeight; // 0x8		
		// MPropertyFriendlyName "Enable Short Height"
		// MPropertyDescription "Enable shorter navigating agent capsules ( e.g. crouch ) in addition to regular height capsules."
		bool m_agentShortHeightEnabled; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
	public:
		// MPropertyFriendlyName "Short height"
		// MPropertyDescription "Short Height of navigating agent capsules if enabled."
		float m_agentShortHeight; // 0x10		
		// MPropertyFriendlyName "Max Climb"
		// MPropertyDescription "Max vertical offset that the agent simply ignores and walks over."
		float m_agentMaxClimb; // 0x14		
		// MPropertyFriendlyName "Max Slope"
		// MPropertyDescription "Max ground slope to be considered walkable."
		int32_t m_agentMaxSlope; // 0x18		
		// MPropertyFriendlyName "Max Jump Down Distance"
		// MPropertyDescription "Max vertical offset at which to create a jump connection ( possibly one-way )."
		float m_agentMaxJumpDownDist; // 0x1c		
		// MPropertyFriendlyName "Max Horizontal Jump Distance"
		// MPropertyDescription "Max horizontal offset over which to create a jump connection ( actually a parameter into the true threshold function )."
		float m_agentMaxJumpHorizDistBase; // 0x20		
		// MPropertyFriendlyName "Max Jump Up Distance"
		// MPropertyDescription "Max vertical offset at which to make a jump connection two-way."
		float m_agentMaxJumpUpDist; // 0x24		
		// MPropertyFriendlyName "Border Erosion"
		// MPropertyDescription "Border erosion in voxel units ( -1 to use default value based on agent radius )."
		int32_t m_agentBorderErosion; // 0x28		
		// MPropertyFriendlyName "Hierarchical Nav"
		// MPropertyDescription "Enables super node nav information to be generated"
		bool m_flowMapGenerationEnabled; // 0x2c		
	private:
		[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
	public:
		// MPropertyFriendlyName "Hierarchical Nav Max Super Node radius"
		// MPropertyDescription "Maximum radius of a super node - larger means lower resolution"
		float m_flowMapNodeMaxRadius; // 0x30		
	};
};
