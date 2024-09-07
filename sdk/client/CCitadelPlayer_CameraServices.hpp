#pragma once
#include "client/CPlayer_CameraServices.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_PostProcessingVolume;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x238
	// Has VTable
	class CCitadelPlayer_CameraServices : public client::CPlayer_CameraServices
	{
	public:
		CHandle<client::C_PostProcessingVolume> m_hPrevPostProcessingVolume; // 0x230		
	};
};
