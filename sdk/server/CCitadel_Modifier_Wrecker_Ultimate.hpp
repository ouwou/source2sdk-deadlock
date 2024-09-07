#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0x2a8
	// Has VTable
	class CCitadel_Modifier_Wrecker_Ultimate : public server::CCitadelModifier
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecGrabbed; // 0xc8		
		client::ParticleIndex_t m_nFXIndex; // 0xe0		
	};
};
