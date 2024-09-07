#pragma once
#include "client/C_PointCamera.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5c0
	// Has VTable
	class C_PointCameraVFOV : public client::C_PointCamera
	{
	public:
		float m_flVerticalFOV; // 0x5b8		
		
		// Datamap fields:
		// float m_flDofFarCrisp; // 0x598
		// float m_flDofFarBlurry; // 0x59c
		// float m_flDofTiltToGround; // 0x5a0
	};
};
