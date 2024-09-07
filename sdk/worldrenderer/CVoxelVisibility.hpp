#pragma once
#include "worldrenderer/VoxelVisBlockOffset_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0xa0
	// 
	// MGetKV3ClassDefaults
	class CVoxelVisibility
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
	public:
		uint32_t m_nBaseClusterCount; // 0x40		
		uint32_t m_nPVSBytesPerCluster; // 0x44		
		Vector m_vMinBounds; // 0x48		
		Vector m_vMaxBounds; // 0x54		
		float m_flGridSize; // 0x60		
		uint32_t m_nSkyVisibilityCluster; // 0x64		
		uint32_t m_nSunVisibilityCluster; // 0x68		
		worldrenderer::VoxelVisBlockOffset_t m_NodeBlock; // 0x6c		
		worldrenderer::VoxelVisBlockOffset_t m_RegionBlock; // 0x74		
		worldrenderer::VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7c		
		worldrenderer::VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84		
		worldrenderer::VoxelVisBlockOffset_t m_MasksBlock; // 0x8c		
		worldrenderer::VoxelVisBlockOffset_t m_nVisBlocks; // 0x94		
	};
};
