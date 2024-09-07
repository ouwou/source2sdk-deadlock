#pragma once
#include "server/CBaseEntity.hpp"
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
	// Size: 0x4f0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flCameraDist"
	// MNetworkVarNames "float m_flCameraPitch"
	// MNetworkVarNames "float m_flCameraHeight"
	// MNetworkVarNames "EHANDLE m_hTarget"
	class CCitadelSpectateDirectedCamera : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x4]; // 0x4d8
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		float m_flCameraDist; // 0x4dc		
		// MNetworkEnable
		float m_flCameraPitch; // 0x4e0		
		// MNetworkEnable
		float m_flCameraHeight; // 0x4e4		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTarget; // 0x4e8		
	};
};
