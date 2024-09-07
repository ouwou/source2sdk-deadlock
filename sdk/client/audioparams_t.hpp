#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x78
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "Vector localSound"
	// MNetworkVarNames "int32 soundscapeIndex"
	// MNetworkVarNames "uint8 localBits"
	// MNetworkVarNames "int soundscapeEntityListIndex"
	// MNetworkVarNames "uint32 soundEventHash"
	struct audioparams_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector localSound[8]; // 0x8		
		// MNetworkEnable
		int32_t soundscapeIndex; // 0x68		
		// MNetworkEnable
		uint8_t localBits; // 0x6c		
	private:
		[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
	public:
		// MNetworkEnable
		int32_t soundscapeEntityListIndex; // 0x70		
		// MNetworkEnable
		uint32_t soundEventHash; // 0x74		
	};
};
