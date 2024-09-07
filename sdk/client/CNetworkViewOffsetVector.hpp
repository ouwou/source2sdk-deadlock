#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// Has Trivial Destructor
	// 
	// MNetworkVarsAtomic
	class CNetworkViewOffsetVector
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		// MNetworkBitCount "10"
		// MNetworkMinValue "-64.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "4"
		// MNetworkChangeCallback "CNetworkViewOffsetVector"
		CNetworkedQuantizedFloat m_vecX; // 0x10		
		// MNetworkBitCount "10"
		// MNetworkMinValue "-64.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "4"
		// MNetworkChangeCallback "CNetworkViewOffsetVector"
		CNetworkedQuantizedFloat m_vecY; // 0x18		
		// MNetworkBitCount "20"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "128.000000"
		// MNetworkEncodeFlags "4"
		// MNetworkChangeCallback "CNetworkViewOffsetVector"
		CNetworkedQuantizedFloat m_vecZ; // 0x20		
	};
};
