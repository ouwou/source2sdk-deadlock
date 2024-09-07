#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x30
	// Has Trivial Destructor
	// 
	// MNetworkVarsAtomic
	class CNetworkOriginCellCoordQuantizedVector
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnCellChanged"
		// MNetworkPriority "31"
		// MNetworkSerializer "cellx"
		uint16_t m_cellX; // 0x10		
		// MNetworkEnable
		// MNetworkChangeCallback "OnCellChanged"
		// MNetworkPriority "31"
		// MNetworkSerializer "celly"
		uint16_t m_cellY; // 0x12		
		// MNetworkEnable
		// MNetworkChangeCallback "OnCellChanged"
		// MNetworkPriority "31"
		// MNetworkSerializer "cellz"
		uint16_t m_cellZ; // 0x14		
		// MNetworkEnable
		uint16_t m_nOutsideWorld; // 0x16		
		// MNetworkBitCount "15"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1024.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkChangeCallback "OnCellChanged"
		// MNetworkPriority "31"
		// MNetworkSerializer "posx"
		CNetworkedQuantizedFloat m_vecX; // 0x18		
		// MNetworkBitCount "15"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1024.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkChangeCallback "OnCellChanged"
		// MNetworkPriority "31"
		// MNetworkSerializer "posy"
		CNetworkedQuantizedFloat m_vecY; // 0x20		
		// MNetworkBitCount "15"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1024.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkChangeCallback "OnCellChanged"
		// MNetworkPriority "31"
		// MNetworkSerializer "posz"
		CNetworkedQuantizedFloat m_vecZ; // 0x28		
	};
};
