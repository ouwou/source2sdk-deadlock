#pragma once
#include "client/C_PointClientUIWorldPanel.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelPlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 16
	// Size: 0xaa0
	// Has VTable
	class C_InWorldKeyBindPanel : public client::C_PointClientUIWorldPanel
	{
	public:
		CHandle<client::C_CitadelPlayerPawn> m_hPlayer; // 0xa90		
	};
};
