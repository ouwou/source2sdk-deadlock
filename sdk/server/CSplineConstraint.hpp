#pragma once
#include "server/CPhysConstraint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5a8
	// Has VTable
	class CSplineConstraint : public server::CPhysConstraint
	{
	private:
		[[maybe_unused]] uint8_t __pad0550[0x48]; // 0x550
	public:
		Vector m_vAnchorOffsetRestore; // 0x598		
		
		// Datamap fields:
		// void CSplineConstraintUpdateThink; // 0x0
	};
};
