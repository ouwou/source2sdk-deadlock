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
	// Size: 0x568
	// Has VTable
	class CPhysFixed : public server::CPhysConstraint
	{
	public:
		float m_flLinearFrequency; // 0x550		
		float m_flLinearDampingRatio; // 0x554		
		float m_flAngularFrequency; // 0x558		
		float m_flAngularDampingRatio; // 0x55c		
		bool m_bEnableLinearConstraint; // 0x560		
		bool m_bEnableAngularConstraint; // 0x561		
		
		// Datamap fields:
		// float InputSetLinearFrequency; // 0x0
		// float InputSetLinearDampingRatio; // 0x0
		// float InputSetAngularFrequency; // 0x0
		// float InputSetAngularDampingRatio; // 0x0
	};
};
