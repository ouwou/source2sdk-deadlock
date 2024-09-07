#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e8
	// Has VTable
	class CCitadelHeroLoader : public server::CBaseEntity
	{
	public:
		CUtlSymbolLarge m_hero; // 0x4d8		
		int32_t m_nLoadSeq; // 0x4e0		
		CHandle<server::CBaseEntity> m_hOwner; // 0x4e4		
	};
};
