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
	// Size: 0x358
	// Has VTable
	class CCitadel_Modifier_FissureWall : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x230]; // 0xc8
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecFissureWallEntities; // 0x2f8		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecFisureEntitiesHit; // 0x310		
		int32_t m_nSegment; // 0x328		
		Vector m_vPosition; // 0x32c		
		Vector m_vDirection; // 0x338		
		Vector m_vLeft; // 0x344		
		float m_Length; // 0x350		
	};
};
