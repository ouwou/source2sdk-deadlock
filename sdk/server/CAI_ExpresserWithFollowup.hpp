#pragma once
#include "server/CAI_Expresser.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct ResponseFollowup;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	class CAI_ExpresserWithFollowup : public server::CAI_Expresser
	{
	public:
		client::ResponseFollowup* m_pPostponedFollowup; // 0x78		
	};
};
