#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CFuncPlat;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x770
	// Has VTable
	class CPlatTrigger : public server::CBaseModelEntity
	{
	public:
		CHandle<server::CFuncPlat> m_pPlatform; // 0x768		
	};
};
