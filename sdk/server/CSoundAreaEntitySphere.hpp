#pragma once
#include "server/CSoundAreaEntityBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x500
	// Has VTable
	// 
	// MNetworkVarNames "float m_flRadius"
	class CSoundAreaEntitySphere : public server::CSoundAreaEntityBase
	{
	public:
		// MNetworkEnable
		float m_flRadius; // 0x4f8		
	};
};
