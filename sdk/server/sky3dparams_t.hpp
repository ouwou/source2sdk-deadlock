#pragma once
#include "server/fogparams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "int16 scale"
	// MNetworkVarNames "Vector origin"
	// MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
	// MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
	// MNetworkVarNames "fogparams_t fog"
	// MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
	struct sky3dparams_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		int16_t scale; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector origin; // 0xc		
		// MNetworkEnable
		bool bClip3DSkyBoxNearToWorldFar; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
	public:
		// MNetworkEnable
		float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c		
		// MNetworkEnable
		server::fogparams_t fog; // 0x20		
		// MNetworkEnable
		WorldGroupId_t m_nWorldGroupID; // 0x88		
	};
};
