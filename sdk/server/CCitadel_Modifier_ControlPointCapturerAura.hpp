#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelControlPointTrigger;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_ControlPointCapturerAura : public server::CCitadelModifierAura
	{
	public:
		client::ParticleIndex_t m_particle; // 0xe8		
		CHandle<server::CCitadelControlPointTrigger> m_hCP; // 0xec		
	};
};
