#pragma once
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe0
	// Has Trivial Destructor
	struct CitadelAbilityProjectileHitInfo_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0xc8]; // 0x0
	public:
		client::C_BaseEntity* m_pOther; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00d0[0xc]; // 0xd0
	public:
		bool m_bIsTriggerTouch; // 0xdc		
	};
};
