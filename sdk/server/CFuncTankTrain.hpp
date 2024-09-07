#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CFuncTrackTrain.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8e0
	// Has VTable
	class CFuncTankTrain : public server::CFuncTrackTrain
	{
	public:
		entity2::CEntityIOOutput m_OnDeath; // 0x8b8		
	};
};
