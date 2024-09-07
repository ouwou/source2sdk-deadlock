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
	// Size: 0x578
	// Has VTable
	class CRagdollConstraint : public server::CPhysConstraint
	{
	public:
		float m_xmin; // 0x550		
		float m_xmax; // 0x554		
		float m_ymin; // 0x558		
		float m_ymax; // 0x55c		
		float m_zmin; // 0x560		
		float m_zmax; // 0x564		
		float m_xfriction; // 0x568		
		float m_yfriction; // 0x56c		
		float m_zfriction; // 0x570		
	};
};
