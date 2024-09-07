#pragma once
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0x10
	// Has Trivial Destructor
	struct CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t
	{
	public:
		int32_t m_nDaggerNum; // 0x0		
		CHandle<server::CBaseEntity> m_Target; // 0x4		
		client::ParticleIndex_t m_Dagger; // 0x8		
		client::ParticleIndex_t m_TargetPreview; // 0xc		
	};
};
