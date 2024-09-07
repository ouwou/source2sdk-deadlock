#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/UnreachableTargetType_t.hpp"
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
	// Size: 0x30
	// Has Trivial Destructor
	struct UnreachableTarget_t
	{
	public:
		server::UnreachableTargetType_t nTargetType; // 0x0		
		CHandle<server::CBaseEntity> hTargetEnt; // 0x4		
		Vector vecTargetWorldPos; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		CGlobalSymbol sTargetSymbol; // 0x18		
		entity2::GameTime_t fExpireTime; // 0x20		
		Vector vecTargetLocationWhenUnreachable; // 0x24		
	};
};
