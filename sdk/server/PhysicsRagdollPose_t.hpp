#pragma once
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MNetworkVarNames "CTransform m_Transforms"
	// MNetworkVarNames "EHANDLE m_hOwner"
	struct PhysicsRagdollPose_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnTransformChanged"
		CNetworkUtlVectorBase<CTransform> m_Transforms; // 0x8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hOwner; // 0x20		
	};
};
