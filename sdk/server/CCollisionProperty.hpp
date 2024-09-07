#pragma once
#include "client/SolidType_t.hpp"
#include "client/SurroundingBoundsType_t.hpp"
#include "server/VPhysicsCollisionAttribute_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb0
	// Has VTable
	// 
	// MNetworkVarNames "VPhysicsCollisionAttribute_t m_collisionAttribute"
	// MNetworkVarNames "Vector m_vecMins"
	// MNetworkVarNames "Vector m_vecMaxs"
	// MNetworkVarNames "uint8 m_usSolidFlags"
	// MNetworkVarNames "SolidType_t m_nSolidType"
	// MNetworkVarNames "uint8 m_triggerBloat"
	// MNetworkVarNames "SurroundingBoundsType_t m_nSurroundType"
	// MNetworkVarNames "uint8 m_CollisionGroup"
	// MNetworkVarNames "uint8 m_nEnablePhysics"
	// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMins"
	// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMaxs"
	// MNetworkVarNames "Vector m_vCapsuleCenter1"
	// MNetworkVarNames "Vector m_vCapsuleCenter2"
	// MNetworkVarNames "float m_flCapsuleRadius"
	class CCollisionProperty
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "CollisionAttributeChanged"
		server::VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateOBB"
		Vector m_vecMins; // 0x40		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateOBB"
		Vector m_vecMaxs; // 0x4c		
	private:
		[[maybe_unused]] uint8_t __pad0058[0x2]; // 0x58
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateSolidFlags"
		uint8_t m_usSolidFlags; // 0x5a		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateSolidType"
		client::SolidType_t m_nSolidType; // 0x5b		
		// MNetworkEnable
		// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
		uint8_t m_triggerBloat; // 0x5c		
		// MNetworkEnable
		// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
		client::SurroundingBoundsType_t m_nSurroundType; // 0x5d		
		// MNetworkEnable
		uint8_t m_CollisionGroup; // 0x5e		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateEnablePhysics"
		uint8_t m_nEnablePhysics; // 0x5f		
		float m_flBoundingRadius; // 0x60		
		// MNetworkEnable
		// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
		Vector m_vecSpecifiedSurroundingMins; // 0x64		
		// MNetworkEnable
		// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
		Vector m_vecSpecifiedSurroundingMaxs; // 0x70		
		Vector m_vecSurroundingMaxs; // 0x7c		
		Vector m_vecSurroundingMins; // 0x88		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateCapsule"
		Vector m_vCapsuleCenter1; // 0x94		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateCapsule"
		Vector m_vCapsuleCenter2; // 0xa0		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpdateCapsule"
		float m_flCapsuleRadius; // 0xac		
	};
};
