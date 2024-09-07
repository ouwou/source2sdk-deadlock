#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	class CRagdollMagnet : public server::CPointEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		float m_radius; // 0x4dc		
		float m_force; // 0x4e0		
		Vector m_axis; // 0x4e4		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
