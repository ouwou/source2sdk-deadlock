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
	class CNetworkVelocityVector
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		// MNetworkBitCount "18"
		// MNetworkMinValue "-4096.000000"
		// MNetworkMaxValue "4096.000000"
		// MNetworkEncodeFlags "4"
		// MNetworkChangeCallback "CNetworkVelocityVector"
		CNetworkedQuantizedFloat m_vecX; // 0x10		
		// MNetworkBitCount "18"
		// MNetworkMinValue "-4096.000000"
		// MNetworkMaxValue "4096.000000"
		// MNetworkEncodeFlags "4"
		// MNetworkChangeCallback "CNetworkVelocityVector"
		CNetworkedQuantizedFloat m_vecY; // 0x18		
		// MNetworkBitCount "18"
		// MNetworkMinValue "-4096.000000"
		// MNetworkMaxValue "4096.000000"
		// MNetworkEncodeFlags "4"
		// MNetworkChangeCallback "CNetworkVelocityVector"
		CNetworkedQuantizedFloat m_vecZ; // 0x20		
	};
};
