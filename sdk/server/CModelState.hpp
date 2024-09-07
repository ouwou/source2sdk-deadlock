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
	// Size: 0x230
	// Has VTable
	// 
	// MNetworkVarNames "HModelStrong m_hModel"
	// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
	// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
	// MNetworkVarNames "int8 m_nIdealMotionType"
	class CModelState
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0xa0]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonModelChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0xa0		
		// MNetworkDisable
		CUtlSymbolLarge m_ModelName; // 0xa8		
	private:
		[[maybe_unused]] uint8_t __pad00b0[0x38]; // 0xb0
	public:
		// MNetworkEnable
		bool m_bClientClothCreationSuppressed; // 0xe8		
	private:
		[[maybe_unused]] uint8_t __pad00e9[0xaf]; // 0xe9
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
		uint64_t m_MeshGroupMask; // 0x198		
	private:
		[[maybe_unused]] uint8_t __pad01a0[0x7a]; // 0x1a0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "skeletonMotionTypeChanged"
		int8_t m_nIdealMotionType; // 0x21a		
		// MNetworkDisable
		int8_t m_nForceLOD; // 0x21b		
		// MNetworkDisable
		int8_t m_nClothUpdateFlags; // 0x21c		
		
		// Datamap fields:
		// void m_pVPhysicsAggregate; // 0xe0
	};
};
