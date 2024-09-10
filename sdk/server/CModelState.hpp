#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x260
	// Has VTable
	// 
	// MNetworkVarNames "HModelStrong m_hModel"
	// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
	// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
	// MNetworkVarNames "int8 m_nIdealMotionType"
	class CModelState
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0xd0]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonModelChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0xd0		
		// MNetworkDisable
		CUtlSymbolLarge m_ModelName; // 0xd8		
	private:
		[[maybe_unused]] uint8_t __pad00e0[0x38]; // 0xe0
	public:
		// MNetworkEnable
		bool m_bClientClothCreationSuppressed; // 0x118		
	private:
		[[maybe_unused]] uint8_t __pad0119[0xb7]; // 0x119
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
		uint64_t m_MeshGroupMask; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d8[0x7a]; // 0x1d8
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonMotionTypeChanged"
		int8_t m_nIdealMotionType; // 0x252		
		// MNetworkDisable
		int8_t m_nForceLOD; // 0x253		
		// MNetworkDisable
		int8_t m_nClothUpdateFlags; // 0x254		
		
		// Datamap fields:
		// void m_pVPhysicsAggregate; // 0x110
	};
};
