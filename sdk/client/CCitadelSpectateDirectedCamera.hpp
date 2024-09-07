#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x570
	// Has VTable
	// 
	// MNetworkVarNames "float m_flCameraDist"
	// MNetworkVarNames "float m_flCameraPitch"
	// MNetworkVarNames "float m_flCameraHeight"
	// MNetworkVarNames "EHANDLE m_hTarget"
	class CCitadelSpectateDirectedCamera : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x4]; // 0x558
	public:
		// MNetworkEnable
		// MNetworkPriority "32"
		float m_flCameraDist; // 0x55c		
		// MNetworkEnable
		float m_flCameraPitch; // 0x560		
		// MNetworkEnable
		float m_flCameraHeight; // 0x564		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTarget; // 0x568		
	};
};
