#pragma once
#include "server/CCitadelModifier.hpp"
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
	// Size: 0x228
	// Has VTable
	class CCitadel_Modifier_ChainLightningEffect : public server::CCitadelModifier
	{
	public:
		int32_t m_nChainCount; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities; // 0xd0		
		CUtlVector<CHandle<server::CBaseEntity>> m_hUnhitEnts; // 0xe8		
		Vector m_vLastSource; // 0x100		
	};
};
