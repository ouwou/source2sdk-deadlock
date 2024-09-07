#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x398
	// Has VTable
	class CCitadel_Modifier_PsychicDagger_MakeDaggers : public server::CCitadelModifier
	{
	public:
		int32_t m_iCurrentProjectile; // 0xc8		
		int32_t m_nDaggerCount; // 0xcc		
	private:
		[[maybe_unused]] uint8_t __pad00d0[0x230]; // 0xd0
	public:
		entity2::GameTime_t m_flLastDaggerSpawn; // 0x300		
		entity2::GameTime_t m_flLastDaggerShoot; // 0x304		
		bool m_bIsSpawning; // 0x308		
		bool m_bInterrupted; // 0x309		
	private:
		[[maybe_unused]] uint8_t __pad030a[0x6]; // 0x30a
	public:
		CUtlVector<server::CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t> m_vecDaggers; // 0x310		
	};
};
