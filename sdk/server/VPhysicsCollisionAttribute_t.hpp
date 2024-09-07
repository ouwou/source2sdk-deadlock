#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "uint64 m_nInteractsAs"
	// MNetworkVarNames "uint64 m_nInteractsWith"
	// MNetworkVarNames "uint64 m_nInteractsExclude"
	// MNetworkVarNames "uint32 m_nEntityId"
	// MNetworkVarNames "uint32 m_nOwnerId"
	// MNetworkVarNames "uint16 m_nHierarchyId"
	// MNetworkVarNames "uint8 m_nCollisionGroup"
	// MNetworkVarNames "uint8 m_nCollisionFunctionMask"
	struct VPhysicsCollisionAttribute_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		uint64_t m_nInteractsAs; // 0x8		
		// MNetworkEnable
		uint64_t m_nInteractsWith; // 0x10		
		// MNetworkEnable
		uint64_t m_nInteractsExclude; // 0x18		
		// MNetworkEnable
		uint32_t m_nEntityId; // 0x20		
		// MNetworkEnable
		uint32_t m_nOwnerId; // 0x24		
		// MNetworkEnable
		uint16_t m_nHierarchyId; // 0x28		
		// MNetworkEnable
		uint8_t m_nCollisionGroup; // 0x2a		
		// MNetworkEnable
		uint8_t m_nCollisionFunctionMask; // 0x2b		
	};
};
