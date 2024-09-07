#pragma once
#include "server/CPointCamera.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x540
	// Has VTable
	class CPointCameraVFOV : public server::CPointCamera
	{
	public:
		float m_flVerticalFOV; // 0x538		
		
		// Datamap fields:
		// float m_flDofFarCrisp; // 0x518
		// float m_flDofFarBlurry; // 0x51c
		// float m_flDofTiltToGround; // 0x520
	};
};
