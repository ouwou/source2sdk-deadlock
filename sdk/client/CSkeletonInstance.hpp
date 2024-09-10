#pragma once
#include "client/CGameSceneNode.hpp"
#include "client/CModelState.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x470
	// Has VTable
	// 
	// MNetworkVarNames "CModelState m_modelState"
	// MNetworkVarNames "bool m_bIsAnimationEnabled"
	// MNetworkVarNames "bool m_bUseParentRenderBounds"
	// MNetworkVarNames "CUtlStringToken m_materialGroup"
	// MNetworkVarNames "uint8 m_nHitboxSet"
	class CSkeletonInstance : public client::CGameSceneNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0160[0x10]; // 0x160
	public:
		// MNetworkEnable
		client::CModelState m_modelState; // 0x170		
		// MNetworkEnable
		bool m_bIsAnimationEnabled; // 0x3d0		
		// MNetworkEnable
		bool m_bUseParentRenderBounds; // 0x3d1		
		// MNetworkDisable
		bool m_bDisableSolidCollisionsForHierarchy; // 0x3d2		
		struct 
		{
			// MNetworkDisable
			uint8_t m_bDirtyMotionType: 1; 			
			// MNetworkDisable
			uint8_t m_bIsGeneratingLatchedParentSpaceState: 1; 			
			uint16_t __pad0: 14;
		}; // 16 bits
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonMaterialGroupChanged"
		CUtlStringToken m_materialGroup; // 0x3d4		
		// MNetworkEnable
		uint8_t m_nHitboxSet; // 0x3d8		
		
		// Datamap fields:
		// Vector velocity; // 0x7fffffff
		// Vector rotationAxis; // 0x7fffffff
		// float rotationSpeed; // 0x7fffffff
	};
};
